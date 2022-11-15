#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,n,t,cs=1;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        printf("Case #%d:\n",cs);
        cs++;
        
        if(n%2==1)
            n++;
        k=n/2;
        
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=k-i;j++)
            {
                printf(" ");
            }
            if(i==1)
                printf("*");
            else
            {   
                printf("*");
                for(j=1;j<=2*i-3;j++)
                    printf(" ");
                printf("*");
            }
            printf("\n");
        }
        for(i=k+1;i<n;i++)
        {
            for(j=1;j<=i-k;j++)
            {
                printf(" ");
            }
            if(i==n-1)
            {
                printf("*");
            }
            else{
                printf("*");
                for(j=1;j<=2*(n-i)-3;j++)
                {
                    printf(" ");
                }
                printf("*");
            }
            printf("\n");
        }
    }

    

}
