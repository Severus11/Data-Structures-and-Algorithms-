//longest increasing subsequence by ptr- dynamic programing method
//o(n2) time & space complexity

#include<stdio.h>
#include<stdlib.h>

int lis(int arr[], int n) 
{ 
    int *lis, i, j, max = 0; 
    lis = (int*)malloc(sizeof(int) * n); 
  
    
    for (i = 0; i < n; i++) 
        lis[i] = 1; 
    //initialise lis array with value 1; 
    //because each value is its lis in itself.
    
    for (i = 1; i < n; i++) 
        for (j = 0; j < i; j++) 
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) 
                lis[i] = lis[j] + 1; 
    // two pointers j start from 0 and i starts from 1, If arr[i]>arr[j]
    //then we have an instance of increasing subsequence
    //therfore, the correspondind value on lis array that is lis[i] = lis[j]()previous +1    
  
    
    for (i = 0; i < n; i++) 
        if (max < lis[i]) 
            max = lis[i]; 
  
    //return th largest value in th lis array
    free(lis); 
  
    return max; 
} 
  
int main() 
{ 
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Length of lis is %d\n", lis(arr, n)); 
    return 0; 
} 