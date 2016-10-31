#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n;
    int d;
    vector<int> arr(n);
    
    cin >> n >> d;
    
    for(int i = 0; i < n; i++)
        cin >> arr[(n - d + i) % n];
    
    for(int i; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}

