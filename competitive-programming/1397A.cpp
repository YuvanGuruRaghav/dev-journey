#include<bits/stdc++.h>
using namespace std;

string check(int ns)
{
  map<char,int> mp;
  string mystr;
  for(int i=0;i<ns;i++)
  {
    cin >> mystr;
    for(auto c:mystr)
    {
      mp[c] += 1;
    }
  }
  for(auto c:mp)
  {
    if((c.second % ns) != 0) return "NO";  
  }
  return "YES";
}

int main()
{
  int n,ns;
  vector<string> result;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> ns;
    result.push_back(check(ns));
  }
  for(string output:result)
  {
    cout << output << endl;
  }
  return 0;
}