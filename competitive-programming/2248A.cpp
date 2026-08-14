#include<bits/stdc++.h>
using namespace std;

string sol(string st)
{
  int n = st.size();
  int pos0 = st.find('0');
  st.erase(st.begin()+pos0);
  int pos1 =st.find('1');
  st.erase(st.begin()+pos1);
  return st;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string st;
  vector<string> v;
  int t;
  cin >> t;
  while(t--)
  {
    cin >> st;
    v.push_back(sol(st));
  }
  
  for(string st:v)
  {
    cout << st << '\n';
  }
  return 0;
}
