#include <iostream>
using namespace std;
int calculate(int a,int b){
    return a+b;
}
float calculate(float a,float b){
    float product=a*b;
    return product;
}
int calculate(int a,int b,int c ){
    float sum=a+b+c;
    float avg=(float)sum/3.0;
    return avg;
}
int main(){
   int a=20,b=30,c=50;
   cout<<"The sum of numbers is "<<calculate(a,b)<<endl;
   cout<<"The product of numbers is "<<calculate((float)a,(float)b)<<endl;
   cout<<"The avg of numbers is "<<calculate(a,b,c);
   return 0;
}