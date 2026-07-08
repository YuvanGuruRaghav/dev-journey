#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int X = 0;
  string exp;
  cin >> N;
  for(int i=0;i<N;i++)
  {
    cin >> exp;
    if(exp == "++X" || exp == "X++")X++;
    else if(exp == "--X" || exp == "X--")X--;
    else cout << "Invalid Choice";
  }
  cout << X;
  return 0;
}