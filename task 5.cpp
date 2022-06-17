#include<iostream>
using namespace std;
int main()
{
    int sum=0,num1,num2;
    cout<<"frist number:";
    cin>>num2;
    for(int i=num1+1;i<num2;i++){
        if(i%2==0){
            sum=sum +i;
        }
    }
    cout<<"sum of even numbers between"<<num1<<"and"<<num2<<"is:"<<sum;
    return 0;
}
