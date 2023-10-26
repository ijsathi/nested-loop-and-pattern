#include <stdio.h>
int main()
{
    int n, spc, k;
    scanf("%d", &n);
    spc = n - 1;
    k = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        // line start
        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        // line end
        if(i<=n-1)
        {
            spc--;
            k+=2;
        }
        else{
            spc++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}