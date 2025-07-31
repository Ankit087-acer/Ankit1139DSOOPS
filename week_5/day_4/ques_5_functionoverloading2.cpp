// 5. Function Overloading with Different Parameter Types Design a class Calculator with
// overloaded process functions that can handle:
// ● Two integers (returns sum)
// ● Two pointers to integers (returns sum of values pointed to)
// ● An integer by reference (doubles the value and returns it)
// ● An integer by value and an integer by pointer (returns their product) Demonstrate all
// variations and show how the compiler resolves the correct 

#include <iostream>
using namespace std;
class Calculator{
public:
int a,b;
int *p1=&a,*p2=&b;
int sum(int a,int b){
    return a+b;
}
int sum2(int *p1,int *p2){
   return (*p1+*p2);
}
int reference(int *p1){
    int d=(*p1 *2);
    return d;
}
int product(int a,int *p2){
    int p=(*p2 * a);
    return p;
}
};
int main(){
    Calculator c;
    cin>>c.a>>c.b;
    cout<<"The sum of the numbers by the value is "<<c.sum(c.a,c.b)<<endl;
    cout<<"The sum of the numbers by the pointers is "<<c.sum2(&c.a,&c.b)<<endl;
    cout<<"The double of the number by the reference is "<<c.reference(&c.a)<<endl;
    cout<<"The product of the numbers is "<<c.product(c.a,&c.b)
    return 0;
 }