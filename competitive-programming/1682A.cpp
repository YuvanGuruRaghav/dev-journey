#include<bits/stdc++.h>
using namespace std;

int ft(int n,string st)
{
  if(n == 2)
  {
    return 2;
  }
  else
  {
    int count = 0;
    int mid = (n-1)/2;
    char center = st[mid];
    for(mid;center == st[mid];mid = (n-1)/2)
    {
      count++;
      st.erase(st.begin()+mid);
      n--;
    }
    return count;
  }
}

int main()
{
  vector<int> v;
  int n;
  string st;
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> st;
    v.push_back(ft(n,st));
  }
  for(int n:v)
  {
    cout << n << endl;
  }
  return 0;
}