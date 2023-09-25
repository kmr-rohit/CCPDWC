#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	scanf("%d", &t);
	while (t--)
	{
	long long x=1, y=0,mid=2;
		scanf("%d", &n);
		for (i = 4; i <= n; i = i + 2)
		{
			mid = mid * 2 * (i - 1) / i * 2;
			x = mid / 2 + y;
			y = mid - x - 1;
           
		}
		cout<<x%998244353<<" "<<y%998244353<<" "<<1<<endl;
	}
	return 0;
}
