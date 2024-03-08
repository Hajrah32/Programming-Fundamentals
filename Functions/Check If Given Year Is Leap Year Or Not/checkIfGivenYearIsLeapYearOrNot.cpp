#include<iostream>
using namespace std;
bool checkYear(int year);
int main(){
    int year;
    cout<<"Enter an Year: ";
    cin>>year;
    int check=checkYear(year);
    if(check==1){
        cout<<year<<" is a leap year!";
    }
    else{
        cout<<year<<" is not a leap year!";
    }
   return 0;
}
bool checkYear(int year){
    if(year%400==0){
        return 1;
    }
    else if((year%4==0) && (year%100!=0)){
        return 1;
    }
    else{
        return 0;
    }
}