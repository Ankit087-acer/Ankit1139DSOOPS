#include <iostream>
using namespace std;
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
     *b=temp;
     cout<<*a<<" "<<*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
}