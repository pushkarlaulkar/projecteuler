#include<stdio.h>
int main(){
	int t, n, k, m, j, r, i; scanf("%d", &t); char a[1001];
	while(t-- && scanf("%d%d", &n, &k)){
		r = 0, scanf("%s", a);
		for(i = 0; i < n - k + 1; i++){
			m = 1;
			for(j = 0; j < k; j++)	m *= a[i + j] - '0';
			if(m > r)	r = m;
		}
		printf("%d\n", r);
	}		
	return 0;
}
