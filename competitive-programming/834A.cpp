#include<bits/stdc++.h>
using namespace std;

int main()
{
  char start,end;
  long long n;
  vector<char> ch = {'v','<','^','>','v','<','^','>'};

  cin >> start >> end;
  cin >> n;

  if(n%2 == 0)
  {
    cout << "undefined";
    return 0;
  }

  n %= 4;

  int ctr =  find(ch.begin(),ch.end(),start) - ch.begin();
  
  if(end == ch[ctr+n])
  {
    cout << "cw";
    return 0;
  }

  cout << "ccw";
  return 0;
}