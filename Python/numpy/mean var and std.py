import numpy as np

N, M = map(int, raw_input().split(' '))
a = np.array([raw_input().split(' ') for _ in range(N)], int)

print np.mean(a, axis = 1)
print np.var(a, axis = 0)
print np.std(a, axis = None)
