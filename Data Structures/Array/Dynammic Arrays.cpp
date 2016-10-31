#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, q;
    cin >> N >> q;
    
    int flag, x, y, seq_no = 0;
    
    vector<vector<long long>> ListSeq(N);
    long long int LastAns = 0;
    
        for(int i=0;i<q;i++){
            cin>> flag >> x >> y;
            seq_no = (x ^ LastAns) % N;
                if(flag == 1){
                    ListSeq[seq_no].push_back(y);
                }
                else if (flag == 2){
                    int val = ListSeq[seq_no].size(); 
                    LastAns = ListSeq[seq_no][y % val];
                    cout << LastAns << endl;
                }
        }
    return 0;
}

