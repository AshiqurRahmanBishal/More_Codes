#include<iostream>
using namespace std;
int main()
{
    int number,factorial;
    cout<<"enter anumber:";
    cin>>number;
    factorial=number;
    while(number>1){
        number--;
        factorial=factorial*number;
    }
    cout<<"factorial of the number is:"<<factorial<< endl;
    return 0;
}
