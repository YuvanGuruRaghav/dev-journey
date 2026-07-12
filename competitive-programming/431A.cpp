#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vec(4);
  int sum = 0;
  for(int i=0;i<4;i++)
  {
    cin >> vec[i];
  }
  string ipt;
  cin >> ipt;
  for(char x:ipt)
  {
    int num = x - '0';
    sum += vec[num-1];
  }
  cout << sum;
  return 0;
}