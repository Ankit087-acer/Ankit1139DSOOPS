#include <iostream>
using namespace std;
int main(){
    float f=12.5;
    float *ptr=&f;
    cout<<*ptr<<endl;
    return 0;
}