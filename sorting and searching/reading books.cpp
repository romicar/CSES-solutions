#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
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
	long long sum = 0;
	for (int i = 0; i < n - 1; i++)
		sum += arr[i];
 
	if (sum < arr[n - 1])
	{
		cout << 2 * arr[n - 1] << endl;
	}
	else
	{
		cout << sum + arr[n - 1] << endl;
	}
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