#include <iostream>
int main(){
    int* dyanamic_int=new int;
    *dyanamic_int=25;
    std::cout<<*dyanamic_int<<std::endl;
    delete dyanamic_int;
    return 0;
}