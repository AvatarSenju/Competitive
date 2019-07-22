#include <bits/stdc++.h>
using namespace std;

double find_distance(pair<int, int> ch, pair<int, int> point)
{
	double s = pow((ch.first - point.first), 2) + pow((ch.second - point.second), 2);
	return sqrt(s);
}

vector<pair<int, int>> find_points(vector<pair<int, int>> points, int k, pair<int, int> point)
{

	int n = points.size();
	vector<pair<int, int>> res;

	vector<pair<double, pair<int, int>>> vect;

	for (int i = 0; i < n; ++i)
	{
		double dist = find_distance(points[i], point);
		vect.push_back(make_pair(dist, points[i]));
	}

	sort(vect.begin(), vect.end());
	for (int i = 0; i < k; i++)
	{
		res.push_back(vect[i].second);
	}

	return res;
}

int main()
{
	// cout<<"hello";
	vector<pair<int, int>> vect;

	int arr[] = {0, 5, 3};
	int arr1[] = {0, 4, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Entering values in vector of pairs
	for (int i = 0; i < n; i++)
		vect.push_back(make_pair(arr[i], arr1[i]));
	vector<pair<int, int>> res;
	res = find_points(vect, 2, make_pair(1, 2));

	for (int i = 0; i < 2; i++)
	{
		// "first" and "second" are used to access
		// 1st and 2nd element of pair respectively
		cout << res[i].first << " "
			 << res[i].second << endl;
	}

	return 0;
}