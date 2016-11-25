#include<stdio.h>
int main(){
	long int a[1000001] = {0}, s[1000001] = {0}, i, j, t, n;
	for(i = 2; i <= 1000000; i++)	a[i] = i;
	for(i = 2; i * i <= 1000000; i++)	for(j = i * 2; j <= 1000000; j += i)	a[j] = 0;
	for(i = 2; i <= 1000000; i++)	(!a[i]) ? (s[i] = s[i - 1]) : (s[i] = s[i - 1] + a[i]);
	scanf("%ld", &t);
	while(t-- && scanf("%ld", &n))	printf("%ld\n", s[n]);
	return 0;
}
