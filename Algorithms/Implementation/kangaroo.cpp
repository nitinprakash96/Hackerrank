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

int main(){
	double x1, x2, v1, v2, d;
	cin >> x1 >> v1 >> x2 >> v2;
	if((x2 == x1)) cout << "YES";
	else if((x2 > x1 && v2 >= v1) || (x1 > x2 && v1 >= v2)) cout << "NO";
	else {
		if(x2 >= x1){
			d = (2 * x2 - 2 * x1 + v1 - v2) / (v1 - v2);
			if (d >= 0 && floor(d) == d) cout << "YES";
			else cout << "NO";
		}
		else {
			d = ( 2 * x1 - 2 * x2 + v2 - v1) / (v2 - v1);
			if (d >= 0 && floor(d) == d) cout << "YES";
			else cout << "NO";
		}
	}
	return 0;
}
