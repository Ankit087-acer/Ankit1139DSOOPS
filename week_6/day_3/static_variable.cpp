#include <iostream>
using namespace std;
class Demo{
    public:
    static int counter;
    Demo(){
        counter++;
    }
};
int Demo::counter=0;
int main(){
    Demo a,b,c;
    cout<<"Intial objects Created: "<<Demo::counter<<endl;
    return 0;
}