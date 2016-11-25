from __future__ import print_function
t = input(); c = 0;
while(t > 0):
	s = input(); c += s;
	t -= 1;
c = str(c);
for i in range(0, 10):
	print(c[i], end = '');
