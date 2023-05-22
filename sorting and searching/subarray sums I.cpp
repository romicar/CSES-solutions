#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
// #define int long long int
#define endl "\n"
 
void solve()
{
	int n, sum;
	cin >> n >> sum;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
 
	int i = 0, j = 0;
	int cnt = 0;
	int tempSum = 0;
	while (j < n)
	{
		tempSum += arr[j];
 
		if (tempSum < sum)
		{
			j++;
		}
		else if (tempSum == sum)
		{
			//cout << tempSum << endl;
 
			cnt++;
			tempSum -= arr[i];
			//cout << tempSum << endl;
			i++;
			j++;
		}
		else
		{
					//	cout<<tempSum<<endl;
 
			while (tempSum > sum)
			{
				tempSum -= arr[i];
				i++;
			}
			if(tempSum==sum)
			cnt++;
 
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