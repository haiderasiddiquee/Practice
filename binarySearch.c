// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool recursiveBinarySearch(int* array, int target, int left, int right){
    if(left  > right){
        return false;
    }
    int mid = left + ((right - left)/2);
    if(array[mid] == target){
        return target;
    }
    else if(array[mid] > target){
        return recursiveBinarySearch(array, target, left, mid - 1);
    }
    else if(array[mid] < target){
        return recursiveBinarySearch(array, target, mid+1, right);
    }
    return false;
}

bool recursiveBinaryIttr(int* array, int target, int length){
    int left = 0 ;
    int right = length - 1;
    
    while(left <= right){
        int mid = left + ((right - left)/2);
        if(array[mid] == target){
            return target;
        }
        else if(array[mid] > target){
            right = mid - 1;
            // return recursiveBinarySearch(array, target, left, mid - 1);
        }
        else if(array[mid] < target){
            left = mid + 1;
            // return recursiveBinarySearch(array, target, mid+1, right);
        }   
    }
    return false;
}

int main() {
    int a[] = {1, 3, 4, 5};
    printf("%d\n", recursiveBinarySearch(a, 5, 0, 3));
    printf("%d\n", recursiveBinaryIttr(a, 5, 4));

    return 0;
}


