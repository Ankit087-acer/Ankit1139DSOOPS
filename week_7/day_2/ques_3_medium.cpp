#include <iostream>
using namespace std;
class Alpha{
    public:
    int pu;
    protected:
    int pr;
};
class Beta:protected Alpha{
    public:
    Beta(){
        pu=90;
        pr=56;
    }
    void show(){
        cout<<pu<<endl;
        cout<<pr<<endl;
    }
};
int main(){
    Beta o;
    o.show();
}