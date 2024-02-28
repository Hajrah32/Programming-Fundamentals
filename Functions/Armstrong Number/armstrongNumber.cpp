#include<iostream>
#include<math.h>
using namespace std;
int countDigits(int n);
int pow(int n, int c);
bool armstrong(int num,int count);
int main(){
    int num;
    cout<<"Enter a number to check if it is Armstrong number or not: ";
    cin>>num;
    int count=countDigits(num);
    if(armstrong(num,count)){
        cout<<num<<" is an Armstrong Number";
    }
    else{
        cout<<num<<" is not an Armstrong Number";
    }
    return 0;
}
int countDigits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
bool armstrong(int num,int count){
    int ans=0;
    int n=num;
    while(num>0){
        ans+=pow((num%10),count);
        num/=10;
    }
    if(n==ans){
        return 1;
    }
    else{
        return 0;
    }
}
int pow(int n, int c){
    int p=1;
    for(int i=0; i<c; i++){
        p*=n;
    }
    return p;
}