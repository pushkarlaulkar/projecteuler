#include<stdio.h>
#define ll long long int
#define mod 1000000007
int main(){
	ll t, i, j, n; scanf("%lld", &t);
	while(t-- && scanf("%lld", &n)){
		ll a[n + 1]; a[0] = 1;
		for(i = 1; i <= n; a[i++] = 0);
		for(i = 1; i <= n - 1; i++)	for(j = i; j <= n; j++)	a[j] += a[j - i], a[j] %= mod; 
		printf("%lld\n", a[n]);
	}
	return 0;
}
