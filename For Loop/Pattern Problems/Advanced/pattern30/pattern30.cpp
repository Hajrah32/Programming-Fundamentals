#include<iostream>
using namespace std;
int main(){
   int row=5, col=5;
   for(int i=1; i<=row; i++){
        for(int j=col; j>i; j--){
            cout<<"  ";
        }
        for(int k=1; k<=col; k++){
            cout<<"* ";
        }
        cout<<endl;
   }
   return 0;
}
