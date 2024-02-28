#include<iostream>
using namespace std;
int main(){
    
    int num, base, newBase;
    
    cout<<"Enter a Binary Number: ";
    cin>>num;
    cout<<"Enter Base of "<<num<<" : ";
    cin>>base;
    cout<<"Enter New Base Number: ";
    cin>>newBase;
    int ans=0, rem;
    int mul=1;
    while(num>0){
        rem=num%newBase;
        ans+=(rem*mul);
        num/=newBase;
        mul*=base;
    }
    cout<<ans;
   return 0;
}
/*rem=3 ans=3 num=1 mul=2
rem=1 ans=*/
