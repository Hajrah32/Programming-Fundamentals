#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"Enter a Decimal Number: ";
    cin>>num;
    int ans=0, rem;
    int mul=1;
    while(num>0){
        rem=num%2;
        ans+=(rem*mul);
        num/=2;
        mul*=10;
    }
    cout<<ans;
   return 0;
}
