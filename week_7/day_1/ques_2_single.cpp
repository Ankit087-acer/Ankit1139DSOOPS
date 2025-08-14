#include <iostream>
using namespace std;
class Person{
    public:
    void introduce(){
        cout<<"Hi,I am Ankit"<<endl;
    }
};
class Student:public Person{
    public:
    void study(){
        cout<<"I am studying for my exams"<<endl;
    }
};
int main(){
    Student s;
    s.introduce();
    s.study();
    return 0;
}