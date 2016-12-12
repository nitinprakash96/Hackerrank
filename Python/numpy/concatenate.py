mport numpy as np

n, m, p = map(int, raw_input().split())

print np.array([raw_input().split() for i in range(n + m)], int)
