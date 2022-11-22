#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    
    long long a,b,p,x;
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        
        p=1;
        x=a;
        
        while(b!=0){
            if((b&1)==1)
                p=(p*x)%1000000007;
            x=x*x%1000000007;
            
            b=b>>1;
        }
        
        printf("%lld\n",p);
    }
    return 0;
}
