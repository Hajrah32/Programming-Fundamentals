#include<iostream>
using namespace std;
int main(){
    int row=5, col=5;
    for(int i=0; i<row; i++){
        for(int j=1; j<=col; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}