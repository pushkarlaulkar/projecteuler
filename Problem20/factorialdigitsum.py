import math
t = input();
while(t > 0):
	n = input(); s = 0;
	a = str(math.factorial(n)); l = len(a);
	for i in range(0, l):
		s += int(a[i]);
	print s;
	t -= 1;
