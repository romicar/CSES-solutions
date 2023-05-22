#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> desiredSizes;
	vector<int> aptSizes;
 
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		desiredSizes.push_back(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		aptSizes.push_back(x);
	}
	sort(desiredSizes.begin(), desiredSizes.end());
	sort(aptSizes.begin(), aptSizes.end());
	int i = 0;
	int j = 0;
	int cnt = 0;
	while (i != n && j != m)
	{
		if (abs(desiredSizes[i] - aptSizes[j]) <= k)
		{
			i++;
			j++;
			cnt++;
		}
		else if (aptSizes[j] - desiredSizes[i] > k) // apt is too large
		{
			i++;
		}
		else if (desiredSizes[i] - aptSizes[j] > k) // apt is too small
		{
			j++;
		}
	}
	cout << cnt << endl;
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