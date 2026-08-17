#include<bits/stdc++.h>
using namespace std;

pair<string,string> sol(string a,string b)
{
  string x,y;
  cin >> x >> y;
  if(x == a) return {y,b};
  else return {a,y};
}

int main()
{
  int n;
  string a,b;
  vector<pair<string,string>> result;
  cin >> a >> b;
  result.push_back({a,b});
  cin >> n;
  while(n--)
  {
    pair pr = sol(a,b);
    result.push_back(pr);
    a = pr.first;
    b = pr.second;
  }

  for(pair<string,string> p:result)
  {
    cout << p.first << " " << p.second << '\n';
  }

  return 0;
}