#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	vector<int> idx(n+1);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		idx[x] = i;
	}
	int cnt = 0;
 
	for (int i = 1; i <= n - 1; i++)
	{
		if (idx[i] > idx[i + 1])
			cnt++;
	}
	cout << cnt + 1 << endl;
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