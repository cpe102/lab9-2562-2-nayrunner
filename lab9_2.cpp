#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string textline;
    bool havetext;
    
    ofstream dest;
    dest.open("C:\\Users\\Admin\\Desktop\\c##\\cheerbook_copy.txt");
   
    ifstream source;
    source.open ("C:\\Users\\Admin\\Desktop\\c##\\git\\lab9-2562-2-nayrunner\\cheerbook.txt");
    havetext = getline(source, textline);
    dest << "-------------------- SOTUS ---------------------\n";
    while(havetext){
        dest<<textline<<"\n";
        havetext = getline(source, textline);
    }
    dest << "-------------------- SOTUS ---------------------";
}
