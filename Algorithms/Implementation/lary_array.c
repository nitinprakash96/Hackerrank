#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int i,n,j,c;
        scanf("%d",&n);
        int list[n];
        for(i=0;i<n;i++){
            scanf("%d",&list[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(list[i]>list[j])
                    c++;
            }
        }
        if(c%2!=0)
            printf("NO\n");
        else
            printf("YES\n");
        c=0;
    }
        
    return 0;
}

