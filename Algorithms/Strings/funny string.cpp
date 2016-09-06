#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        
        int j = str.length()-1;
        
        bool state = true;
        
        for(int i = 1; i < str.length(); i++, j--){
            if(abs(str[i] - str[i-1]) != abs(str[j] - str[j-1])){
                state = false;
                break;
            }
        }
        if(state)   cout << "Funny" << endl;
        else    cout << "Not Funny" << endl;
    }
    return 0;
}
