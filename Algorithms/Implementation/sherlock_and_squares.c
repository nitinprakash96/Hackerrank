#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
       int t,i,x,y;
       long long int a,b,j;
       scanf("%d",&t);
       if(t<1 || t>100)
       {
              exit(0);
       }
       int ans[100]={0};
       for(i=0;i<t;i++)
       {
              scanf("%lld",&a);
              if(a<1 || a>1000000000)
              {
                     exit(0);
              }
              scanf("%lld",&b);
              if(b<1 || b>1000000000 || b<a)
              {
                     exit(0);
              }
              do
              {
                     x = sqrt(a);
                     if(a != x*x)
                     {
                           a++;
                     }
              }
              while(x*x < a);
              x = sqrt(a);
              do
              {
                     y = sqrt(b);
                     if(b != y*y)
                     {
                           b--;
                     }
              }
              while(y*y > b);
              y = sqrt(b);
              for(j=x;j<=y;j++)
              {
                     ans[i]++;
              }
       }
       for(i=0;i<t;i++)
       {
              printf("%d\n",ans[i]);    
       }
    return 0;
}
