#include <iostream>
using namespace std;
class HostelRoom{
    private:
    string roomNumber;
    string studentName;
    string rollNumber;
    int messBalance;
    bool isOccupied;
    
public:
 HostelRoom(string room){
    roomNumber=room;
    messBalance=0;
    isOccupied=false;
}
void allotRoom(string name,string roll){
    if(!isOccupied){
        studentName=name;
        rollNumber=roll;
        isOccupied=true;
        cout<<"Room"<<" "<<roomNumber<<" "<<"alloted to"<<" "<<name<<endl;
    }
    else{
        cout<<"Room already occupied"<<endl;
        }
}
void addMessbalance(int amount){
    messBalance+=amount;
    cout<<"Mess balance updated: Rs"<<" "<<messBalance<<endl;
}
void showRoomDetails(){
    cout<<"\n===Room Details==="<<endl;
    cout<<"Room: "<<roomNumber<<endl;
    if(!isOccupied){
        cout<<"Student: "<<studentName<<"("<<rollNumber<<")"<<endl;
        cout<<"Mess Balance: Rs"<<messBalance<<endl;
    }
    else{
        cout<<"Status: Vacant"<<endl;
    }
}
};
int main(){
    HostelRoom roomA101("A-101");
    roomA101.showRoomDetails();
    roomA101.allotRoom("Rahul Sharma","BTECH2024001");
    roomA101.addMessbalance(5000);
    roomA101.showRoomDetails();
    return 0;
}