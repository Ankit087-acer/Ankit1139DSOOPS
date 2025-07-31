#include <iostream>
using namespace std;
class GradeCalculator{
 public:
 int sci,math,ssc,hindi,eng;
 void totalMarks(int sci,int math,int ssc,int hindi,int eng){
    int total=sci+math+ssc+hindi+eng;
    cout<<"Total marks:"<<" "<<total<<endl;
 }
 void Average(int sci,int math,int ssc,int hindi,int eng){
    int total=sci+math+ssc+hindi+eng;
    int average=total/5;
    cout<<"Average:"<<" "<<average<<endl;
 }
 void gradeaverage(int sci,int math,int ssc,int hindi,int eng){
    int total=sci+math+ssc+hindi+eng;
    int average=total/5;
    if(average>=100 && average<=90){
        cout<<"Grade: "<<"A"<<endl;
    }
    else if(average>=80 && average<=89){
        cout<<"Grade: "<<"B"<<endl;
    }
    else if(average>=70 && average<=79){
        cout<<"Grade: "<<"C"<<endl;
    }
    else if(average>=60 && average<=69){
        cout<<"Grade: "<<"D"<<endl;
    }
    else{
        cout<<"Grade: "<<"F"<<endl;
    }
 }
};
int main(){
    GradeCalculator g;
    cin>>g.sci>>g.math>>g.ssc>>g.hindi>>g.eng;
    g.totalMarks(g.sci,g.math,g.ssc,g.hindi,g.eng);
    g.Average(g.sci,g.math,g.ssc,g.hindi,g.eng);
    g.gradeaverage(g.sci,g.math,g.ssc,g.hindi,g.eng);
    return 0;
}