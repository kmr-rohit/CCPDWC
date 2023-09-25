#include <bits/stdc++.h>
using namespace std;

#define int long long

void test_case () {
	int n;
	cin >> n;
	map <int, bool> mp;
	for(int i = 1; i <= n; i++) {
		int k = i;
		if(mp[i]) continue;
		while(k <= n) {
			cout << k << " ";
			mp[k] = 1;
			k *= 2;
		}
	}
	cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        test_case();
    }
}
