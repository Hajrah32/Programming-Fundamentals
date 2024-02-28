#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;   
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
