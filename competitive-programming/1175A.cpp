#include<bits/stdc++.h>
using namespace std;

long long eval(long long n,long long k)
{
  long long cnt = 0;
  while(n)
  {
    long long rem = n%k;
    if(rem == 0)
    {
      n = n/k;
      cnt++;
      continue;
    }
    cnt = cnt + rem;
    n = n-rem;
  }
  return cnt;
}

int main()
{
  int t;
  vector<long long> v;
  long long n,k;

  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    v.push_back(eval(n,k));
  }

  for(auto result:v) cout << result << '\n';
  return 0;
}