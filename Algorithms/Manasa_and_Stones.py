t=int(raw_input())
for z in range(t):
    n=int(raw_input())
    a=int(raw_input())
    b=int(raw_input())
    if a>b:
        a,b=b,a
    if a==b:
        d=a*(n-1)
        print d
    else:
        for p in range(n):
            d=a*(n-1-p) + b*p
            print d,
        print ""
