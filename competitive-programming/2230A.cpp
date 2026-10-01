#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<long long> v;
  int t;
  long long n,a,b,grp,result;
  cin >> t;
  while(t--)
  {
    cin >> n >> a >> b;
    grp = n/3;
    result = grp*b + min((n%3)*a,b);
    result = min(result,n*a);
    v.push_back(result);
  }

  for(long long ans:v)
  {
    cout << ans << '\n';
  }
  return 0;
}