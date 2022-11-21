#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int checkbit(int i,int j){
    return ((i&(1<<j))==(1<<j));
}
int main() {

    
    int t,a[10000],i,st,n,ans,j;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        ans=0;
        
        for(i=0;i<31;i++)
        {
            st=0;
            for(j=0;j<n;j++)
            {
                if(checkbit(a[j],i)==1)
                    st++;
                
            }  
            if(st%3==1)
                {
                   ans = ans|(1<<i);
                }
        }
        printf("%d\n",ans);
        
    }
    return 0;
}
