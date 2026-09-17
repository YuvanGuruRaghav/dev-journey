#include<bits/stdc++.h>
using namespace std;

int solve(long long l,long long r,int k)
{
  long long upper = r/k;
  if(upper<l) return 0;
  return upper - l + 1;
}

int main()
{
  vector<int> v;
  int t,k;
  long long l,r;
  cin >> t;
  while(t--)
  {
    cin >> l >> r >> k;
    v.push_back(solve(l,r,k));
  }
  for(int result:v)
  {
    cout << result << '\n';
  }
  return 0;
}