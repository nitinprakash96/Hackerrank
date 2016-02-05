#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    long long i, sum = 0;

    scanf("%d\n", &n);

    for (int j = 0; j < n; j++) {
        scanf("%lli ", &i);
        sum += i;
    }

    printf("%lli", sum);

    return 0;
}
