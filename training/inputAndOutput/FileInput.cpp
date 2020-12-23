#include <iostream>
#include <fstream>
using namespace std;

void readline(string file,string outfile){
    ifstream in;
    ofstream out;
    string str;
    in.open(file);
    out.open(outfile);
    while(getline(in,str)){
        out  << str << endl;
        cout << str << endl;
    }
    in.close();
}

void readfile(string infile,string outfile){
    ifstream in;
    ofstream out;
    in.open(infile);
    out.open(outfile);
    string str;
    in >> str;
    out << str;
    cout<<str<<endl;

}

int main(){
    readline("file-in.txt","file-out1.txt");
    cout << endl<< endl<< endl;
    readfile("file-in.txt","file-out2.txt");

    return 0;
}



