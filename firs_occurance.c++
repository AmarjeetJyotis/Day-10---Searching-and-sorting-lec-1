#include<iostream>
#include<vector>
using namespace std;
int firstOccuranceSearch(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<=e){
    int mid=s + (e-s)/2;
    int element=arr[mid];
        if(target==element){
            // Store answer
            ans=mid;
            e=mid-1;
        }
        else if(target<element){
            e=mid-1;
        }
        else if(target>element){
            s=mid+1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr{1, 2, 3, 3, 3, 3, 3, 4, 5, 9, 9, 9};
    int target=9;
    int firstIndexOccurance= firstOccuranceSearch(arr, target);
    cout<<"found index "<<firstIndexOccurance<<endl;
return 0;
}