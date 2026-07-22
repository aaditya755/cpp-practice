// multiplication table of a number 
#include<iostream>
using namespace std;
int main()
{
            int n;
            int l=0;
            cout<<"enter number "<<endl;
            cin>>n;
            cout<<"multiplication table of "<<n<<" is : "<<endl;
            for(int i=1;i<=10;i++){
                l=n*i;
                cout<<l<<endl;
            }
            return 0;











}