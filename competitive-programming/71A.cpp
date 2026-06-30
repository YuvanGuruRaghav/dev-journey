#include <bits/stdc++.h>
using namespace std;

int main()
{

  int number;
  string word;
  vector <string> arr;
  cin >> number;
  for(int i = 0;i<number;i++)
  {
    cin >> word;
    arr.push_back(word);
  }
  for(int j = 0;j<number;j++)
  {
    int l = arr[j].length();
    string w = arr[j];
    if(l>10)
    {
      arr[j] = w[0] + to_string(l-2) + w[l-1];
    }
    cout << arr[j] << endl;
  }

  return 0;
}