#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter length : ");
    scanf("%d",&n);
    for(i=2*n;i>0;i-=2)
        printf("%d\n",i);
    return 0;
}
