#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"Enter a Binary Number: ";
    cin>>num;
    int ans=0, rem;
    int mul=1;
    while(num>0){
        rem=num%10;
        ans+=(rem*mul);
        num/=10;
        mul*=2;
    }
    cout<<ans;
   return 0;
}
