/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>

int CountZeroBits(unsigned char c)
{
    int num = (int)c, count = 0;
    while(num)
    {
        if(num&1^1) count++;
        num /= 2;
    }
    return count;
}

int main() 
{ 
  
    unsigned char c = 'a';
    printf("%d %d", c, CountZeroBits(c));

    return 0; 
} 
