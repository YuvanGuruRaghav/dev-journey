#include<bits/stdc++.h>
using namespace std;

int main()
{
  int untreated = 0;
  int sum = 0;
  int n,x;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
    cin >> x;
    sum += x;
    if(sum < 0)
    {
      untreated++;
      sum = 0;
    }
  }
  cout << untreated;
  return 0; 
}