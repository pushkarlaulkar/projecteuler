#include<stdio.h>
#define ll long long int
ll a[5000001] = {0}, b[5000001] = {0};
int main(){	
	ll t, n, i, c, s; scanf("%lld", &t);
	a[1] = 1, b[1] = 1;
	for(i = 2; i <= 5000000; i++){
		c = 0, s = i;
		while(s > 1){
			if(s <= 5000000 && a[s])	break;
			(!(s % 2)) ? (s >>= 1, c++) : (s = (3 * s) + 1, s >>= 1, c += 2);
		}
		a[i] = c + a[s]; 
	}
	for(i = 2; i <= 5000000; i++)	(a[i] >= a[b[i - 1]]) ? (b[i] = i) : (b[i] = b[i - 1]);
	while(t-- && scanf("%lld", &n))	printf("%lld\n", b[n]);
	return 0;
}
