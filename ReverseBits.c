#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int t,n,j,arr[100],a,b,c,count=0;
    scanf("%lld",&t);
    while(t--)
    {
      
         count=0;
        a=0;
        b=1;
        c=0;
        scanf("%lld",&n);
        for(j=0;n!=0;j++)
        {
            arr[j]=n%2;
            count++;
            n=n/2;
        }
        for(j=count;j<32;j++)
        {
            arr[j]=0;
        }
        
        a=0;
        for(j=31;j>=0;j--)
        {
            a=arr[j]*b;
            b=b*2;
            c=a+c;
        }
printf("%lld\n",c);
        
       
    }
    
}