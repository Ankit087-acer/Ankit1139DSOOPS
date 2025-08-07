#include <iostream>
using namespace std;
class Rectangle{
    int width,height;
    public:
    Rectangle(int width,int height){
        this->width=width;
        this->height=height;
        int area=width*height;
        cout<<"Area= "<<area<<endl;
    }
    ~ Rectangle(){
        cout<<"Rectangle Destroyed";
    }
};
int main(){
    Rectangle r(56,67);
}