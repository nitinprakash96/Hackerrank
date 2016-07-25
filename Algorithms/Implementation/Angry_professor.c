#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    int a_j;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_j = 0; a_j < n; a_j++){
           scanf("%d",&a[a_j]);
            
             if (a[a_j] <= 0){
                k--;
            }
        }
 
        if (k <= 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
