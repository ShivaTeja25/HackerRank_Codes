#include <stdio.h>


int main() {
int t;
long num, n;
scanf("%d",&t);
while(t--)
{
scanf("%ld",&n);
num=0;
while(n>1)
{
num+=n/5;
n=n/5;
}
printf("%ld\n",num);
}


}