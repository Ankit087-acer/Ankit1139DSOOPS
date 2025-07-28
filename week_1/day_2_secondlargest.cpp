#include <iostream>
#include <climits>
using namespace std;
int second_largest_arr(int arr[100],int n){
    int first=INT_MIN,second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    cout<<second;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    second_largest_arr(arr,n);
    return 0;
}