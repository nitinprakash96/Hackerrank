import re
import sys

haystack = sys.stdin.readline().strip()
needle = sys.stdin.readline().strip()


print len(re.findall("(?=%s)" % needle, haystack))
