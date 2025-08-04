#include <iostream>
using namespace std;
class date{
    public:
    int day;
    int month;
    int year;
};
int main(){
    date* d=new date;
    d->day=15;
    d->month=8;
    d->year=1947;
    cout<<d->day<<"-"<< d->month<<"-"<<d->year;
    delete d;
}