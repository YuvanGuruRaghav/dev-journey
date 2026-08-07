#include<bits/stdc++.h>
using namespace std;

int ft(int n,int a,int b,int c)
{
  int sm = a+b+c;
  int rem = n%sm;
  int day = (n/sm)*3;
  if(rem == 0) return day;
  else if((rem - a)<=0) return day+1;
  else if((rem - (a+b))<=0) return day+2;
  else return day+3;
}

int main()
{
  vector<int> v;
  int t;
  int n,a,b,c;
  cin >> t;
  while(t--)
  {
    cin >> n >> a >> b >> c;
    v.push_back(ft(n,a,b,c)); 
  }
  for(int result:v)
  {
    cout << result << endl;
  }
  return 0;
}