#include <iostream>
using namespace std;
class Vault{
    private:
    int code;
    public:
    Vault(int c):code(c){}
    int showsecret()const{
        
        return code;
    }
};
int main(){
    Vault c(1234);
    cout<<c.showsecret()<<endl;
    return 0;   
}