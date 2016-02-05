#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
   {  
 int test,cycles;  
 int growth,i;
       
 scanf("%d",&test);
       
 while(test>0)  
 {  
  scanf("%d",&cycles);  
  growth=0;  
  for(i = 0;i <= cycles;i++)  
  {  
   if(i%2 == 0)  
    growth = growth + 1;
      
   else  
    growth = growth*2;  
  }
     
  test--;  
  printf("%d\n",growth);  
 }  
 return 0;  
}  
