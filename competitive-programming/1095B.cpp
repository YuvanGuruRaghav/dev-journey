#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  int n,a;
  cin >> n;
  while(n--)
  {
    cin >> a;
    v.push_back(a);
  }

  int mx = *max_element(v.begin(),v.end());
  int mn = *min_element(v.begin(),v.end());

  v.erase(max_element(v.begin(),v.end()));
  int mx_2 = *max_element(v.begin(),v.end());
  v.erase(min_element(v.begin(),v.end()));
  int mn_2 = *min_element(v.begin(),v.end());

  int instability_1 = mx_2 - mn;
  int instability_2 = mx - mn_2;

  cout << min(instability_1,instability_2);
  return 0;
}