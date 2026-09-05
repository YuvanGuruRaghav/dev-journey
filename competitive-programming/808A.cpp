#include<bits/stdc++.h>
using namespace std;

int luck(int t)
{
  int lucky_year;
  string s = to_string(t);
  int num = pow(10,s.length() - 1);
  lucky_year = num - (t%num);
  return lucky_year;
}

int main()
{
  int t;
  cin >> t;
  cout << luck(t);
  return 0;
}