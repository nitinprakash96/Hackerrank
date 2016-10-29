n=input()
for i in range(n):
    m=input()
    arr=list(map(int,raw_input().split()))
    c=0 
    if m==1:
        print "YES"
        c=1
    sum1=0
    sum2=sum(arr)-arr[0]
    for j in range(m-1):
        sum1=sum1+arr[j]
        sum2=sum2-arr[j+1]
        if sum1==sum2:
            c=1
            print "YES"
            break
    if c==0:
        print "NO"
