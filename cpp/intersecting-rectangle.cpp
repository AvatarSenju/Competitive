#include <bits/stdc++.h>
using namespace std;

class Rectangle
{

public:
    int lx, ly, rx, ry, width, height, area;
    Rectangle(int x, int y, int width, int height)
    {
        lx = x;
        ly = y;
        this->width = width;
        this->height = height;
        area = this->width * this->height;
        rx = lx + width;
        ry = ly - height;
    }
};

int intersect(Rectangle a, Rectangle b)
{
    int height = min(a.ly, b.ly) - max(a.ry, b.ry);
    int width = min(a.rx, b.rx) - max(a.lx, b.lx);
    int area = abs(height * width);
    return area;
}

int main()
{
    Rectangle a = Rectangle(1, 4, 3, 3);
    Rectangle b = Rectangle(0, 5, 4, 3);
    cout << intersect(a, b) << endl;

    return 0;
}