#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fails("dati.txt");
    cout<<"Ievadi savu vārdu!"<<endl;
    string name;
    cin >> name;

    cout<<"Ievadi savu uzvārdu"<<endl;
    string lastname;
    cin >> lastname;

    cout<<"Ievadi savu vecumu"<<endl;
    int age;
    cin >> age;

    fails << "Vārds: "<<name<<endl;
    fails << "Uzvārds: "<<lastname<<endl;
    fails << "Vecums: "<<age<<endl;

    fails.close();

      return 0;
}