#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long
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
	
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			flag = 1;
			break;
		}
	}
	int maxi = INT_MIN;
	if (flag == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > maxi)
				maxi = arr[i];
		}
		cout << maxi << endl;
		return;
	}
	
	long long sum = 0, ans = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if (sum < 0)
		{
			sum = 0;
		}
 
		ans = max(ans, sum);
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