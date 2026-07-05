#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int problems_solved = 0;
  cin >> n;
  vector<vector<int>> v(n,vector<int>(3,0));
  for(int i = 0;i<n;i++)
  {
    int count = 0;
    for(int j = 0;j<3;j++)
    {
      cin >> v[i][j];
      if(v[i][j] == 1) count++;
    }
    if(count >= 2) problems_solved++;
  }
  cout << problems_solved;
  return 0;
}

/*
Problem: 231A - Team
Link: codeforces.com/problemset/problem/231/A
Difficulty: 800

Approach:
- For each problem, count how many of 3 members solved it
- If count >= 2, increment problems_solved

Time Complexity: O(n)
Space Complexity: O(n) - can be optimized to O(1) by removing vector

Key Learning:
- Storing data you don't need costs space unnecessarily
- Inner loop with fixed 3 iterations is O(1) not O(n)
- Small input size means space inefficiency won't show on judge
*/