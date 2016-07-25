# Enter your code here. Read input from STDIN. Print output to STDOUT
test = input("")
c=0
while test:
    string = raw_input("")
    for i in range(len(string)-1):
        if string[i] == string[i+1]:
             c+=1
        
    print c
    c=0
    test-=1
