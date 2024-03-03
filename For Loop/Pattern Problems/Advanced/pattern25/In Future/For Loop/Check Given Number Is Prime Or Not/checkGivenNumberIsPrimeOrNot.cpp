#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    bool flag=false;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num<2){
        flag=true;
    }
    else{
        for(int i=2; i<num; i++){
            if(num%i==0){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<num<<" is not a prime number";
    }
    else{
        cout<<num<<" is a prime number";
    }
    return 0;
}
