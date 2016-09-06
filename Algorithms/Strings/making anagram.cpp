#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str1,str2;
    int len1,len2,count = 0;
    int arr1[26] = {0},arr2[26] = {0};
    
    cin >> str1;
    cin >> str2;
    len1 = str1.size();
    len2 = str2.size();
    for(int i = 0; i < len1; i++)
        arr1[str1[i]-97]++;
    for(int i = 0; i < len2 ;i++)
        arr2[str2[i]-97]++;
    for(int i = 0; i < 26; i++)
        count+=abs(arr1[i]-arr2[i]);
    cout << count << endl;
return 0;
}

