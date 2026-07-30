#include<bits/stdc++.h>
using namespace std;

bool check(int n,unordered_set<int>& myset)
{
  for(int i=1;i<=n;i++)
  {
    if(find(myset.begin(),myset.end(),i) == myset.end()) return false;
  }
  return true;
}

int main()
{
  unordered_set<int> s;
  int n;
  int p,q;
  int x;
  cin >> n;
  cin >> p;
  for(int i=0;i<p;i++)
  {
    cin >> x;
    s.insert(x);
  }
  cin >> q;
  for(int i=0;i<q;i++)
  {
    cin >> x;
    s.insert(x);
  }
  if(check(n,s)) cout << "I become the guy.";
  else cout << "Oh, my keyboard!";
  return 0;
}