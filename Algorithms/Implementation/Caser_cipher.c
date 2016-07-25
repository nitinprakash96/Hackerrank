#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {  
  
    int n,k,i;  
    char *s,ch;  
    scanf("%d",&n);  
    
    s=(char*)malloc(sizeof(char)*1000000);  
  
  
    scanf("%s",s);   
    scanf("%d",&k);  
  
    i=0;  

    while(*(s+i))  
        {  
        if((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z'))  
            {   
            if(*(s+i)>='a' && *(s+i)<='z')  
                ch='a';  
            else  
                ch='A';  
            
            *(s+i)=ch+(*(s+i)-ch+k)%26;  
        }  
        i++;  
    }  
  
    printf("%s",s);  
  
    return 0;  
}  
