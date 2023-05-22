#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n, m;
	cin >> n >> m;
	multiset<int> ticket;
	vector<int> customer;
 
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		ticket.insert(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		auto it = ticket.upper_bound(x);
		if(it==ticket.begin())
		cout<<-1<<endl;
		else{
			cout<<*(--it)<<endl;
			ticket.erase(it);
		}
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