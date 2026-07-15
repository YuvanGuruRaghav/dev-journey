#include<bits/stdc++.h>
using namespace std;

int check(int year)
{
  bool ctr = true;
  while(ctr)
  {
    year++;
    string y = to_string(year);
    set<char>sy(y.begin(),y.end());
    if(sy.size() == 4) ctr = false;
  }
  return year;
}

int main()
{
  int y;
  cin >> y;
  cout << check(y);
  return 0;
}