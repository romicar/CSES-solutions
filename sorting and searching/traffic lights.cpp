#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
#define endl "\n"
 
void solve()
{
	int length, n;
	cin >> length >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	set<int> trafficlights;
	trafficlights.insert(0);
	trafficlights.insert(length);
	multiset<int> differences;
	differences.insert(length);
 
	for (int i = 0; i < n; i++)
	{
		auto it1 = trafficlights.lower_bound(arr[i]);
		auto it2 = trafficlights.upper_bound(arr[i]);
		int prev = *(--it1);
		int next = *it2;
		trafficlights.insert(arr[i]);
		int remove = next - prev;
		auto it = differences.find(remove);
		differences.erase(it);
		differences.insert(arr[i] - prev);
		differences.insert(next - arr[i]);
		auto ans = differences.rbegin();
		cout << *ans << endl;
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