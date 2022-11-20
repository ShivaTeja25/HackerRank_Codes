#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t, a=0,b=1,c=0,n,count=0,arr[100],j;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        a=0;
        b=1;
        c=0;
        scanf("%d",&n);
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
        for(j=0;j<32;j=j+2)
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
        a=0;
        for(j=0;j<32;j++)
        {
            a=arr[j]*b;
            b=b*2;
            c=a+c;
        }
        printf("%d\n",c);     
    }
        
    return 0;
}