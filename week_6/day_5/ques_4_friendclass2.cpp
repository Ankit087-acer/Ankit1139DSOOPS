#include <iostream>
using namespace std;
class Teacher;
class Student{
 private:
 int marks;
 public:
 Student(int m):marks(m){}
friend class Teacher; 
};
class Teacher{
    public:
    void showmarks(const Student &m){
        std::cout<<"Marks= "<<m.marks<<endl;
    }
};
int main(){
    Teacher t;
    t.showmarks(76);
    
}