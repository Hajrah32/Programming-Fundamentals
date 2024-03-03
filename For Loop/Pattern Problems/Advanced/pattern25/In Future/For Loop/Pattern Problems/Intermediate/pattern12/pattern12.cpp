#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=1; i<=row; i++){
        for(int j=i; j>0; j--){
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
