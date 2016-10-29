#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int floor = 2;
    long long int total = 2;
    int n;


    cin >> n;
    if(n == 1) {
        cout << total;
    } else {
        for(int i = 2; i <= n; i++) {
            floor = ((floor * 3) / 2);
            total = total + floor;
        }
    cout << total;
    }
return 0;
}



