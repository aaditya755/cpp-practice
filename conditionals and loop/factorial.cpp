//problem :factorial of a number

#include<iostream>
using namespace std;
int main()
{
        int fac=1;//initialized because fac contains garbage value
        int n=0;
        cout<< "enter number of which factorial is to be found"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++)
        {       
                fac=fac*i;

        }
        cout<<"factorial of enterd number is"<<fac<<endl; 
return 0;
}

