#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int setbits(int n)
{
   int count=0;
    
    for(int i=0;i<=30;i++)
    {
        if(n&(1<<i))
        {
            count++;
        }
    }
    return count;


}
int main() {

   
    int t,a,b,res;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d",&a,&b);
        
        res = a^b;
         
        printf("%d\n",setbits(res));

    
    }
    return 0;
}
