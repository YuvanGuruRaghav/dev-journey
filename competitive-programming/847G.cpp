#include<bits/stdc++.h>
using namespace std;
vector<string> v;

int eval(int n)
{
  int mx = 0;

  for(int i=0;i<7;i++)
  {
    int cnt = 0;
    for(int j=0;j<n;j++)
    {
      if(v[j][i] == '1') cnt++;
      if(cnt > mx) mx = cnt; 
    }
  }
  return mx;
}

int main()
{
  string ele;
  int t;
  cin >> t;
  for(int i = 0;i<t;i++)
  {
    cin >> ele;
    v.push_back(ele);
  }

  cout << eval(t);

  return 0;
}