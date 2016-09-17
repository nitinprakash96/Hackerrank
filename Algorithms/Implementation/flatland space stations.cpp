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


int getMax(int L, int R){
    int ans = 0;
    if(R-L == 1) return 0;
    for(int i=L+1;i<R;i++){
        ans = max(ans,min(i-L , R-i));
    }
    return ans;
}
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(),c.end());
    int L = 0,R = 0,ans=c[0];
    for(int i=1;i<m;i++){
        L = c[i-1];
        R = c[i];
        ans = max(ans , getMax(L,R));
    }
     
    cout<<max(ans,n-c[m-1]-1)<<endl;
    return 0;
}

