#include <iostream>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};
int main(){
    Date d;
    d.day=15;
    d.month=8;
    d.year=1947;
    cout<<d.day<<"-"<<d.month<<"-"<<d.year;
}
