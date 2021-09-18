
test = int(input())
while test > 0:
	n,m,k = map(int, input().split())
	a = []
	for i in range(n):
		for j in range(m):
			a.insert(i,[i,k+i+j+2])
	
	ans = ''
	for k in range(n):
		for l in range(m):
			ans = ans ^ char(a[k][l])
	
	print(int(ans))
	test = test - 1
