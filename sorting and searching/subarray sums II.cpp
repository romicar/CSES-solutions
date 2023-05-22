#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long int
#define endl "\n"

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int pref[n + 1];
	pref[0] = 0;
	for (int i = 0; i < n; i++)
	{
		pref[i + 1] = pref[i] + arr[i];
	}

	map<int, int> mp;

	int cnt = 0;
	for (int i = 0; i <= n; i++)
	{
		int val = pref[i] - k;
		if (mp.find(val) != mp.end())
		{
			cnt += mp[val];
			mp[pref[i]]++;
		}
		else
			mp[pref[i]]++;
	}
	cout << cnt << endl;
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
