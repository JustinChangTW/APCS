#include <iostream>
using namespace std;
int main (){
    int max2=10000;
    int input2[max2];

    int limit=0;

    cin >> limit;

    for(int i=0;i<max2&&i<limit;i++){
        cin>>input2[i];

    }
    for(int i=0;i<max2&&input2[i]!=NULL;i++){
        cout << input2[i] << endl;
    }
    return 0;
}
