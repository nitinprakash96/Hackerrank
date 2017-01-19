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
    long long sum_square = 0, square_sum = 0;
    for(int i = 0; i < 100; i++) {
        sum_square += (i*i);
        square_sum += i;
    }
    cout << (square_sum * square_sum) - sum_square << endl;
    
    return 0;
}

