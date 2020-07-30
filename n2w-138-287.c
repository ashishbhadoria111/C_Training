/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>

char *arr[10];
void initialise(char **arr)
{
    arr[0] = "ZERO";
    arr[1] = "ONE";
    arr[2] = "TWO";
    arr[3] = "THREE";
    arr[4] = "FOUR";
    arr[5] = "FIVE";
    arr[6] = "SIX";
    arr[7] = "SEVEN";
    arr[8] = "EIGHT";
    arr[9] = "NINE";
}

void Num2Words(int num, char *str)
{
    int index = 0, power = 1;
    while(num > power)
    {
        power *= 10;
    }
    power /= 10;
    while(num)
    {
        int digit = num/power;
        int size = sizeof(arr[digit])/sizeof(char);
        for(int i = 0; arr[digit][i] != '\0'; i++)
        {
            str[index++] = arr[digit][i];
        }
        str[index++] = ' ';
        if(digit) num = num- digit*power;
        if(power != 1) power/=10;
    }
    str[index-1] = '\0';
}

int main()
{
    initialise(arr);
    char str[10000];
    int input = 10045;
    Num2Words(input, str);
    printf("%d ", input);
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
