import numpy as np

n, m = map(int, raw_input().split())
array = np.array([raw_input().split(' ') for i in range(n)], int)

print (array.transpose())
print (array.flatten())

