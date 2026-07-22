
//problem : print sum of even number from 1 to N
#include<iostream>
using namespace std;
int main()
        {


                int N;
                int sum =0;
                cout<< "enter your number:"<<endl;
                cin>>N;
                int i;
                for (i=0;i<=N;i++){
                    if (i%2==0){
                        sum+=i;
                    }



                }





                cout<<"sum of even numbers from 1 to N is:"<<(sum)<<endl;
                    return 0;

            }


