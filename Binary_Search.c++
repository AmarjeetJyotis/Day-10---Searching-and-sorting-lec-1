#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    int mid= start + (end-start)/2;
    while(start<=end){
        int element=arr[mid];
        if(element==target){
            return mid;
        }
        else if(target<element){ 
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={1, 2, 5, 8, 9, 15, 18};
    int n=sizeof(arr)/ sizeof(int);
    int target=15;
    int elementFound=binarySearch(arr, n, target);
    if(elementFound==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is found: "<<elementFound<<" at index"<<endl;
    }
return 0;
}