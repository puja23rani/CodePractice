#include<iostream>
#include <cmath>
using namespace std;

void leap(){
// leap year
 int year;
    cout<<"enter the year";
    cin>>year;
    if(year%4==0&&year%100!=0){
        cout<<year<<"is leap year";
    }else{
        cout<<year<<"is not leap year";
    }
}

void prime(){
    // prime number
    int num,fc=0;
    cout<<"enter number";
    cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            fc++;
        }
    }
    if(fc==1){
        cout<<num<<"is prime number";
    }else{
        cout<<num<<"is not a prime number";
    }
}

void prime_in_range(){
    // prime number in range
    int range,test=0;
    cout<<"enter range";
    cin>>range;
    for(int i =2;i<=range;i++){
     test=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            test++;           
        }
    }
    if(test==0){
        cout<<i<<" ";
    }
    }
}

void sum_of_digits(){
int num,sum=0,rem;
cout<<"enter number";
cin>>num;//5482
while(num!=0){
rem=num%10;
sum+=rem;
num/=10;
}
cout<<"sum is"<<sum;
}

void reverse(){
    int num,rev=0,rem;
    cout<<"enter the numer";
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"reversed number is"<<rev;
}

void pallindrome(){
    int num,rev=0,cp,rem;
    cout<<"enter your number";
    cin>>num;
    cp=num;
    while(cp!=0){
        rem=cp%10;
        rev=rev*10+rem;
        cp/=10;
    }
    if(rev==num){
        cout<<num<<"is pallindrome";
    }
}

void armstrong(){
    // int num,nDigit=0,sum=0,cp,rem;
    // cout<<"enter the number";
    // cin>>num;
    // cp=num;
    // while(cp!=0){
        
        
    // }

}

int main(){
    pallindrome();
    return 0;
}