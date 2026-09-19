#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num,t;
  cin >> num >> t;
  while(t--)
  {
    if(num%10 != 0)
    {
      num--;
    }
    else
    {
      num /= 10; 
    }
  }
  cout << num;
  return 0;
}