#include<iostream>
using namespace std;
int main(){
    int row=5, col=5;
    for(int i=row; i>0; i--){   
        for(int j=0; j<col; j++){
            if(j<i)
            cout<<"* ";
            else
            cout<<"  ";    
        }
        for(int k=col; k>0; k--){
            if(k>i)
            cout<<"  ";
            else
            cout<<"* ";    
        }
        
        
        cout<<endl;
    }
    for(int l=0; l<row; l++){   
        for(int m=0; m<col; m++){
            if(m<=l)
            cout<<"* ";
            else
            cout<<"  ";    
        }
        for(int n=col; n>0; n--){
            if(n>l+1)
            cout<<"  ";
            else
            cout<<"* ";    
        }
        
        
        cout<<endl;
    }
    return 0;
}
