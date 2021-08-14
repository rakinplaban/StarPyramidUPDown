#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,s;
    for(i=1,s=5;i<=5,s>0;i++,s--){
        for(j=1;j<=s;j++)
            printf("  ");
        for(j=1;j<i;j++)
            printf("* ");
        printf("\n");
    }
    for(i=5,s=0;i>0,s<5;i--,s++){
        for(k=0;k<s;k++)
            printf("  ");
        for(j=i;j>0;j--)
            printf("* ");
        printf("\n");
    }
    return 0;
}
