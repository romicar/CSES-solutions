#include <bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long int
#define endl "\n"
int n, k;
vector<int> arr;
bool isgood(int x)
{
  int prod = 0;
  for (int i = 0; i < n; i++)
  {
    prod += x / arr[i];
    if(prod>=1e9) return true; 
  }
  return (prod >= k);
}
 
void solve()
{
 
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
 
  int lo = 0;
  int hi = 1e18;
  int ans = 0;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
 
    if (isgood(mid))
    {
      ans = mid;
      hi = mid - 1;
    }
    else
      lo = mid + 1;
  }
  cout << ans << endl;
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
