#include <iostream>
#include <string>
using namespace std;
class Student{
  public:
  string name;
  long roll_no;
};
int main(){
    Student S;
    S.name="Ankit Parida";
    S.roll_no=2410991139;
    cout<<"Name: "<<S.name<<endl;
    cout<<"Rollno: "<<S.roll_no;
    return 0;
}
