#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> cnt(n+1 ,0);
    vector<int> mxm(n+1, 0);
    for(int i = 0;i<n;i++){
      int x;cin>>x;
      if(x<=n){
        ++cnt[x];
      }
    }

    for(int i = 1;i<=n;i++){
      for(int j = i;j<=n;j+=i){
        mxm[j] += cnt[i];
      }
    }

    int ans = INT_MIN;
    for(int i = 1 ;i<=n;i++){
      ans = max(ans , mxm[i]);
    }
    cout<<ans<<endl;
  }
}