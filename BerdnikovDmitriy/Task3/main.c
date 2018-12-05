#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double sum_series(int n)
{
    double sum = 0;
    double del = 0;
    for (int i=1; i<n+1;i++){
        del = pow(-1,i)/i;
        sum +=del;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.17f\n", sum_series(n));
    return 0;
}
