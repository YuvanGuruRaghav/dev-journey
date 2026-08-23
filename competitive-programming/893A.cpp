#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n; 
  int p1,p2,spectator;
  p1 = 1;
  p2 = 2; 
  spectator = 3;
  string result = "YES";
  cin >> t;
  while(t--)
  {
    cin >> n;
    if(n == spectator)
    {
      result = "NO";
    }
    else
    {
      if(n == p1)
      {
        int ax = p2;
        p2 = spectator;
        spectator = ax;
      }  
      else
      {
        int ax = p1;
        p1 = spectator;
        spectator = ax;
      }
    }
  }
  cout << result;
  return 0;
}