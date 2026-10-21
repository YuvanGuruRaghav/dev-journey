#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,b,d;
  int a;
  int sm = 0;
  int ct = 0;

  cin >> n >> b >> d;

  while(n--)
  {
    cin >> a;
    if(a <= b)
    {
      sm += a;
      if(sm > d)
      {
        sm = 0;
        ct++;
      }
    }
  }
  cout << ct;
  return 0;
}