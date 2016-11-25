def s(n):	return (n * (n + 1)) / 2;

t = input();
while(t > 0):
	n = input(); n -= 1;
	print s(n / 3) * 3 + s(n / 5) * 5 - s(n / 15) * 15;
	t -= 1;
