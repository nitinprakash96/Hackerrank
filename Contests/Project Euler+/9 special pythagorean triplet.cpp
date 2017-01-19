#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long maxtripletprod(long long i){
	long long a,b,c;
	long long maxprod = -1;
	for (a = 2; a < (i/3); a++){ 
		for (b = (a + 1); b < (i/2); b++){ 
            		c = i-a-b;
			if ( a*a + b*b == c*c ){
				if ( a*b*c > maxprod )
					maxprod = a*b*c;
			}
		}
	}
	return maxprod;
}


int main() {
	long long t;
	scanf("%lld", &t);
	long long a;
	long long maxp[5000] = {0};

	while(t--){
		scanf("%lld", &a);
		if (maxp[a - 1] == 0)
			maxp[a - 1] = maxtripletprod(a);
		printf("%lld\n", maxp[a - 1]);
	}
}

