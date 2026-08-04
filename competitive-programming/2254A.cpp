#include<bits/stdc++.h>
using namespace std;

int rounds(int a,int b,int c)
{
  if(a == b || a == c || b == c) 
  {
    return 0;
  }
  else
  {
    if(a>b && a>c) a--;
    else if(b>a && b>c) b--;
    else c--;
    
    if(a<b && a<c) a++;
    else if(b<a && b<c) b++;
    else c++;
    
    return 1 + rounds(a,b,c);
  }
}
int main()
{
  vector<int> v;
  int n;
  int a,b,c;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> a >> b >> c;
    v.push_back(rounds(a,b,c));
  }

  for(int result : v) cout << result << endl;
  return 0;
}