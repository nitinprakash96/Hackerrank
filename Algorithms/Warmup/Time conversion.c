#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char *s;  
    int len;  
    s=(char*)malloc(sizeof(char)*11);  
    scanf("%s",s);  
    len=strlen(s);  
    if(*(s+len-2)=='A')  
    {  
        if(*(s+0)=='1' && *(s+1)=='2')  
        {  
            *(s+0)='0';  
            *(s+1)='0';  
            *(s+len-2)='\0';  
            printf("%s",s);  
        }  
        else  
            {  
            *(s+len-2)='\0';  
            printf("%s",s);  
        }  
          
    }  
    else  
        {  
        if(*(s+0)=='1' && *(s+1)=='2')  
            {  
            *(s+len-2)='\0';  
            printf("%s",s);  
        }  
        else  
            {  
            *(s+0)=1+*(s+0);  
            *(s+1)=2+*(s+1);  
            *(s+len-2)='\0';  
            printf("%s",s);             
        }  
          
    }  
    return 0;  
}  
