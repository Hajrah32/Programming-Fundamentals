#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=0; i<row; i++){
        
        for(int j=0; j<5-i; j++){
            cout<<"  ";    
        }
        
        for(int k=0; k<=i; k++){          
            cout<<k+1<<" ";            
        }
        for(int l=i-1; l>=0; l--){       
            cout<<l+1<<" ";           
        }
        cout<<endl;
    }
}
