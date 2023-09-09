#include<iostream>
using namespace std;

class Calculator
{
    public : double c;
    public : void Addition(int x,int y)
    {

         c=x+y;
    }
    public : void Subtraction(int x,int y)
    {

         c=x-y;
    }
    public : void Multiplication(int x,int y)
    {

         c=x*y;
    }
    public : void Division(int x,int y)
    {

         c=x/y;
    }
    public : void Remainder(int x,int y)
    {

         c=x%y;
    }
};
int main()
{
    int option;
    cout<<" 1.) Addition \n 2.) Subtraction \n 3.) Multiplication \n 4.) Division \n";

    cout<<"\nEnter your choice :";
    cin>>option;

    Calculator obj;

    switch (option)
    {

        case 1:

        int a,b;
        cout<<"Enter a number : ";
        cin>>a;

        cout<<"Enter a another number : ";
        cin>>b;

        obj.Addition(a,b);

        cout<<"Sum of given two numbers is "<<obj.c<<endl;
        break;

        case 2:
        int m,n;
        cout<<"Enter a number : ";
        cin>>m;

        cout<<"Enter a another number : ";
        cin>>n;

        obj.Subtraction(m,n);

        cout<<"Difference of given two numbers is "<<obj.c<<endl;
        break;

        case 3:

        int k,l;
        cout<<"Enter a number : ";
        cin>>k;

        cout<<"Enter a another number : ";
        cin>>l;

        obj.Multiplication(k,l);

        cout<<"Product of given two numbers is "<<obj.c<<endl;
        break;

        case 4:

        double p,q;
        cout<<"Enter a number : ";
        cin>>p;

        cout<<"Enter a another number : ";
        cin>>q;

        obj.Division(p,q);

        cout<<"Result of given two numbers is "<<obj.c<<endl;

        obj.Remainder(p,q);
        cout<<"Remainder of given two numbers "<<obj.c<<endl;
        break;

        return 0;
    }
}
