#include<iostream>
using namespace std;
int main(){
    int row=5, col=5;
    for(int i=0; i<row; i++){
        
        for(int j=0; j<5-i; j++){
            cout<<"  ";    
        }
        for(int k=0; k<=i; k++){
            cout<<k+1<<" ";
            
        }
        cout<<endl;
    }
}
