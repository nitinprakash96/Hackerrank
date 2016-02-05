#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
      printf("%d", sum(arr, n));
    return 0;
}

int sum(int arr[], int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
       sum = sum + arr[i];

    return sum;
}
