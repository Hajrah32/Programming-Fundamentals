#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to get square root: ";
    cin>>num;
    int i=0;
    while((i*i) <= num){
        i++;
    }
    cout<<i-1;
   return 0;
}
