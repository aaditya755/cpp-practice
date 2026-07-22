// //problem:evev odd number and ternary statements



// #include<iostream>
// using namespace std;
// int main()
// {

//        int n;
//        cout<<"enter a number "<< endl;
//        cin >> (n);
//        if (n%2==0){

//                     cout<<"entered number is even"<<endl;

//        }
//        else{

//                     cout <<"entered number is odd"<<endl;
//        }
//             return 0;


// }





#include<iostream>
using namespace std;
int main()
{

       int n;
       cout<<"enter a number "<< endl;
       cin >> (n);

       cout<< ((n%2==0)? "Number is even":"number is odd")<< endl;
       return 0;

}