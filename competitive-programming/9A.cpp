#include<bits/stdc++.h>
using namespace std;

int main()
{
  int w,y;
  cin >> w >> y;
  int mx = w>y?w:y;
  int hcf = gcd(7-mx,6);
  string prob = to_string(int((7-mx)/hcf)) + "/" + to_string(int(6/hcf));
  cout << prob;
  return 0; 
}