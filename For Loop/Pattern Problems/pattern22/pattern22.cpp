#include<iostream>
using namespace std;
int main(){
    int row=6;
    for(int i=0; i<row; i++){
        
        for(int j=0; j<5-i; j++){
            cout<<"  ";    
        }
        
        for(int k=1; k<=(2*i)-1; k++){
           
            cout<<"* ";
            
        }
        cout<<endl;
    }
}
