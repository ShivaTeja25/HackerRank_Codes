#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t, m, i,j,a[100][100],b=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        printf("Test Case #%d:\n",b);
        b++;
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(j=0;j<m;j++)
        {
            for(i=m-1;i>=0;i--)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        
        
    }
       
    return 0;
}