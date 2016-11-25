from __future__ import division
import math
n = input(); l, r = pow(10, n - 1), pow(10, n);
k = int(l ** (1 / n) + 1);
while(k ** n < r):	
	print int(k ** n); k += 1;
