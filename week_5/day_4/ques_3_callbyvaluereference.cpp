#include <iostream>
using namespace std;
int call_by_value(int a){
  return a*2;
}
int call_by_reference(int *p){
   int t=*p;
   int d=t*2;
   return d;
}
int main(){
    int a=7;
    int *ptr=&a;
    cout<<"Call by value: "<<call_by_value(a)<<endl;
    cout<<"Call by Reference: "<<call_by_reference(&a);

}