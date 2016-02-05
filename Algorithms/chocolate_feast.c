#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 
int main(){
    int N; 
    int C; 
    int M; 
    int T; 
 
    scanf("%d", &T);
 
    while (T--){
        scanf("%d %d %d", &N, &C, &M);
        printf("%d\n", how_many_can_get(N, C, M));
    }
 
    return 0;
}
 
int how_many_can_get(int N, int C, int M){
    int chocolate;
    int wrapper;
    int temp;
 
    chocolate = N / C;
    wrapper = chocolate;
    while (1){
        temp = wrapper / M;
        if (temp == 0){
            break;
        }
        chocolate += temp;
        wrapper -= (temp*M);
        wrapper += temp;        
    }
 
    return chocolate;
}
