#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> v(5,vector<int>(5,0));
  vector<int> pos;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin >> v[i][j];
      if(v[i][j] == 1) pos.insert(pos.end(),{i+1,j+1});
    }
  }
  int step = abs(pos[0]-3) + abs(pos[1]-3);
  cout << step;
  return 0;
}