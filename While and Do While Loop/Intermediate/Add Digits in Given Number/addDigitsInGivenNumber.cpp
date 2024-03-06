#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    while(num>9){
        int rem,sum=0;
        
        while(num!=0){
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        num=sum;
    }
    cout<<"Sum of digits of "<<temp<<" : "<<num;
   return 0;
}
