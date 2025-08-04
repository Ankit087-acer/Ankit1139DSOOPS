#include <iostream>
using namespace std;
struct Book{
int pages;
double price;
};
int main(){
    Book b;
    cin>>b.pages>>b.price;
    cout<<"The number of the pages is "<<b.pages<<"and price of the book is "<<b.price;
    return 0;

}