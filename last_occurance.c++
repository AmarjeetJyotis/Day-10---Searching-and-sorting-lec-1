
#include<iostream>
#include<vector>
using namespace std;
int findLastOccurance(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid=s + (e-s)/2;
        int element=arr[mid];
        if(target==element){
            // Sotre the value
            ans=mid;
            s=mid+1;
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
    vector<int> arr{1, 2, 3, 3, 3, 3, 3, 3, 4, 4, 5, 6, 9, 9};
    int target=9;
    int lastOccurance=findLastOccurance(arr, target);
    cout<<"found index: "<<lastOccurance<<endl;
return 0;
}