#include<bits/stdc++.h>
using namespace std;

int main()
{
  int s = 0;
  int n,a,b;
  cin >> n;
  vector<int> v(n-1,0);
  for(int i=0;i<n-1;i++)
  {
    cin >> v[i];
  }
  cin >> a >> b;
  for(int j = a-1;j<b-1;j++)
  {
    s += v[j];
  }
  cout << s;
  return 0;
}