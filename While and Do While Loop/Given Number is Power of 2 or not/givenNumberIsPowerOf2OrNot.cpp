#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check if it is power of 2 or not: ";
    cin>>num;
     while(num!=1 && num>0){
       
        if(num%2==0){
        num/=2;
        }
        else{
            break;
        }
    } 
    if(num!=1){
        cout<<"number is not power of 2";
    }
    else{
        cout<<"number is power of 2";
    }
   return 0;
}
/************************************************************
*************************************************************
*************************************************************

Working fine but giving int overflow error for larger values

*************************************************************
*************************************************************
************************************************************/


/*#include<iostream>
using namespace std;
int main(){
    int num,pow=1;
    cout<<"Enter a number to check if it is power of 2 or not: ";
    cin>>num;
    bool flag=false;
    
        while(pow<=num){
        if(num==pow){
            flag=true;
            break;
        }
        else{
            pow*=2;
        }
    }
    if(flag==true){
        cout<<num<<" is power of 2";
    }
    else{
        cout<<num<<" is not power of 2";
    }
    
    
   return 0;
}
*/