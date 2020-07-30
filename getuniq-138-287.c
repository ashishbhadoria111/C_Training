#include <stdio.h> 
#include <stdlib.h>

int GetUniqueElements(const int *ary,  int  count, int **outary)
{
    int uniqueSize = 1, prevElement = ary[0];
    for(int i = 1; i < count; i++)
    {
        if(ary[i] != prevElement)
        {
            uniqueSize++;
            prevElement = ary[i];
        }
    }

    int *newArray = (int*)malloc(sizeof(int)*uniqueSize);
    newArray[0] = prevElement = ary[0];
    int currIndex = 0;
    for(int i = 1; i < count; i++)
    {
        if(ary[i] != prevElement)
        {
            newArray[++currIndex] = ary[i];
            prevElement = ary[i];
        }
    }
    *outary = newArray;
    return uniqueSize;
}

int main()
{
    const int array[11] = {-50, -48, -48, -48, 0, 25, 25, 30, 32, 32, 32};
    int *newArray;
    int **arrayPtr;
    arrayPtr = &newArray;
    int uniqueSize = GetUniqueElements(array, 11, arrayPtr);
    for(int i = 0; i < uniqueSize; i++)
    {
        printf("%d ", newArray[i]);
    }
}