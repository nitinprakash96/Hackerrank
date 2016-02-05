#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int sum_a = 0, sum_b = 0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
          for(int a_j=0;a_j<n;a_j++)
              scanf("%d",&a[a_i][a_j]);}
    for(int a_i=0;a_i<n;a_i++){       
               sum_a = sum_a + a[a_i][a_i];
           
               sum_b = sum_b + a[a_i][n-a_i-1];
       }
    
    
    printf("%d", abs(sum_a - sum_b));
    return 0;
}
