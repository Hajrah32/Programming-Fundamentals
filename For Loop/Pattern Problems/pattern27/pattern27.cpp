#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=0; i<row-1; i++){
        
        for(int j=0; j<4-i; j++){
            cout<<"  ";    
        }
        
        for(int k=0; k<=i; k++){          
            cout<<"* ";            
        }
        for(int l=i-1; l>=0; l--){       
            cout<<"* ";           
        }
        cout<<endl;
    }
    for(int i=row; i>=0; i--){
        for(int j=0; j<5-i; j++){
            cout<<"  ";    
        }
        
        for(int k=1; k<=(2*i)-1; k++){
           
            cout<<"* ";
            
        }
        cout<<endl;
    }
}
