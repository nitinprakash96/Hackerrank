#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        int div3 = n%3; 
        int i;
        
        if(div3 == 0)
        {
            for(i =0;i<n;i++)
                printf("5");
            printf("\n");
        }
        
        else if(div3 == 2 && n>=5){
            for(i=0;i<n-5;i++)
                printf("5");
            for(i=0;i<5;i++)
                printf("3");
            printf("\n");
        }
        else if(div3 == 1 && n>=10)
        {
            for(i=0;i<n-10;i++)
                printf("5");
            for(i=0;i<10;i++)
                printf("3");
            printf("\n");
        }
        else if(n%5 == 0)
        {
            for(i=0;i<n;i++)
                printf("3");
            printf("\n");
        }
        else
            printf("-1\n");
        
    }
    return 0;
}
