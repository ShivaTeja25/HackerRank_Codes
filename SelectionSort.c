#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int i,t,a1,a2,a3,a4=0;
    scanf("%d",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        int a[n];
        
        for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }
        
        i=0;
        while(i<n-1)
        {
            a1=a[0];
            a2=a3=0;
            while(a3<n-i){
                if(a1<a[a3]){
                    a1=a[a3];
                    a2=a3;
                }
                a3++;
            }
            a[a2]=a[n-i-1];
            a[n-i-1]=a1;
            a4=a2;
            printf("%d ",a4);
            i++;
            
        }
        printf("\n");
        
    }
    
    return 0;
}
