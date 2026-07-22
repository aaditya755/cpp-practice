
//problem : print number from 1 to N with having break statement when number is 35

#include<iostream>
using namespace std;
int main()
{

        int n;
        cout<< "enter your number:"<<endl;
        int sum = 0;
        cin>>n;
        for(int i=1;i<=n;i++){
            sum+=i;
                if (i==35){
                        break;
                }
        }
                cout<< "sum of numbers from 1 to " << "35" << " is: " << sum << endl;

            return 0;


}