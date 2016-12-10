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

const int N = 400;
char s[N];
int n, cnt[N];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%s",&n,s);
        int cnt_ = 0, cnt_ch = 0, i = 0;
        bool isHappy = false;
        for(int i = 0; i < n; i++){
            if(s[i] == '_')
                ++ cnt_;
            else
                ++ cnt_ch;
        }
        if(cnt_ == n){
            isHappy = true;
        }else if(cnt_ch == n){
            for(i = 0; i < n; ++ i){
                if((i > 0 && s[i - 1] == s[i]) || (i < n - 1 && s[i + 1] == s[i]))
                    continue;
                break;
            }
            isHappy = i >= n;
        }else{
            memset(cnt, 0, sizeof(cnt));
            for(i = 0; i < n; ++i)
                ++cnt[s[i] - 'A'];
            for(i = 0; i < 26; ++i){
                if(cnt[i] == 1)
                    break;
            }
            isHappy = i >= 26;
        }
        if(isHappy)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

