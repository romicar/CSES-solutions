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
	multiset<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (ans.upper_bound(arr[i]) == ans.end())
			ans.insert(arr[i]);
		else
		{
			auto it = ans.upper_bound(arr[i]);
			ans.erase(it);
			ans.insert(arr[i]);
		}
	}
	cout<<ans.size()<<endl;
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