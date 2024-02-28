#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main(){
    int first, second;
    cout<<"Enter First Value: ";
    cin>>first;
    cout<<"Enter Second Value: ";
    cin>>second;
    swap(first,second);
    cout<<"After Swap First Value: "<<first<<" and Second Value: "<<second;
    return 0;
}
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}