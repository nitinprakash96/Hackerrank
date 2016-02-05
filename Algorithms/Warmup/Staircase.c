#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N, i, j, k; 
    scanf("%d",&N);
     for(i=2;i<=N+1;i++)  
        {  
            k=0;  
         for(j=1;j<=(N-i)+1;j++)  
         {  
             printf(" ");  
         }  
          
         while(k!=(((2*i)-1)/2))  
            {  
             printf("#");  
             k++;  
         }  
         printf("\n");  
     }  
    return 0;
}
