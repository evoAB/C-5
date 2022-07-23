#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter length : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i*i*i);
    return 0;
}
