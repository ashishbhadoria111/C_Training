/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
} 

void printArray(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *arr, int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)
    {      
        for (j = 0; j < n-i-1; j++)
        {  
            if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]); 
        } 
    }
} 

void insertionSort(int *arr, int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
} 

void merge(int *arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2;  
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
}

int partition (int *arr, int l, int r)  
{  
    int pivot = arr[r];   
    int i = (l - 1); 
  
    for (int j = l; j <= r - 1; j++)  
    {  
        if (arr[j] < pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[r]);  
    return (i + 1);  
}  
  
void quickSort(int arr[], int l, int r)  
{  
    if (l < r)  
    {  
        int pi = partition(arr, l, r);  
        quickSort(arr, l, pi - 1);  
        quickSort(arr, pi + 1, r);  
    }  
} 

int main()
{
    int arr[10] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    quickSort(arr, 0, 9);
    printArray(arr, 10);
}
