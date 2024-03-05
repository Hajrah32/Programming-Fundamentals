#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to get square root: ";
    cin>>num;
    int temp=num;
    int rem,rev=0;
    if(temp<0){
        cout<<num<<" is not a palindrome";
    }
    else{
        while(temp!=0){
            rem=temp%10;
            temp/=10;
            rev=rev*10 + rem;
        }
        if(rev==num){
            cout<<num<<" is a palindrome";
        }
        else{
            cout<<num<<" is not a palindrome";
        }
    }
   return 0;
}
