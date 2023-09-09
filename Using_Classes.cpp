#include<iostream>
#include<string>
using namespace std;

class Print
{
   public:
    int x;
};

int main()
{
    Print obj;

    cout<<"Enter a Number : ";
    cin>>obj.x;
    cout<<"You have entered "<<obj.x<<endl;
    return 0;

}
