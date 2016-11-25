n = input(); s = cp = 0;
for i in range(1, n):
	s = 0;
	for j in range(1, n):
		u =  i ** j; s = 0;
		while(u > 0):
			s += u % 10; u /= 10;
		s = max(cp, s); cp = s;
print s;
