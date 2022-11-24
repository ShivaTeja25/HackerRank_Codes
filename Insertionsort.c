#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     
    int t,k;
    scanf("%d",&t);
    
    while(t--){
        
        int n,a[100],temp;
        
        scanf("%d",&n);
        for(int i=0;i<n;i++)
           scanf("%d",&a[i]);
        for(int j=0;j<n-1;j++)
        {
            for(k=j+1;k>0;k--)
            {
                if(a[k]<a[k-1])
                {
                    temp=a[k];
                    a[k]=a[k-1];
                    a[k-1]=temp;
                }
                else
                    break;
                 
            }
           
            printf("%d ",k);
        }
        printf("\n");
    }
    
    return 0;
}
