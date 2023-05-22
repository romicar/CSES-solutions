#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
	if (a.first.first < b.first.first)
		return true;
	else if (a.first.first == b.first.first)
	{
		if (a.first.second < b.first.second)
			return false;
		else
			return true;
	}
	return false;
}
 
void solve()
{
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int>> vp;
	bool contains[n] = {false};
	bool contained[n] = {false};
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		vp.push_back({{a, b}, i});
	}
	sort(vp.begin(), vp.end(), cmp);
	contained[vp[0].second] = false;
	int maxRight = vp[0].first.second;
	for (int i = 1; i < n; i++)
	{
		if (vp[i].first.second > maxRight)
		{
			maxRight = vp[i].first.second;
			contained[vp[i].second] = false;
		}
		else
			contained[vp[i].second] = true;
	}
 
	contains[vp[n - 1].second] = false;
	int minRight = vp[n - 1].first.second;
	for (int i = n - 2; i >= 0; i--)
	{
		if (vp[i].first.second < minRight)
		{
			contains[vp[i].second] = false;
			minRight = vp[i].first.second;
		}
		else
			contains[vp[i].second] = true;
		;
	}
	for (int i = 0; i < n; i++)
	{
		if (contains[i])
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
	cout << endl;
 
	for (int i = 0; i < n; i++)
	{
		if (contained[i])
			cout << 1 << " ";
		else
			cout << 0 << " ";
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