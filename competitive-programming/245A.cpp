#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int var;
  int a,b;
  int x,y;
  int ax,ay,bx,by;
  ax = 0;
  bx = 0;
  ay = 0;
  by = 0;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> var >> x >> y;
    if(var == 1)
    {
      ax += x;
      ay += y;
    }
    else
    {
      bx += x;
      by += y;
    }
  }
  if(ax>=ay) cout << "LIVE" << endl;
  else cout << "DEAD" << endl;
  if(bx>=by) cout << "LIVE" << endl;
  else cout << "DEAD" << endl;
  return 0;
}