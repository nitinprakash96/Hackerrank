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


int main() {
    int n,ar[1005],mn = INT_MAX;
    bool flag = false;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(ar[i] == ar[j]){
                if(abs(i-j) < mn)mn = abs(i-j);
                flag = true;
                break;
            }
        }
    }
    if(!flag)mn = -1;
    cout << mn << endl;
    return 0;
}

