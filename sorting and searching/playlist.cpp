#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
 
	map<int, int> mp;
	int i = 0, j = 0;
	int ans = 0;
	while (j < n)
	{
		int prevSize = mp.size();
		mp[arr[j]]++;
 
		if (mp.size() == prevSize)
		{
			while (mp[arr[j]] != 1)
			{
				mp[arr[i]]--;
				if (mp[arr[i]] == 0)
					mp.erase(arr[i]);
				i++;
			}
		}
		ans = max(ans, j - i + 1);
		j++;
	}
	cout << ans << endl;
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
