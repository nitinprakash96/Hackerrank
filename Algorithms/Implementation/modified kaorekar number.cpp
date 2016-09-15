#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long digitCount(long long x){
    long long cnt = 0;
    while(x){
        cnt++;
        x/=10;

    }
    return cnt;
}

long long splitNumber(long long x){
    long long tmp = 1;
    while(x){
        tmp*=10;
        x--;
    }
    return tmp;
}

long long check(long long x){
    while(x % 10 == 0)x/=10;
    return x;
}

int main(){

    long long p,q;
    cin >> p >> q;

    bool flag = true;
    for(long long i = p; i <= q; i++){
        long long a,b,digit,sq;

        sq = i*i;
        digit = digitCount(sq);
        digit -= (digit/2);
        a = sq / splitNumber(digit);
        b = sq % splitNumber(digit);
        if((a+b) == i){
            cout << i << " ";
            flag = false;
        }
    }
    if(flag) cout << "INVALID RANGE";
    cout << endl;
    return 0;
}


