#include<bits/stdc++.h>
using namespace std;
vector<string> result;

string check(string st)
{
  int s = 0;
  vector<char> v(st.begin(),st.end());
  while(s+1 < v.size())
  {
    int i = 0;
    int j = v.size() - 1;
    char temp = v[s];
    v[s] = v[s+1];
    v[s+1] = temp;
    while(i<j)
    {
      if(v[i] != v[j])
      {
        string stg(v.begin(),v.end());
        return stg;
      }
      i++;
      j--;
    }
    char tp = v[s];
    v[s] = v[s+1];
    v[s+1] = tp;
    s++;
  }
  return "-1";
}

void eval(string st)
{
  int ct = 0;
  char first = st[0];
  for(auto c:st)
  {
    if(c == first) ct++;
  }
  if(ct == st.size()) 
  {
    result.push_back("-1");
    return;
  }
  result.push_back(check(st));
}

int main()
{ 
  string st;
  int t;
  cin >> t;
  while(t--)
  {
    cin >> st;
    eval(st);
  }

  for(string res: result)
  {
    cout << res << '\n';
  }
  return 0;
}