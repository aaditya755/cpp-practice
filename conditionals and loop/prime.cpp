//problem :chexk entered number is prime or not

#include<iostream>
using namespace std;
int main()
{

    cout<< "enter number : "<<endl;
    int n;
    cin>>n;
    bool isprime =true;
    for(int i=2;i<=n-1;i++){   // running of loop is from i=2 becuse 1 is every ones factor and last number 
                                //means the number itself is always facotr so upto n-1 for finding 2 is a prime or not initialise loop from i=1
                                
                             
            
            if (isprime==true){
                    cout<<"prime number"<<"\n";
                    isprime=false;
                    break;


            }   else{cout<<"not prime number";}
            }

return 0;
    }




