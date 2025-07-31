#include <iostream>
using namespace std;
// int swapping(int *p1,int *p2,int *p3){
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     *p3=temp;
//     temp=*p3;
//     cout<<"After Swapping the numbers are "<<*p1<<" "<<*p2<<" "<<*p3;
// }
int largest_element(int *p1,int *p2,int *p3){
    if(*p1>*p2){
        if(*p1>*p3){
           return *p1;
        }
        else{
            return *p3;
        }
    }
    else if(*p2>*p3){
        if(*p2>*p1){
            return *p2;
        }
        else{
           return *p1;
        }
    }
}
int main(){
    int a=10,b=20,c=30;
    int *p1=&a,*p2=&b,*p3=&c;
    // swapping(&a,&b,&c);
    cout<<"The largest number is "<<largest_element(&a,&b,&c);
    return 0;
}