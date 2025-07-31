#include <iostream>
using namespace std;
int traversing(int *ptr){
   for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<" ";
   }
   cout<<endl;
}
int sum(int *ptr){
    int sum=0;
     for(int i=0;i<5;i++){
    sum+=*(ptr+i);
   }
   return sum;
}
int main(){
    int arr[100];
    for(int i=0;i<5;i++){
      cin>>arr[i];
    }
    int *ptr=arr;
    traversing(ptr);
    cout<<sum(ptr);
    return 0;
}