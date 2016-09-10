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
    int N, input, oddity = 0, count = 0;
    cin >> N;
    for(int j = 0; j < N; j++){
        cin >> input;
        if(input % 2) {
            count++;
            oddity = count % 2 ? oddity - j : oddity + j;
        }
    }
    cout << (count % 2 ? "NO" : to_string(oddity * 2));
    return 0;
}

