#include <bits/stdc++.h>
using namespace std;

int main()
{

    srand(time(0));
    double rand_x, rand_y, esti_pi = 0.0;
    int count_cir = 0, count_sqr = 0;
    double pi = M_PI;
    while (M_PI - esti_pi > 0.0000001 || esti_pi > M_PI)
    {
        rand_x = ((double)rand() / (RAND_MAX));
        rand_y = ((double)rand() / (RAND_MAX));
        double dist = ((rand_x) * (rand_x)) + ((rand_y) * (rand_y));
        if (dist <= 1)
            count_cir++;
        count_sqr++;

        esti_pi = double(4 * count_cir) / count_sqr;
    }

    cout << esti_pi << " estimate of " << M_PI << endl;
    return 0;
}