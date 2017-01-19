import numpy as np

a = np.array(raw_input().split(' '), float)

b = int(raw_input())

print np.polyval(a, b)

