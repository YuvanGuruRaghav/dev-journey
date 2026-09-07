#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int ct = 0;
  int mx = 0;
  cin >> t;
  vector<int> k(t);
  int j = 0;
  
  while(j < t)
  {
    cin >> k[j];
    j++;
  }
  
  for(int i = 0;i<2*t;i++)
  {
    if(k[i%t] == 1)
    {
      ct++;
      mx = max(ct,mx);
    }
    else
    {
      ct = 0;
    }
  }
  mx = min(mx,t);
  cout << mx;
  return 0;
}