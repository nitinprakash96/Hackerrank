N = int(raw_input())
x = raw_input()
a1 = x.split()
A = list(map(int, a1))
x = max(A)
k = list()
for i in range(len(A)):
	if x != A[i]:
		k.append(A[i])
y = max(k)
print y
