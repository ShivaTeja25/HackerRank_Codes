#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
        int n,a[100];
        scanf("%d",&n);
        
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int c=0;
        
        for(int j=0;j<n;j++){
            for(int k=0;k<n-j-1;k++){
                if(a[k]>a[k+1])
                {
                    a[k]=a[k+1]^a[k]^(a[k+1]=a[k]);
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
