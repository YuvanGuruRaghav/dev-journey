#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void div_lst(int n)
{
  for(int i=2;i<=(n/2);i++)
  {
    if(n%i == 0)
    {
      v.push_back(i);
    }
  }
  v.push_back(n);
}

int main()
{
  int n;
  string t;
  
  cin >> n;
  cin >> t;

  div_lst(n);
  
  for(int divisor:v)
  {
    reverse(t.begin(),t.begin()+divisor);
  }
  cout << t;
  return 0;
}