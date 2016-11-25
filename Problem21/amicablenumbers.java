import java.util.*;
public class amicablenumbers{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int t, i, n; int h[] = new int[100001]; t = in.nextInt();
		for(i = 0; i <= 219; h[i] = 0, i++); for(i = 220; i <= 283; h[i] = 220, i++);
		for(i = 284; i <= 1183; h[i] = 504, i++); for(i = 1184; i <= 1209; h[i] = 1688, i++);
		for(i = 1210; i <= 2619; h[i] = 2898, i++); for(i = 2620; i <= 2923; h[i] = 5518, i++);
		for(i = 2924; i <= 5019; h[i] = 8442, i++); for(i = 5020; i <= 5563; h[i] = 13462, i++);
		for(i = 5564; i <= 6231; h[i] = 19026, i++); for(i = 6232; i <= 6367; h[i] = 25258, i++);
		for(i = 6368; i <= 10743; h[i] = 31626, i++); for(i = 10744; i <= 10855; h[i] = 42370, i++);
		for(i = 10856; i <= 12284; h[i] = 53226, i++); for(i = 12285; i <= 14594; h[i] = 65511, i++);
		for(i = 14595; i <= 17295; h[i] = 80106, i++); for(i = 17296; i <= 18415; h[i] = 97402, i++);
		for(i = 18416; i <= 63019; h[i] = 115818, i++); for(i = 63020; i <= 66927; h[i] = 178838, i++);
		for(i = 66928; i <= 66991; h[i] = 245766, i++); for(i = 66992; i <= 67094; h[i] = 312758, i++);
		for(i = 67095; i <= 69614; h[i] = 379853, i++); for(i = 69615; i <= 71144; h[i] = 449468, i++);
		for(i = 71145; i <= 76083; h[i] = 520613, i++); for(i = 76084; i <= 79749; h[i] = 596697, i++);
		for(i = 79750; i <= 87632; h[i] = 676447, i++); for(i = 87633; i <= 88729; h[i] = 764080, i++);
		for(i = 88730; i <= 100000; h[i] = 852810, i++);
		while(t-- > 0){
			n = in.nextInt(); System.out.println(h[n]);		
		} 	
	}
}
