#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int nGEAR(int id){
    int G;
    G = (id*(pow(10,-7)))-12;
    return G ;
}

int main() {
    string name , m_name ,day ,ans;
    int id;
    cout <<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: " ;
    getline(cin,name) ;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id ;
    cout << "Fahsai: I think you may be GEAR " << nGEAR(id)<<"."<<" I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    cin.ignore();
    getline(cin,m_name);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< m_name <<" with you.\n";
    cout << name << ": ";
    getline(cin,ans) ;
    cout <<"Fahsai: 555+ see you " << day <<". Bye Bye \\(^ ^)/";

    return 0;
}