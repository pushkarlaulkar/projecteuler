import math
t = input();
while(t > 0):
	n = input(); r = 1 + (8 * n); d = int(math.sqrt(r));
	if(d * d == r):	print (d - 1) / 2;
	else:	print -1;
	t -= 1;
