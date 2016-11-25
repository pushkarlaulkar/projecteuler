import java.util.*;
public class countingsummation{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int t, i, j, n, mod = 1000000007; t = in.nextInt();
		while(t-- > 0){
			n = in.nextInt(); int a[] = new int[n + 1]; a[0] = 1;
			for(i = 1; i <= n; i++)	a[i] = 0;
			for(i = 1; i <= n - 1; i++){
				for(j = i; j <= n; j++){
					a[j] += a[j - i]; a[j] %= mod; 
				}
			}
			System.out.println(a[n]);
		}
	}
}
