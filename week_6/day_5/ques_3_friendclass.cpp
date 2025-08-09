#include <iostream>
using namespace std;
class Beta;
class Alpha{
private:
int code;
public:
Alpha(int c):code(c){}
friend class Beta;
};
class Beta{
    public:
    void showsecret(const Alpha &c){
        std::cout<<"Code= "<<c.code<<std::endl;
    }
};
int main(){
    Beta b;
    b.showsecret(1234);
    
}