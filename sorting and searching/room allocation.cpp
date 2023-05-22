#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
#define endl "\n"
 
void solve()
{
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int>> vec;
 
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		vec.push_back({{a, b}, i});
	}
	sort(vec.begin(), vec.end());
 
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int roomsreq[n] = {0};
	int room = 1;
 
	pq.push({vec[0].first.second, 1});
	roomsreq[vec[0].second] = 1;
	for (int i = 1; i < n; i++)
	{
		if (vec[i].first.first <= pq.top().first)
		{
			room++;
			roomsreq[vec[i].second] = room;
			pq.push({vec[i].first.second, room});
		}
 
		else
		{
			int give = pq.top().second;
			pq.pop();
			roomsreq[vec[i].second] = give;
 
			pq.push({vec[i].first.second, give});
		}
	}
	cout << room << endl;
	for (int i = 0; i < n; i++)
		cout << roomsreq[i] << " ";
 
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