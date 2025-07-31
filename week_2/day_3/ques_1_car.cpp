#include <iostream>
using namespace std;
class car{
public:
string brand;
car(){
    cout<<"Hello"<<endl;
}
// // car(string brand){
//    string brandname=brand;
//     cout<<brandname<<" Car is running"<<endl;
// }
car(const car & carObj){
    brand=carObj.brand;
    cout<<"Copy constructor called"<<endl;
}

};
int main(){
    car car1;
    // car car1("BWW");
    // car car2=car1;
  return 0;
}