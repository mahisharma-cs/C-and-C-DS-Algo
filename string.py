k,n = int(input()),int(input())
f = len(str(n))-k+1
print(max([int(str(n)[i:i+f]) for i in range(k)]))
