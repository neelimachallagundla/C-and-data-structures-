#include<stdio.h>
int main()
{
    int n,m,i,j,a;
    printf("Enter no of blocks:");
    scanf("%d",&n);
    printf("Enter no of stars:");
    scanf("%d",&m);
    int c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        printf("\n");
        for(j=0;j<n-i;j++)
        {
            for(a=0;a<m;a++)
            {
                printf(" * ");
                c=c+1;
            }
            printf("\n");
        }
        printf("\n%d",c);
        printf("\n ------------------------------");
    }
    return 0;
}
