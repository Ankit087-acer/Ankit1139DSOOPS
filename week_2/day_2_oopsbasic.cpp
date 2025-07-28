#include <iostream>
using namespace std;
class shoes{
    public:
    int size=9;
    string colour="Red";
    string brand="Puma";
    int cost=900;
};
int main(){
    shoes s;
    cout<<s.size<<" "<<s.colour<<" "<<s.brand<<" "<<s.cost;
    return 0;
}