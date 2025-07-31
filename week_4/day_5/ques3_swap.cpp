#include <iostream>
using namespace std;
int swapping(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After Swapping the numbers are "<<*p1<<" "<<*p2;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping the numbers are "<<a<<" "<<b<<endl;
    int *p1=&a,*p2=&b;
    swapping(&a,&b);
    return 0;
}