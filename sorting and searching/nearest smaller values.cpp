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
	stack<pair<int, int>> st;
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (st.empty())
		{
			ans.push_back(0);
		}
		else if (!st.empty() && st.top().first < arr[i])
		{
			ans.push_back(st.top().second + 1);
		}
		else if (!st.empty() && st.top().first >= arr[i])
		{
			while (!st.empty() && st.top().first >= arr[i])
			{
				st.pop();
			}
			if (st.empty())
				ans.push_back(0);
			else
				ans.push_back(st.top().second + 1);
		}
		st.push({arr[i], i});
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
 
	cout << endl;
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