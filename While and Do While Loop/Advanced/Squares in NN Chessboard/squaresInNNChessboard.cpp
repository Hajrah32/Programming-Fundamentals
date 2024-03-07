#include<iostream>
using namespace std;
int main(){
    int num;
    int total=0;
    cout<<"Enter number: ";
    cin>>num;
    int i=1;
    while(i<=num){
        total+=i*i;
        i++;
    }
    cout<<"Total Squares in "<<num<<"*"<<num<<" : "<<total;
   return 0;
}
