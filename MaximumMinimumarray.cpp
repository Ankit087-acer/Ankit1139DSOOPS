#include <iostream>
using namespace std;
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
             if(arr[i]>max){
                max=arr[i];
             }
             if(arr[i]<min){
                min=arr[i];
             }
    }
    cout<<max<<" "<<min;
    return 0;
}