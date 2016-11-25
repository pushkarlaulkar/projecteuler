#include<stdio.h>
#include<math.h>
#define ll long long int

int main(){
	ll t, n, i, c; scanf("%lld", &t);
	while(t-- && scanf("%lld", &n)){
		while(n % 2 == 0)	n /= 2, c = 2;
		for(i = 3; i * i <= n; i += 2)	while(n % i == 0)	c = i, n /= i;
		if(n > 2)	c = n;
		printf("%lld\n", c);
	}		
	return 0;
}
