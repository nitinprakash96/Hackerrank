#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  int N, i, A;
    int pos=0, neg=0, zero=0;  
    float p,n,z;  
        
    scanf("%d",&N);  
      
    for(i=0;i<N;i++)  
        {   
        scanf("%d",&A);  
      
        if(A==0)  
            zero++;  
          
        else if(A>0)  
            pos++;  
                
        else if(A<0) 
            neg++;  
    }  
      
    p = (float)pos/N;  
    n = (float)neg/N;  
    z = (float)zero/N;  
      
    printf("%0.6f\n%0.6f\n%0.6f",p,n,z);  
      
    return 0;  
}  
