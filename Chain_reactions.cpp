#include <bits/stdc++.h>
#define xxxxxxxxxxxxxxx first
#define xxxxxxxxxxxxxxxx second
#define xxxxxxxxxxxxxxxxx push_back
using namespace std;

long long xx[100009], xxx[100009], xxxx[100009], xxxxx[100009];
vector<int> xxxxxx[100009];
queue<int> xxxxxxx;

void solve()
{
  long long xxxxxxxx, xxxxxxxxx, xxxxxxxxxx, xxxxxxxxxxx, xxxxxxxxxxxx = 0;
  cin>>xxxxxxxx;
  for(int xxxxxxxxxxxxx = 0; xxxxxxxxxxxxx <= xxxxxxxx; xxxxxxxxxxxxx++)
  {
    xx[xxxxxxxxxxxxx] = xxx[xxxxxxxxxxxxx] = xxxx[xxxxxxxxxxxxx] = xxxxx[xxxxxxxxxxxxx] = 0;
    xxxxxx[xxxxxxxxxxxxx].clear();
  }
  for(int xxxxxxxxxxxxx = 1; xxxxxxxxxxxxx <= xxxxxxxx; xxxxxxxxxxxxx++) cin>>xx[xxxxxxxxxxxxx];
  for(int xxxxxxxxxxxxx = 1; xxxxxxxxxxxxx <= xxxxxxxx; xxxxxxxxxxxxx++)
  {
    cin>>xxxxxxxxx;
    xxx[xxxxxxxxxxxxx] = xxxxxxxxx;
    xxxxxx[xxxxxxxxx].xxxxxxxxxxxxxxxxx(xxxxxxxxxxxxx);
    xxxxx[xxxxxxxxx]++;
  }
  for(int xxxxxxxxxxxxx = 0; xxxxxxxxxxxxx <= xxxxxxxx; xxxxxxxxxxxxx++) if(xxxxx[xxxxxxxxxxxxx] == 0) xxxxxxx.push(xxxxxxxxxxxxx);
  while(!xxxxxxx.empty())
  {
    xxxxxxxxx = xxxxxxx.front();
    xxxxxxx.pop();
    xxxxxxxxxx = 1<<30;
    for(int xxxxxxxxxxxxx = 0; xxxxxxxxxxxxx < xxxxxx[xxxxxxxxx].size(); xxxxxxxxxxxxx++)
    {
      if(xxxx[xxxxxx[xxxxxxxxx][xxxxxxxxxxxxx]] < xxxxxxxxxx)
      {
        xxxxxxxxxx = xxxx[xxxxxx[xxxxxxxxx][xxxxxxxxxxxxx]];
        xxxxxxxxxxx = xxxxxxxxxxxxx;
      }
    }
    if(xxxxxxxxxx == 1<<30) xxxxxxxxxx = 0;
    for(int xxxxxxxxxxxxx = 0; xxxxxxxxxxxxx < xxxxxx[xxxxxxxxx].size(); xxxxxxxxxxxxx++) if(xxxxxxxxxxxxx != xxxxxxxxxxx) xxxxxxxxxxxx += xxxx[xxxxxx[xxxxxxxxx][xxxxxxxxxxxxx]];
    xxxx[xxxxxxxxx] = max(xx[xxxxxxxxx], xxxxxxxxxx);
    xxxxx[xxx[xxxxxxxxx]]--;
    if(xxxxx[xxx[xxxxxxxxx]] == 0) xxxxxxx.push(xxx[xxxxxxxxx]);
  }
  cout<<xxxxxxxxxxxx + xxxx[0]<<"\n";
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int xxxxxxxxxxxxxx;
  cin>>xxxxxxxxxxxxxx;
  for(int xxxxxxxxxxxxx = 1; xxxxxxxxxxxxx <= xxxxxxxxxxxxxx; xxxxxxxxxxxxx++)
  {
    cout<<"Case #"<<xxxxxxxxxxxxx<<": ";
    solve();
  }
  return 0;
}
