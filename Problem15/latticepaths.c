#include<stdio.h>
#define ll long long int
#define mod 1000000007

ll now(ll n, ll m){
	ll a[n][m], i, j, c = 0;
	for(i = 0; i < m; i++)	a[0][i] = 1;
	for(i = 0; i < n; i++)	a[i][0] = 1;
	for(i = 1; i < n; i++)	for(j = 1; j < m; j++)	a[i][j] = (a[i - 1][j] % mod + a[i][j - 1] % mod) % mod;
	return a[n - 1][m - 1];
}

int main(){
	ll t, n, m; scanf("%lld", &t);
	while(t-- && scanf("%lld%lld", &n, &m))	printf("%lld\n", now(n + 1, m + 1));
	return 0;
}
