#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define mod 1000000007
// #define int long long int
#define endl "\n"

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> arr;
	ordered_set<pair<int, int>> st;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back({x, i});
	}

	int idx = (k - 1) / 2;

	for (int i = 0; i < k; i++)
		st.insert(arr[i]);

	cout << st.find_by_order(idx)->first << " ";
	for (int i = 1; i < n - k + 1; i++)
	{
		st.erase(arr[i - 1]);
		st.insert(arr[i + k - 1]);
		cout << st.find_by_order(idx)->first << " ";
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
