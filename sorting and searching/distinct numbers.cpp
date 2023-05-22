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
	sort(arr.begin(), arr.end());
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
			cnt++;
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