#include <iostream>
using namespace std;
int main(){
    //¦³­­¿é¤J
    int max = 5;
    int input[max];
    for(int i=0;i<max;i++){
        cin >> input[i];
    }
    for(int i=0;i<max;i++){
        cout << input[i] << endl;
    }
    return 0;
}
