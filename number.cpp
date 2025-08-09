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

int prime(int num){
    // prime number
    int fc=0;
    // cout<<"enter number";
    // cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            fc++;
        }
    }
    if(fc==1){
        // cout<<num<<"is prime number";
        return 1;
    }else{
        return 0;
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
    int num,nDigit=0,sum=0,cp,rem;
    cout<<"enter the number";
    cin>>num;
    cp=num;
    while(cp!=0){       
        nDigit++;
        cp/=10;        
    }
    cp=num;
    while(cp!=0){
        rem=cp%10;
        sum+=pow(rem,nDigit);
        cp/=10;
    }
    if(sum==num) cout<<num<<"is armstrong number";

}

void armstrong_range(){
    int num,nDigit=0,sum=0,cp,rem,range;
    cout<<"enter the number";
    cin>>range;
    for(int i=1;i<=range;i++){
        num=i;
        sum=0;
        cp=num;
        nDigit=0;
    while(cp!=0){       
        nDigit++;
        cp/=10;        
    }
    cp=num;
    while(cp!=0){
        rem=cp%10;
        sum+=pow(rem,nDigit);
        cp/=10;
    }
    if(sum==num) cout<<num<<" ";
    }
    

}

void fibonacci(){
    int n=0,x=1,y,term;
    cout<<"enter the term";
    cin>>term;
    cout<<n<<" "<<x<<" ";
    for(int i =0;i<=term-2;i++){
        y=n+x;
        n=x,x=y;
        // cout<<y<<" ";
    }
    // for nth term 
    cout<<y<<" ";

}

void power(){
    int base,expo;
    float res=1;
    cout<<"enter base and expo";
    cin>>base>>expo;
    if(expo>0){
        while(expo!=0){
            res*=base;
            expo--;
        }
    }
    if(expo<0){
        while(expo<0){
            res/=base;
            expo++;
        }
    }
    cout<<"result"<<res;
}

void factor(){
    int num;
    cout<<"enter a number";
    cin>>num;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            if(i==num/i){
                // if(prime(i)){
                    cout<<i<<"";
                // }
            }else{
                //  if(prime(i)){
                cout<<i <<" ";
                
            // }
            // if(prime(num/i)){
                cout<<num/i<<" ";
            // }
        }
    }
}}

int factorial_nums(int n){
    int res=1;
 for(int i=1;i<=n;i++){
    res*=i;
 }
 return res;
}

void strong_num(){
    int num,sum=0,rem,cp;
    cout<<"enter the number";
    cin>>num;
    cp=num;
    while(cp!=0){
        rem=cp%10;
        sum+=factorial_nums(rem);
        cp/=10;
    }
    if(num==sum){
        cout<<num<<"is a strong 💪 number";
    }
}

void perfect_number(){
    int num,sum=0;
    cout<<"enter a number";
    cin>>num;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            if(i==num/i){
                // if(prime(i)){
                    sum+=i;
                    cout<<i<<endl;
                // }
            }else{
                //  if(prime(i)){
                sum+=i;
                    cout<<i<<endl;
                // 
            // }
            if(num/i!=num){
                sum+=num/i;
                cout<<num/i<<endl;
            }
        }
        if(i==1){
            sum+=i;
        }
        
    }}
    cout<<"sum"<<sum<<"num"<<num;
    if(num==sum){
        cout<<"perfect number"<<num;
    }
}

int main(){
    perfect_number();
    return 0;
}