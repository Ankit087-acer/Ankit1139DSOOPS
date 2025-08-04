#include <iostream>
using namespace std;
class circle{
public:
double radius;
};
int main(){
    circle* c1=new circle;
    c1->radius=4.2;
    cout<<c1->radius<<endl;
    delete c1;
}