#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	vector<pair<int, int>> arr;
	int cnt = 0, ans = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		arr.push_back({a, 1});
		arr.push_back({b, -1});
	}
	sort(arr.begin(), arr.end());
	
	for (auto &it : arr)
	{
		cnt += it.second;
		//cout<<cnt<<endl;
		ans = max(ans, cnt);
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