#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
#define endl "\n"
 
void solve()
{
	int n, sum;
	cin >> n >> sum;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back({x, i + 1});
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n - 3; i++)
	{
		for (int p = i + 1; p < n - 2; p++)
		{
			int j = p + 1;
			int k = arr.size() - 1;
			while (j < k)
			{
				if (arr[i].first + arr[p].first + arr[j].first + arr[k].first == sum)
				{
					cout << arr[i].second << " " << arr[p].second << " " << arr[j].second << " " << arr[k].second << endl;
					return;
				}
				else if (arr[i].first + arr[p].first + arr[j].first + arr[k].first > sum)
				{
					k--;
				}
				else
					j++;
			}
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