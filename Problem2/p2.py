t = input();
while(t > 0):
	n = input();
	a, b, s = 1, 2, 0;
	while(b <= n):
		if(b % 2 == 0):	s += b;
		a, b = b, a + b; 
	print s;
	t -= 1;
