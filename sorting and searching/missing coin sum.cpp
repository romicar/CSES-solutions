#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long int
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	
 
	sort(arr.begin(), arr.end());
	int sum = 0;
	if (arr[0] > 1)
	{
		cout << "1" << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (sum + 1 < arr[i])
		{
			cout << sum + 1 << endl;
			return;
		}
		sum += arr[i];
	}
	cout << sum + 1 << endl;
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
