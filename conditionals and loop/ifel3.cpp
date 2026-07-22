//problem: simple grading system by if - else

#include<iostream>
using namespace std;
int main()
{

        int n;
         cout<< "enter your Marks:"<<endl;
           cin>> (n);
        if(n>=90){

            cout<< "A grade"<<endl;

        }
        else if(n>=80){
            cout<< "B grade"<<endl;

        }
          else if(n>=70){
            cout<< "C grade"<<endl;

        }
        else{

            cout<<"Fail "<<endl;
        }

            return 0;


}