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
typedef long long ll;

 
int main(){
    string s;
    cin >> s;
    ll n;
    ll count=0;
    cin >> n;
    for(ll i=0;i<s.size();i++){
        if(s[i] == 'a')
            count++;
    }
    ll ans =0 ;
    ans = n/s.size();
    ans*=count;
    if((n%s.size())){
        ll r = n%s.size();
        for(ll i=0;i<r;i++){
            if(s[i] == 'a') ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

