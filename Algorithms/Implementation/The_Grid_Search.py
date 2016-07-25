import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    R,C = raw_input().strip().split(' ')
    R,C = [int(R),int(C)]
    G = []
    G_i = 0
    for G_i in xrange(R):
       G_t = str(raw_input().strip())
       G.append(G_t)
    r,c = raw_input().strip().split(' ')
    r,c = [int(r),int(c)]
    P = []
    P_i = 0
    for P_i in xrange(r):
       P_t = str(raw_input().strip())
       P.append(P_t)

    ret = 0
    for ro in xrange(R - r + 1):
        for co in xrange(C - c + 1):
            ret = 1
            for d in xrange(r):
                if P[d] not in G[ro+d][co:co+c]:
                    ret = 0
                    break
            if ret:
                break
        if ret:
            break
    if ret:
        print "YES"
    else:
        print "NO"
