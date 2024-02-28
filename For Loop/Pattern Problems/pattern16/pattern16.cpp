#include<iostream>
using namespace std;
int main(){
    int row=5, col=5;
    for(int i=row; i>0; i--){
        for(int j=col; j>=i; j--){
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
