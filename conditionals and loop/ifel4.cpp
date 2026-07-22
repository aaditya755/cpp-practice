//problem:uppercae and lowercase letter detector
#include<iostream>
using namespace std;
int main()
{

        char ch;
         cout<< "enter a character:"<<endl;
           cin>> (ch);
        if(ch >='a'&&ch<='z'){

            cout<<"letter is lowercase "<<endl;

        }
        else {
            cout<< "letter is uppercase"<<endl;

        }
         

            return 0;


}