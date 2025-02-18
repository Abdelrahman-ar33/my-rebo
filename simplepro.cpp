#include <iostream>
#include <vector>
using namespace std;
class system_hospital{
    public:
    virtual  void set_data_id(int Set)=0;
  virtual  void set_data_name(string n)=0;
};
class Data_empolyee :public system_hospital{
    private:
vector <string> name;
vector <int> id;
public :
void set_data_id(int Set){
    id.push_back(Set);
}
void set_data_name(string n){
    name.push_back(n);
}
void print_id_empolyee (){
    for (int &i:id){
        cout<<i<<endl;
    }
}
// 
void print_name_empolyee (){
    for (string &i:name){
        cout<<i<<endl;
    }
}
};

 char Q_A;
    int id;
    string name;
int main() {
int cho;
Data_empolyee op;
do {
cout<<"******************** welcome to system ************"<<'\n';
cout<<"1. if you want add id ? "<<endl;
cout<<"2. if you want add name ? "<<endl;
cout<<"3. if you want display  name ? "<<endl;
cout<<"4. if you want display  id ? "<<endl;
cin>>cho;
cout<<"****************************************************"<<'\n';
switch (cho)
{
case 1:
int number_id;
cout<<"what\'s the want to id number ? "<<endl;
cin>>number_id;
for (int i=1;i<=number_id;i++){
    cin>>id;
    op.set_data_id(id);
}
break;
case 2:
int number_name;
cout<<"what\'s the want to id number ? "<<endl;
cin>>number_name;
for (int i=1;i<=number_id;i++){
    cin>>name;
    op.set_data_name(name);
}
break;
case 3:
op.print_name_empolyee();
break;
case 4 :
op.print_id_empolyee();
break;
default :
cout<<"error // you choose (1,2,3,4 )& try again "<<endl;
break;
}
cout<<" you want continue  ? "<<"\n";
cin>>Q_A;
}while (Q_A=='y');
}