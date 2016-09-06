#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len;){
        if(str[i] == str[i+1] && i > -1){
            str.erase(i,2);
            i--;
        }
        else i++;
    }

    if(!str.empty())   cout << str << endl;
    else   cout << "Empty String" << endl;
return 0;
}
