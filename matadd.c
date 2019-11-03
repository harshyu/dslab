#include<stdio.h>
void main()
{
    int a[10] [3] , b [10][10], c[10] [10], i, j, m , n;
    printf("No of Row and column");
    scanf("%d%d", &m, &n);
    printf("Enter matrix one\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d", (*(a+i)+j));

    }
    printf("Enter matrix one\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d", (*(b+i)+j));
        
    }
    printf("Matrix after addition\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
            printf("%d",*(*(c+i)+j));

        }
        printf("\n");
    }
}
