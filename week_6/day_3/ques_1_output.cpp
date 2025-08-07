#include <iostream>
using namespace std;
class Secretholder{
    private:
    int secret=11;
    public:
    Secretholder(int secret){
        this->secret=secret;
    }
    int sets(){
        this->secret=secret;
    }
    int gets(){
        return secret;
    }
};
int main(){
        Secretholder S(11);
        S.sets();
       cout<<S.gets();
}
