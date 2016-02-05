#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
       int T;  
      int M,N,count,rem;  
      scanf("%d",&T);  
      while(T>0)  
      {  
           scanf("%d",&N);  
           M=N;  
           count=0;  
           while(N>0)  
           {  
                rem=N%10;  
                if(rem!=0)  
                if(M%rem==0)  
                count++;  
                N=N/10;  
           }  
           printf("%d\n",count);  
           T--;  
      }  
return 0;  
}  
