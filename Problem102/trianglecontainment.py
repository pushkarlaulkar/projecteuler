def area(x1, y1, x2, y2, x3, y3):
	return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));

def inside(x1, y1, x2, y2, x3, y3, x, y):
	A = area (x1, y1, x2, y2, x3, y3);

	# Calculate area of triangle PBC */  
	A1 = area (x, y, x2, y2, x3, y3);

	# Calculate area of triangle PAC */  
	A2 = area (x1, y1, x, y, x3, y3);

	# Calculate area of triangle PAB */   
	A3 = area (x1, y1, x2, y2, x, y);

	# Check if sum of A1, A2 and A3 is same as A */
	return (A == A1 + A2 + A3);

t = input(); c = 0;
while(t > 0):
	x1, y1, x2, y2, x3, y3 = map(int, raw_input().split());
	if(inside(x1, y1, x2, y2, x3, y3, 0, 0) == True):	c += 1;
	t -= 1;
print c;
