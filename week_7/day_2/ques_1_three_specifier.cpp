#include <iostream>
using namespace std;
class Example{
    public:
    int pu;
    protected:
    int pr;
    private:
    int pri;
public:
Example(int pub,int prot,int priv){
    pu=pub;
    pr=prot;
    pri=priv;
}
void print(){
    cout<<pu<<endl;
    cout<<pr<<endl;
    cout<<pri<<endl;
}
};
int main(){
    Example ob(10,2,34);
    cout<<ob.pu<<endl;
    ob.print();
}