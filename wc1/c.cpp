#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;//vector of integers
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FAST IO
const ll mod = 1000000007;
// Template above

int t,k,n = 1e5;//n = Max value of a,b
vi f(n + 1),p(n + 1);

int main()
{
    fast;
    cin>>t>>k;

    //PreCompute f[i] for all i <= 1e5

    for (int i = 1;i<k;i++)f[i] = 1;//Base Case Part 1

    f[k] = 2;//Base Case Part 2

    for (int i = k+1;i<=n;i++)f[i] = (f[i - 1] + f[i - k])%mod;//Recurrence

    //PreCompute p[i] for all i <= 1e5

    for (int i = 1;i<=n;i++)p[i] = (p[i - 1] + f[i])%mod;//Prefix Sums

    while (t--){
        int a,b;
        cin>>a>>b;
        int ans = (p[b] - p[a - 1])%mod;
        if (ans < 0)ans += mod;//from 0 to mod - 1 : (a + b) (mod x) == (a + b + x) (mod x)
        cout<<ans<<'\n';
    }
    return 0;
}
