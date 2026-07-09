#include<bits/stdc++.h>
using namespace std;

int main()
{
  string word1,word2;
  cin >> word1;
  cin >> word2;
  for(char &c: word1)
  {
    c = tolower(c);
  }
  for(char &c: word2)
  {
    c = tolower(c);
  }
  if(word1<word2) cout << -1;
  else if(word1>word2) cout << 1;
  else cout << 0;
  return 0;
}