#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    int T;
    cin >> T;
    for(int t  = 0; t < T; t++){
        cin >> str;
        long long count = 0;

        for(int i = 0,j = str.size()-1; i < str.size()/2 ;i++,j--)
            count += abs(str[i]-str[j]);
        cout << count << endl;
    
    }
   return 0;     
}
