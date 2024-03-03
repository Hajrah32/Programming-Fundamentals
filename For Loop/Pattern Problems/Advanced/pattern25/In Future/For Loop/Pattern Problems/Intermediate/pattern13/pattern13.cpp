#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            char alphabet='a'+i;
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }
    return 0;
}
