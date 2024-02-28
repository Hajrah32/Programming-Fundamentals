#include<iostream>
using namespace std;
int main(){
    int num,ans=0,rem;
    cout<<"Enter a number to reverse: ";
    cin>>num;
    bool flag=false;
    while(num!=0){
        rem=num%10;
        num/=10;
        if(ans>INT8_MAX/10){
            cout<<"Number Overflow";
            flag=true;
            break;
        }
        else if(ans<INT8_MIN/10){
            cout<<"Number Underflow";
            flag=true;
            break;
        }
        else{
        ans=(ans*10)+rem;
        }
    }
    if(flag==false)
        cout<<"Reverse: "<<ans;
   return 0;
}
