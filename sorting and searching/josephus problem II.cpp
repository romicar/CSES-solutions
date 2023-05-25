#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
#define endl "\n"
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve()
{
	int n, k;
	cin >> n >> k;
	ordered_set<int> st;
	for (int i = 1; i <= n; i++)
	{
		st.insert(i);
	}
	auto it = st.begin();
	int i = 0;
	int pos = 0;
	while (!st.empty())
	{
		int idx = (pos + k) % st.size();
		auto it = st.find_by_order(idx);
		int removed_child = *it;
		st.erase(it);
		cout << removed_child << " ";
		pos = idx;
	}
	cout<<endl;
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
