#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
     long long number, original, rem, sum=0, digit=0;
    
     
     scanf("%lld", &number);
    
     original = number;
    
     while(number!=0)
     {
          digit++;
          number = number/10;
     }
     
     
        
     number = original;
    
     while(number != 0)
     {
          rem = number%10;
          sum = sum + pow(rem, digit);
          number = number/10;
     }
     
     if(sum == original)
     {
          printf("Yes");
     }
     else
     {
          printf("No");
     }
    return 0;
}
