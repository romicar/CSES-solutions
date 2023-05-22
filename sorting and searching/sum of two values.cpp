#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n, target;
	cin >> n >> target;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	vector<pair<int, int>> vec;
	for (int i = 0; i < n; i++)
	{
		vec.push_back({arr[i], i});
	}
	sort(vec.begin(), vec.end());
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (vec[i].first + vec[j].first == target)
		{
			cout << vec[i].second + 1 << " " << vec[j].second + 1 << endl;
			return;
		}
		else if (vec[i].first + vec[j].first > target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
 
	while (t--)
	{
		solve();
	}
 
	return 0;
}