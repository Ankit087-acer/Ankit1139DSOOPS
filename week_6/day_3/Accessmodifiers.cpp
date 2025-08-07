#include <iostream>
using namespace std;
class Base{
    public:
    int pub=1;
    protected:
    int prot=2;
    private:
    int priv=3;
    public:
    Base(int prot,int priv,int pub){
        this->pub=pub;
        this->prot=prot;
        this->priv=priv;
    }
    int setelement(int prot,int priv,int pub){
        this->pub=pub;
        this->prot=prot;
        this->priv=priv;
    }
    int Getelement(int prot,int priv,int pub){
        cout<<"Public :"<<pub<<endl;
        cout<<"Protected : "<<prot<<endl;
        cout<<"Private: "<<priv<<endl;  
    }
};
int main(){
    Base b(2,3,1);
    b.setelement(2,3,1);
    b.Getelement(2,3,1);
}


