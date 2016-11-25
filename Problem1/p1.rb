def s(n)
	return (n * (n + 1)) / 2;
end

t = gets.to_i;
while t > 0
	n = gets.to_i; n -= 1;
	print s(n / 3) * 3 + s(n / 5) * 5 - s(n / 15) * 15, "\n"; 
	t -= 1;
end
