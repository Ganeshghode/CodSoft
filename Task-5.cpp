/*Develop a system to manage books, borrowers, and transactions 
in a library*/
#include<iostream>
using namespace std;
int choice1,choice2,total=0,i,arr[50],arr3[50],arr5[50],arr6[50],arr7[50],fine,j,a,arr8[50],arr9[50],arr10[50],arr11[50];
string arr1[50],arr2[50],arr4[50];
void store()
{
    if (total==0)
    {
        cout<<"How many books do you want to store :"<<endl;
        cin>>choice2;
        total+=choice2;
        for (i=0; i<choice2; i++)
        {
            cout<<"Enter the number of book : "<<endl;
            cin>>arr[i];
            cout<<"Enter the title of book :"<<endl;
            cin >>arr1[i];
            cout<<"Enter the author of book :"<<endl;
            cin>>arr2[i];
            cout<<"Enter the ISBN of book :"<<endl;
            cin>>arr3[i];
            cout<<endl;
        }
    }
    else
    {
        for(i=total;i<total+choice2;i++)
        {
            cout<<"Enter the data of book : "<<i+1<<endl;
            cout<<"Enter the title of book :"<<endl;
            cin >>arr1[i];
            cout<<"Enter the author of book :"<<endl;
            cin>>arr2[i];
            cout<<"Enter the ISBN of book :"<<endl;
            cin>>arr3[i];
            total=choice2+total;
        }
    }
}
void search()
{
    if (total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {    
        cout<<"Enter number of book which you want to search :"<<endl;
        cin>>choice2;
        for (i=0;i<choice2;i++)
        {
            cout<<"Number  : "<<i+1<<endl;
            cout<<"Title   : "<<arr1[i]<<endl;
            cout<<"Author  : "<<arr2[i]<<endl;
            cout<<"ISBN    : "<<arr3[i]<<endl;
            cout<<"Student : "<<arr4[i]<<endl<<endl;
        }
    }
}
void issue()
{
    if (total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        cout<<"Enter the number of book which you want to issue :"<<endl;
        cin>>choice2;
        for (i=0; i<choice2; i++)
        {
            cout<<"Number : "<<i+1<<endl;
            cout<<"Title  : "<<arr1[i]<<endl;
            cout<<"Author : "<<arr2[i]<<endl;
            cout<<"ISBN   : "<<arr3[i]<<endl;
            cout<<"Enter the name of student :"<<endl;
            cin>>arr4[i];
            cout<<"Enter the issue date :"<<endl;
            cin>>arr5[i]>>arr8[i]>>arr9[i];
            cout<<"Enter the last date of return :"<<endl;
            cin>>arr6[i]>>arr10[i]>>arr11[i];
            cout<<endl;
        }
    }
}
void borrower()
{
    if (total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        cout<<"Enter the number of book for see the data of borrower"<<endl;
        cin>>choice2;
        for (i=0; i<choice2; i++)
        {
            cout<<"Number     : "<<i+1<<endl;
            cout<<"Title      : "<<arr1[i]<<endl;
            cout<<"Author     : "<<arr2[i]<<endl;
            cout<<"ISBN       : "<<arr3[i]<<endl;
            cout<<"Student    : "<<arr4[i]<<endl;
            cout<<"Issue date : "<<arr5[i]<<"/"<<arr8[i]<<"/"<<arr9[i]<<endl;
            cout<<"Last date  : "<<arr6[i]<<"/"<<arr10[i]<<"/"<<arr11[i]<<endl;
            cout<<"Fine       : "<<arr7[i]<<endl<<endl;
        }
    }
}
void update_n_return()
{
    if(total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        cout<<"Enter the number of book which you want to update or return :"<<endl;
        cin>>choice2;
        for (i=0; i<choice2; i++)
        {
            cout<<"Number  : "<<i+1<<endl;
            cout<<"Title   : "<<arr1[i]<<endl;
            cout<<"Author  : "<<arr2[i]<<endl;
            cout<<"ISBN    : "<<arr3[i]<<endl;
            cout<<"student : "<<arr4[i]<<endl;
            cout<<"Issue date : "<<arr5[i]<<"/"<<arr8[i]<<"/"<<arr9[i]<<endl;
            cout<<"Last date  : "<<arr6[i]<<"/"<<arr10[i]<<"/"<<arr11[i]<<endl;
            cout<<"Enter the fine if book is late :"<<endl;
            cin>>arr7[i];
            cout<<endl<<"Enter the new data of book "<<endl;
            cout<<"Enter the number of book :"<<endl;
            cin>>arr[i];
            cout<<"Enter the title of book :"<<endl;
            cin >>arr1[i];
            cout<<"Enter the author of book :"<<endl;
            cin>>arr2[i];
            cout<<"Enter the ISBN of book :"<<endl;
            cin>>arr3[i];
            cout<<endl;
        }
    }
}
void fine_calculation()
{
    if (total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        cout<<"Enter the last number of book for see the data of fine"<<endl;
        cin>>choice2;
        for (i=0; i<choice2; i++)
        {
            cout<<"Student : "<<arr4[i]<<endl;
            cout<<"Fine    : "<<arr7[i]<<endl;
            fine= fine+arr7[i];
        }
        cout<<endl<<"Total fine : "<<fine<<endl<<endl;
    }
}
void delete_record()
{
     if(total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        int a;
        cout<<"Press 1 to delete full record of book"<<endl;
        cout<<"Press 2 to delete specific record of book"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            total=0;
            cout<<"All record is deleted..!!"<<endl;
            break;
            case 2:
            cout<<"Enter the number of book which you want to delete "<<endl;
            cin>>choice2;
            for(int i=0;i<total;i++)
            {
                if(choice2==arr[i])
                {
                    for(j=i;j<total;j++)
                    {
                        arr [i]=arr[j+1];
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                        arr6[j]=arr6[j+1];
                        arr7[j]=arr7[j+1];
                    }
                    total--;
                    cout<<"Your required record is deleted..!!"<<endl;
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                }
            }   
        }
    }
}
int main()
{
    while(true)
    {
        cout<<"Press 1 for store the data of book :"<<endl;
        cout<<"Press 2 for search the data of book :"<<endl;
        cout<<"Press 3 for issue the book to student :"<<endl;
        cout<<"Press 4 for view the borrowers of book :"<<endl;
        cout<<"Press 5 for update and return the data of book :"<<endl;
        cout<<"Press 6 for check the fine calculation :"<<endl;
        cout<<"Press 7 for delete the record the book :"<<endl;
        cout<<"Press 8 for exit :"<<endl<<endl;
        cin>>choice1;
        switch (choice1)
        {
            case 1:
                store();
            break;
            case 2:
                search();
            break;
            case 3:
                issue();
            break;
            case 4:
                borrower();
            break;
            case 5:
                update_n_return();
            break;
            case 6:
                fine_calculation();
            break;
            case 7:
                delete_record();
            break;
            case 8:
                exit(0);
            break;
        }
    }
    cout<<endl;
    return 0;
}
