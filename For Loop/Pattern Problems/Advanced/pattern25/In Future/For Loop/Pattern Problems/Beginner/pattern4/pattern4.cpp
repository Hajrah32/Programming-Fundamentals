#include<iostream>
using namespace std;
int main(){
    int row=5, col=5;
    for(int i=0; i<row; i++){
        for(int j=col; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}