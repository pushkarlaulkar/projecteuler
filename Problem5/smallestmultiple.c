#include<stdio.h>
int main(){
	long long int t, n, i, a[41], cp, v; scanf("%lld", &t);
	a[1] = 1, a[2] = 2;
	for(i = 3; i <= 40; i++){
		if(!(a[i - 1] % i))	a[i] = a[i - 1];
			else{
				cp = v = a[i - 1];
				while(cp % i)	cp += v;
				a[i] = cp;
			}
	}
	while(t-- && scanf("%lld", &n))	printf("%lld\n", a[n]);		
	return 0;
}
