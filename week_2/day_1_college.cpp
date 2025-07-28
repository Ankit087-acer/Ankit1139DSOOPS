#include <iostream>
using namespace std;
class CollegeSociety{
    protected:
    string societyName;
    string president;
    int membercount;
    public:
    CollegeSociety(string name,string pres){
        societyName=name;
        president=pres;
        membercount=1;
    }
    void addmembers(){
        membercount++;
        cout<<"New member joined! Total:"<<membercount<<endl;
    }
    virtual void conductevent(){
        cout<<societyName<<"is conducting an event!"<<endl;
    }

};

class technicalsociety:public CollegeSociety{
    string domain;
    public:
    technicalsociety(string name,string pres,string dom):CollegeSociety(name,pres){
        domain=dom;
    }
    void conductevent() override{
        cout<<societyName<<" "<<"Organizing"<<"  "<<domain<<" "<<"Workshop!"<<endl;
        cout<<"Hackathon announced!"<<endl;
    }
    void codingcompetition(){
        cout<<"Coder battleground competion starting"<<endl;
    }
    
};
class culturalsociety:public CollegeSociety{
    string artform;
    public:
    culturalsociety(string name,string pres,string art):CollegeSociety(name,pres){
        artform=art;
    }
    void conductevent() override{
        cout<<societyName<<" "<<"presenting"<<" "<<artform<<" "<<"night!"<<endl;
        cout<<"Audition opened!"<<endl;
    }
    void annualFest(){
        cout<<"Annual cultural fest preparations started"<<endl;
    }
    
};
int main(){
 technicalsociety tech("codeclub","Ronit","AI/ML");
 culturalsociety cult("Rangmanch","Riya","Drama");
 tech.conductevent();
 tech.codingcompetition();
 cout<<endl;
 cult.conductevent();
 cult.annualFest();
 return 0;
}