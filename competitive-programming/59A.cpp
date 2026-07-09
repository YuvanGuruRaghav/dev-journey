#include<bits/stdc++.h>
using namespace std;

int main()
{
  string word;
  cin >> word;
  int upr_cnt =0,lwr_cnt=0;
  for(int i = 0;i<word.length();i++)
  {
    if(isupper(word[i]))upr_cnt++;
    else if(islower(word[i]))lwr_cnt++;
  }
  if(upr_cnt > lwr_cnt)
  {
    for(char &c:word)c = toupper(c);
    cout << word;
  }
  else if(upr_cnt < lwr_cnt)
  {
    for(char &c:word)c = tolower(c);
    cout << word;
  }
  else
  {
    for(char &c:word)c = tolower(c);
    cout << word;
  }
  return 0;
}