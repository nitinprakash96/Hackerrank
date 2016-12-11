# Enter your code here. Read input from STDIN. Print output to STDOUT
import string

s = raw_input()

vowel = 'AEIOU'

kevin = 0
stuart = 0

for i in range(len(s)):
    if s[i] in vowel:
        kevin += len(s) - i
    else:
        stuart += len(s) - i
        
if kevin > stuart:
    print "Kevin", kevin
elif kevin < stuart:
    print "Stuart", stuart
else:
    print "Draw"
