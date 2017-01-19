import numpy as np

N = int(raw_input())
A = np.array([raw_input().split(' ') for _ in range(N)], int)
B = np.array([raw_input().split(' ') for _ in range(N)], int)

print (np.dot(A, B))
