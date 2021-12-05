#include<iostream>
#include<vector>
using namespace std;

long long binary_power(long long base, long long exp, long long mod)
{
	long long res = 1;
	while (exp > 0)
	{
		if(exp & 1)
			res = (res * base) % mod;
		base = base * base % mod;
		cout<<res<<'\n';
		exp >>= 1;
	}
	return res;
}
int main(void)
{
	cout<< binary_power(3, 13, 10);
}
