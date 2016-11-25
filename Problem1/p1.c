#include<stdio.h>
#define ll long long int
ll sum(ll n){return (n * (n + 1)) / 2;}

int main(){
	long long int t, n; scanf("%lld", &t);
	while(t-- && scanf("%lld", &n))	n--, printf("%lld\n", sum(n / 3) * 3 + sum(n / 5) * 5 - sum(n / 15) * 15);		
	return 0;
}
