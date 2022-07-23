#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter length : ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i+=2)
        printf("%d\n",i);
    return 0;
}
