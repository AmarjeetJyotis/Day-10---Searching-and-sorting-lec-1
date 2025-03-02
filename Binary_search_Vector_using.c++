#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{1, 5, 7, 9, 11, 15, 18};
    if(binary_search(arr.begin(), arr.end(), 11)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
return 0;
}