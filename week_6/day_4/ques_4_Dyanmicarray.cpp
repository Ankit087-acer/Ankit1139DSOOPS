#include <iostream>
using namespace std;
class DynamicArray{
    int size,*p;
    public:
    DynamicArray(int size,int *arr){
        this->size=size;
        p=new int[size];
        for(int i=0;i<size;i++){
            p[i]=arr[i];
        }
    }
    int sets(int size,int *arr){
         delete[] p;
         this->size=size;
         p=new int[size];
         for(int i=0;i<size;i++){
            p[i]=arr[i];
        }
    }
    int gets(){
        for(int i=0;i<size;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    ~DynamicArray(){
        delete[] p;
    }
};
int main(){
    int size,arr1[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    DynamicArray d(5,arr1);
    
    d.gets();
}