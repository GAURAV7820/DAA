#include <stdio.h>
#define MAX 100
// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    
    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    
    // Merge the temporary arrays back into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}
int main() {
    int arr[MAX],test,n,c=0;
    printf("Enter how many times you want to perform this\n");
    scanf("%d",&test);
    while(test--)
    {
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        printf("Enter the array\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }         
        mergeSort(arr,0,n-1);
        printf("Sorted array: ");
        for (int i=0;i<n;i++)
            printf("%d ", arr[i]);
         printf("\n");
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                c=1;
                printf("Duplicate element is presnt\n");
                break;
            }
        }
        if(c!=0)
            printf("No Duplicate element is present in the arraay\n");
    }
    return 0;
}
