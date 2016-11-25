t = input(); a = []; cp = t;
while(t > 0):
	a.append(raw_input());
	t -= 1;
a = sorted(a);
q = input();
while(q > 0):
	s = raw_input(); i = 0; l = len(s); summ = 0;
	for i in range(0, cp):
		if(a[i] == s):	break;
	for j in range(0, l):	summ += ord(s[j]) - 64;
	print summ * (i + 1);
	q -= 1;
