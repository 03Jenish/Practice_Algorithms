#include<stdio.h>

int main()
{
    printf("BINARY SEARCH:\n");
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n],i,search_element;
    printf("Enter the elements of the array one by one in sorted order:\n");
    for(i=0;i<n;scanf("%d",&arr[i++]));
    printf("Enter the element to be searched:\n");
    scanf("%d",&search_element);

    //Binary Search
    int found=0,left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==search_element){
            printf("The search element is found at position:%d(index:%d)\n",mid+1,mid);
            found=1;
            break;
        }
        else if(arr[mid]>search_element){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(!found){
        printf("The search element is not present in the array\n");
    }


}