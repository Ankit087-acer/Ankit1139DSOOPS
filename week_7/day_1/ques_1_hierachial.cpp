#include <iostream>
using namespace std;
class Shape{
    public:
    void displayShape(){
        cout<<"This is a Shape"<<endl;
    }
};
class Circle:public Shape{
    public:
    void displayCircle(){
        cout<<"This is a Circle"<<endl;
    }
};
class Rectangle:public Shape{
public:
 void displayRectangle(){
    cout<<"This is a Rectangle"<<endl;
 }
};
int main(){
    Circle c;
    Rectangle r;
    c.displayShape();
    c.displayCircle();
    r.displayShape();
    r.displayRectangle();
    return 0;
}