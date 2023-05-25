#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long int
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	set<int> st;
	for (int i = 1; i <= n; i++)
		st.insert(i);
	auto it = st.begin();
	while (!st.empty())
	{
		it++;
		if (it == st.end())
			it = st.begin();
 
		cout << *it << " ";
		it = st.erase(it);
 
		if (it == st.end())
			it = st.begin();
	}
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
