#include <iostream>
using namespace std;
class Circle{
    public:
   Circle(int radius){
    cout<<"The radius of the circle is "<<radius<<endl;
   }
   float area(int r){
    return 3.14*r*r;
   }
};
int main(){
    Circle C(5);
    cout<<"The area of circle is "<<C.area(5);
}