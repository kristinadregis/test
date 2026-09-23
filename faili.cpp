#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fails("dati.txt");
    fails << "Sveiki!"<<endl;
    fails.close();

      return 0;
}