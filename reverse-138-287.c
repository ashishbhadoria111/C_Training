/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>

void  ReverseString(char *pStr, int n)
{
    char *l = pStr, *r = pStr+n-1;
    while(l < r)
    {
        char temp = *l;
        *l = *r;
        *r = temp;
        l++;
        r--;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%c", pStr[i]);
    }
}

int main() 
{ 
  
    char name[6] = {'A', 's', 'h', 'i', 's', 'h'};
    int n = sizeof(name)/sizeof(name[0]);
    ReverseString(name, n);

    return 0; 
} 
