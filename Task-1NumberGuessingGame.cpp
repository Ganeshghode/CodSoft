#include<iostream.h>
#include<time.h>
using namespace std;
int main()
{
    cout<<"======= Number Guessing Game ======="<<endl;
    srand(time(0));
    int a,p,n;
    cout<<"Enter 1 for easy mode,Enter 2 for normal mode,Enter 3 for hard mode"<<endl;
    cin>>p;
    while (p==1 || p==2 || p==3)
    {
        if(p==1)
        {   
            a=rand()%10+1;
            cout<<"You are playing easy mode, so its number range is 1 to 10"<<endl;
        }
        else if (p==2)
        {
            a=rand()%100+1;
            cout<<"You are playing normal mode, so its number range is 1 to 100"<<endl;
        }
        else
        {
            a=rand()%1000+1;
            cout<<"You are playing hard mode, so its number range is 1 to 1000"<<endl;   
        }
        cout<<"Choose a number"<<endl;
        cin>>n;
        while (n!=a)
        {
            if (n<a)
            {
                cout<<"Your guess is low"<<endl;
            }
            else
            {
                cout<<"Your guess is high"<<endl;
            }
            cout<<"Choose again "<<endl;
            cin>>n;
        }
        cout<<"Your guess is correct number is "<<a<<endl;


        cout<<"Enter 1 for easy mode,Enter 2 for normal mode,Enter 3 for hard mode"
        cin>>p;    
}
return 0;
}