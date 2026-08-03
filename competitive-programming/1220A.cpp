#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string mystr;
  deque<int> v;
  cin >> n;
  cin >> mystr;
  for(int i=0;i<n;i++)
  {
    if(mystr[i] == 'n')
    {
      v.push_front(1);
    }
    else if(mystr[i] == 'z')
    {
      v.push_back(0);
    }
    else;
  }
  for(int result : v)
  {
    cout << result << " ";
  }
  return 0;
}