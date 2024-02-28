#include<iostream>
using namespace std;
int main(){
    
    
    char alph='A'-1;
    do{
        alph++;
        if(alph=='A' || alph=='E' || alph=='I' || alph=='O' || alph=='U'){
            continue;
        }
        cout<<alph<<" ";
        
    }while(alph<'Z');
   return 0;
}
