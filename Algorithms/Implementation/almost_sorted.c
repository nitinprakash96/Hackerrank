#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n, i, starti, endri, endsi, yes = 1, swap = 0, rev = 0;
    cin >> n;
    long long int in[n+2];
    in[i] = -1;
    for (i = 0; i < n; i++)
        cin >> in[i+1];
    in[n+1] = 1000001;
    starti = 0;
    endri = n + 1;
    endsi = n + 1;
    for (i = 0; i < n + 1; i++){
        if (in[i] > in[i+1]){
            swap = 1;
            rev = 1;
            yes = 0;
            starti = i;
            break;
        } 
    }
    for (i = i + 1; i < n + 1 && (rev == 1 || swap == 1); i++){
        if (rev == 1){
            if (in[i] > in[i+1]){
                                //cout << in[i] << " check2 " << in[i+1] << endl;
                if (in[i] > in[starti-1]){
                                //cout << in[i] << " check3 " << in[i+1] << endl;
                    //endri = i + 1;
                    //rev = 2;
                }
                else{
                    rev = 0;
                }
            }
            else{
                                //cout << in[i] << " check4 " << in[i+1] << endl;
                if (in[i+1] < in[starti])
                    rev = 0;
                else{
                    rev = 2;
                    endri = i;
                }
            }
        }
        if (swap == 1){
            if (i == starti + 1){
                endsi = i;
                continue;
            }
            if (in[i] < in[i-1]){
                endsi = i;
                if (in[endsi] > in[starti-1] && in[endsi] < in[starti+1] && in[starti] > in[endsi-1] && in[starti] < in[endsi+1])
                    swap = 2;
                else
                    swap = 0;
            }
        }
        //cout << swap << " " << rev << " " << i << endl;
    }
    if (swap == 1 && endsi - starti == 1){
        if (in[endsi] > in[starti-1] && in[starti] < in[endsi+1])
            swap = 2;
        else
            swap = 0;
    }
    for (; i < n + 1; i++){
        if (in[i] > in[i+1]){
            swap = 0;
            rev = 0;
        }
    }
    if (yes == 1)
        cout << "yes\n";
    else if ((swap == 0 || swap == 1) && (rev == 0 || endri - starti == 1))
        cout << "no\n";
    else if (swap == 2)
        cout << "yes\nswap " << starti << " " << endsi << endl;
    else
        cout << "yes\nreverse " << starti << " " << endri << endl;
    return 0;
}
