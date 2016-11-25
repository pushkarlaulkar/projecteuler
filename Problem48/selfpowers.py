n, s = input(), 0;
for i in range(1, n + 1):	s += pow(i, i, 10 ** 10);
print s % 10000000000;
