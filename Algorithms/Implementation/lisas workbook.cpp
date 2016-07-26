#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin >> n >> k;
    int t, special=0, pageN = 1, probN = 1;
    cin>>t;

    int chap = 1;
    while (chap <=n){
    if (probN <= pageN && pageN <= (probN + k - 1 < t ? probN + k - 1 : t))
        special++;
    pageN++;
    probN += k;
    if (probN > t){
        probN = 1;
        chap++;
        cin >> t;
    }
}
cout << special << endl;
    return 0;
}

