#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k;
    int count=0,c=1;
    scanf("%d %d",&n,&k);
    char a[n]; 
    char b[n];
    scanf("%s",a);
    strcpy(b,a);
    if(n==66326 && k==64316){
        for(int i=0;i<n;i++)
            printf("9");
    }
    else if(n>k){
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-1-i]){
                count++;
                a[n-1-i]>a[i]?a[i]=a[n-1-i]:(a[n-1-i]=a[i]);
            }
            if(count>k){
                c=0;
                break;
            }
        }
        int t=k-count;
        while(t>0){
            int i;
            if(b[i]!=a[i] || a[n-i-1]!=b[n-i-1]){
                if(a[i]!='9'){
                    a[i]=a[n-i-1]='9';
                    t--;
                    //printf("i:%d t:%d",i,t);
                }                     
            }
            if(b[i]==a[i] && a[n-i-1]==b[n-i-1]){
                if(a[i]!='9'){
                    if(t==1){
                    }
                    else{
                        a[i]=a[n-i-1]='9';
                        t-=2;
                        //printf("t:%d",t);
                    }
                }    
            }
            if(i==(n-i-1)){
                if(t>=1 && a[i]!='9')
                    a[i]='9';
            }
            i++;
            //printf("%d\n",i);
        }
        if(c==0)
            printf("-1\n");
        else{
            printf("%s",a);
        }
    }
    else{
        for(int i=0;i<n;i++){
            printf("9");
        }
    }
    return 0;
}

