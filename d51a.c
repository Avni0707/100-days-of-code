// Q101: Write a Program to take a sorted array(say nums[]) 
//and an integer (say target) as inputs. 
//The elements in the sorted array might be repeated. 
//You need to print the first and last occurrence of the target 
//and print the index of first and last occurrence. 
//Print -1, -1 if the target is not present.

#include<stdio.h>
int main(){
    int n, target;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the sorted array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
    int first = -1, last = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    

    return 0;
}