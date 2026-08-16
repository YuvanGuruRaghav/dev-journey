#include<bits/stdc++.h>
using namespace std;

int solve(string num)
{
  int ctr = 0;
  int n = num.size();
  int pivot = n;
  
  while(pivot--)
  {
    if(num[pivot] != '0')break;
  }

  while(n--)
  {
    if(n < pivot && num[n] != '0')
    {
      ctr++;
    }
    else if(n > pivot) ctr++;
    else;
  }
  return ctr;
}

int main()
{
  int t;
  vector<int> v;
  string num;
  cin >> t;
  while(t--)
  {
    cin >> num;
    v.push_back(solve(num));
  }
  for(int a:v) cout << a << "\n";
  return 0;
}