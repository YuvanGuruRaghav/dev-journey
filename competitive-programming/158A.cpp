#include <bits/stdc++.h>
using namespace std;

int main()
{
  int count = 0;
  int a,b,c;
  cin >> a >> b;
  vector<int> v(a);
  for(int i=0;i<a;i++)
  {
    cin >> v[i];
  }
  for(int i = 0;i<a;i++)
  {
    if(v[i] >= v[b-1] && v[i] > 0) count++;
    else break;
  }
  cout << count;
  return 0;
}
