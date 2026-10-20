#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void lucky(int l,int r)
{
  int lucky_num = 0;
  int max = 0;
  for(int i=l;i<=r;i++)
  {
    string num = to_string(i);
    int largest = *max_element(num.begin(),num.end()) - '0';
    int smallest = *min_element(num.begin(),num.end()) - '0';
    int dif = largest - smallest;
    if(dif >= max)
    {
      max = dif;
      lucky_num = i;
      if(max == 9) break;
    }
  }
  v.push_back(lucky_num);
}

int main()
{
  int t,r,l;
  cin >> t;

  while(t--)
  {
    cin >> l >> r;
    lucky(l,r);
  }

  for(int i:v)
  {
    cout << i << '\n';
  }
  return 0;
}