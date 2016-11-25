l = set()
for i in range(100, 1000):
	for j in range(100, 1000):
		n = i * j;
		a = str(n); r = a[::-1];
		if(a == r):	l.add(n);
l = list(reversed(sorted(l)));
t = input();
while(t > 0):
	n = input();
	for i in range(0, len(l)):
		if(l[i] < n):	print l[i]; break;
	t -= 1;
