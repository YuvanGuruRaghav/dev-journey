#include<bits/stdc++.h>
using namespace std;

string solve(int n,string s,string t)
{
  map<char,int> mp;
  for(char c:s)
  {
    mp[c]++;
  }

  for(char c:s)
  {
    if(mp[c] != count(t.begin(),t.end(),c)) return "NO";
  }

  return "YES";
}


int main()
{
  string s,t;
  int n,q;
  cin >> q;
  vector<string> v;
  while(q--)
  {
    cin >> n;
    cin >> s >> t;
    v.push_back(solve(n,s,t));
  }

  for(string st:v) cout << st << '\n'; 
  return 0;
}

