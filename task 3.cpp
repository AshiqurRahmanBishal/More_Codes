#include<iostrem>
using namespace std;
int main()
{
    ind number,sum=0,remainder;
    cout<<"enter a number:";
    cin>>number;
    while(number>0){
        reminder=number%10;
        sum=sum=sum+remiunder;
        number=number/10;
    }
    cout<<"sum of the digits:"<<sum<<endl;
    return 0;
}
