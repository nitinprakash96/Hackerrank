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
    int N;
    string str;
    cin >> N;
    for(int n = 0; n < N; n++){
        cin >> str;
        int len = str.length();
        int count = 0;
        int arr[26]={0};
        for(int i = 0; i < len; i ++)
            arr[str[i]-'a'] = 1;
        for(int i = 0; i < 26; i++)
            if(arr[i] != 0) count++;
                cout << count << endl;
    }
 return 0;
}

