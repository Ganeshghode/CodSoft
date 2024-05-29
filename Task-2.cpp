/*Develop a calculator program that performs basic arithmetic
operation such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform*/

#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op;
    cout<<"Enter First number and Second number"<<endl;
    cin>>num1>>num2;
    cout<<"Enter"<<endl<<" + for Addition"<<endl<<" - for Subtraction"<<endl<<" * for Multiplication"<<endl<<" / for Division"<<endl;
    cin>>op;
    switch (op)
    {
        case '+':
            cout<<"Addition of given numbers is : "<<num1+num2<<endl;
        break;
        case '-':
            cout<<"Subtraction of given numbers is : "<<num1-num2<<endl;
        break;
        case '*':
            cout<<"Multiplication of given numbers is : "<<num1*num2<<endl;
        break;
        case '/':
            cout<<"Division of given numbers is : "<<num1/num2<<endl;
        break;
    }
    return 0;
}
