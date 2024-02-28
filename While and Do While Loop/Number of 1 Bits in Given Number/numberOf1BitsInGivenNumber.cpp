#include<iostream>
using namespace std;
int main(){
    int num;
    int rem,count=0,ans=0,mul=1;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    while(num>0){
        rem=num%2;
        num/=2;
        ans+=rem*mul;
        mul*=10;
        if(rem==1){
            count++;
        }
    }
    cout<<"Binary form of "<<temp<<": "<<ans<<" and Total Number of Set Bits: "<<count;
   return 0;
}
