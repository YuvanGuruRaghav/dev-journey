#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string ctr = "NO";
  cin >> n;
  for(int i=1;i<33;i++)
  {
    if(n == (i*(i+1))/2)
    {
      ctr = "YES";
      break;
    } 
  } 
  cout << ctr;
  return 0;
}