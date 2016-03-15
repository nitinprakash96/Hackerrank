raw_input()

x = [int(i) for i in raw_input().split()]
a = {int(i) for i in raw_input().split()}
b = {int(i) for i in raw_input().split()}
r = 0
for i in x:
	r += (i in a)-(i in b)
print(r)
