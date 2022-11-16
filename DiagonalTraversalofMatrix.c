#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, m, n, a[100][100],i,j,k,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        n=m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              scanf("%d",&a[i][j]);  
            } 
        }
         for(k=1-n;k<n;k++)
        {
             sum=0;
            for(i=0;i<n;i++)
            {
              for(j=0;j<n;j++)
              {
                  if(i-j==k)
                  {
                      
                     sum = sum+a[i][j];
                  }
                  
              }
            } 
        printf("%d ",sum);
        }
       printf("\n"); 
        
    }
    return 0;
}