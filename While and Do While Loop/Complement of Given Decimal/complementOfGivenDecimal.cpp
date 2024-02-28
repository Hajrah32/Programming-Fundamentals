#include<iostream>
using namespace std;
int main(){
    int num,ans=0,rem,mul=1;
    cout<<"Enter a number to get Complement: ";
    cin>>num;
    while(num>0){
        rem=num%2;
        rem=rem^1;
        num/=2;
        ans+=rem*mul;
        mul*=2;
    }
     cout<<"Complement: "<<ans;
    return 0;
}
