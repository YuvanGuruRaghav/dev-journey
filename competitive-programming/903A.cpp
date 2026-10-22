#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> result;
  int n,x;
  cin >> n;
  
  while(n--)
  {
    bool val = true;
    cin >> x;
    for(int i = 0;i<=x/3;i++) //since x can't exceed 3i
    {
      if((x-3*i)%7 == 0) //yeah see this condition x - 3i which leads to nagative if i > x/3
      {
        result.push_back("YES");
        val = false;
        break;
      }
    }
    if(val) result.push_back("NO"); 
  }

  for(string ans:result)
  {
    cout << ans << '\n';
  }
  
  return 0;
}