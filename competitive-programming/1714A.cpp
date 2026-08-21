#include<bits/stdc++.h>
using namespace std;

pair<int,int> solve(int n,int h,int m)
{
  int sh,sm,hour,min;
  int bed_time = h*60 + m;
  pair<int,int> minimum = {24,0};  
  while(n--)
  {
    cin >> sh >> sm;
    int alarm = sh*60 + sm;
    if(alarm > bed_time)
    {
      hour = (alarm - bed_time)/60;
      min = (alarm - bed_time)%60;
    }
    else if(bed_time > alarm)
    {
      hour = ((24*60) - (bed_time-alarm))/60;
      min = ((24*60) - (bed_time-alarm))%60;
    }
    else 
    {
      hour = 0;
      min = 0;
    }
    pair<int,int> p = {hour,min};
    if(p < minimum) minimum = p;
  }
  return minimum;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<pair<int,int>> result;
  int t;
  int n,h,m;
  cin >> t;
  while(t--)
  {
    cin >> n >> h >> m;
    result.push_back(solve(n,h,m));
  }
  for(pair<int,int> p : result)
  {
    cout << p.first << " " << p.second << '\n';
  }
  return 0;
}