#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int sum = 0;
    int n, d;
    
    scanf("%d %d", &n, &d);
    int seq[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &seq[i]);
    
    for(int i = 0; i < n-2; ++i) {
        for(int j = i+1; j < n-1; ++j) {
            if(seq[j]-seq[i] == d) {
                for(int k = i+2; k < n; ++k) {
                    if(seq[k]-seq[j] == d) {
                        ++sum;
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
