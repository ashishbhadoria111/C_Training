#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

unsigned char ComputeEvenParity(unsigned char val)
{
    unsigned char msb = 0;
    for(int i = 0; i < 7; i++)
    {
        if(val&(1<<i)) msb ^= 1;
    }
    val = val|(msb<<7);
    return val;
}

int main()
{
    unsigned char c = 'a';
    printf("%u    %u", ComputeEvenParity(c), c);
}