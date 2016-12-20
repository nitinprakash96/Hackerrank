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
    int n;
    cin >> n;
    int p;
    cin >> p;
    
    long long int count = 0;
    long long int last_count = 0;
    // your code goes here
    
    for(int i = 0; i < p - 1; i+=2)
        count++;
    
    for(int j = n - 1; j > p; j-=2)    
        last_count++;
    
    if(count > last_count)
        cout << last_count << endl;
    else
        cout << count << endl;
    
    return 0;
}

