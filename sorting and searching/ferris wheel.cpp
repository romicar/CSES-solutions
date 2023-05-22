#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define endl "\n"
 
void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> weights;
 
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		weights.push_back(x);
	}
 
	int cnt = 0;
	sort(weights.begin(), weights.end());
 
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (weights[i] + weights[j] > x)
		{
			if (weights[j] <= x)
			{
				cnt++;
			}
 
			j--;
		}
		else
		{
			i++;
			j--;
			cnt++;
		}
	}
	if (weights[i] <= x && i==j)
		cnt++;
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
