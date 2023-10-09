#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n+1);
        int sum = 0;
        for(int i =1;i<=n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        vector<int>ps(n+1, 0);
        ps[0] = arr[0];
        for(int i = 1;i<=n;i++){
            ps[i] = ps[i-1] + arr[i];
        }
        while(q--){
            int l , r , k;
            cin>>l>>r>>k;
            long long tempsum = ps[n] - (ps[r] - ps[l-1]) + (r-l + 1)*k;
            if(tempsum%2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
   }
}