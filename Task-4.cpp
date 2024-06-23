/*Build a simple console-based to-do list manager that allows users to add,
view, and delete tasks*/
#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr4[20],arr5[20];
int total=0,arr3[20];
void entertask()
{
    int choice=0;
    cout<<"How many task do you want to enter :"<<endl;
    cin>>choice;
    if(total==0)
    {
        total=total+choice;
        for(int i=0;i<choice;i++)
        {
            cout<<endl<<"Enter the name of task : "<<i+1<<endl;
            cin>>arr1[i];
            cout<<"Enter the description of task :"<<endl;
            cin>>arr2[i];
            cout<<"Enter the deadline of task :"<<endl;
            cin>>arr3[i];
            cout<<"Enter the priority of task :"<<endl;
            cin>>arr4[i];
            cout<<"Enter the status of task :"<<endl;
            cin>>arr5[i];
        }
    }
    else
    {
        for(int i=total;i<total+choice;i++)
        {   
            cout<<"Enter the name of task :"<<endl;
            cin>>arr1[i];
            cout<<"Enter the description of task  :"<<endl;
            cin>>arr2[i];
            cout<<"Enter the deadline of task :"<<endl;
            cin>>arr3[i];
            cout<<"Enter the priority of task :"<<endl;
            cin>>arr4[i];
            cout<<"Enter the status of task :"<<endl;
            cin>>arr5[i]; 
        }
            total=choice+total;
    }
}
void showtask()
{
    if(total==0)
    {
        cout<<"No Data entered"<<endl;
    }
    else
    {
        for(int i=0;i<total;i++)
        {
            cout<<endl<<"Name of task : "<<arr1[i]<<endl;
            cout<<"Description of task :"<<arr2[i]<<endl;
            cout<<"Deadline of task :"<<arr3[i]<<endl;
            cout<<"priority of task :"<<arr4[i]<<endl;
            cout<<"status of task :"<<arr5[i]<<endl;
        }
    }
}
void searchtask()
{
    if(total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        string name;
        cout<<"Enter the name of task :"<<endl;
        cin>>name;
        for(int i=0;i<total;i++)
        {
            if(name==arr1[i])
            {
                cout<<endl<<"Name of task : "<<arr1[i]<<endl;
                cout<<"Description of task :"<<arr2[i]<<endl;
                cout<<"Deadline of task :"<<arr3[i]<<endl;
                cout<<"priority of task :"<<arr4[i]<<endl;
                cout<<"status of task :"<<arr5[i]<<endl;
            }
        }
    }
}
void updatetask()
{
     if(total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    { 
        string name;
        cout<<"Enter the name of which task do you want to update :"<<endl;
        cin>>name;
        for(int i=0;i<total;i++)
        {
            if(name==arr1[i])
            {
                cout<<endl<<"Previous task :"<<endl<<endl;
                cout<<"Name of task : "<<arr1[i]<<endl;
                cout<<"Description of task : "<<arr2[i]<<endl;
                cout<<"Deadline of task : "<<arr3[i]<<endl;
                cout<<"Priority of task : "<<arr4[i]<<endl;
                cout<<"Status of task : "<<arr5[i]<<endl;
                cout<<endl<<"Enter new task :"<<endl;
                cout<<"Enter the name of new task :"<<endl;
                cin>>arr1[i];
                cout<<"Enter the description of task :"<<endl;
                cin>>arr2[i];
                cout<<"Enter the deadline of task :"<<endl;
                cin>>arr3[i];
                cout<<"Enter the priority of task :"<<endl;
                cin>>arr4[i];
                cout<<"Enter the status of task :"<<endl;
                cin>>arr5[i];
            }
        }
    }
}
void deletetask()
{
     if(total==0)
    {
        cout<<"No data entered"<<endl;
    }
    else
    {
        int a;
        cout<<"Press 1 to delete task :"<<endl;
        cout<<"Press 2 to delete specific task :"<<endl;
        cin>>a;
        if(a==1)
        {
            total=0;
            cout<<"All record is deleted..!!"<<endl;
        }
        if(a==2)
        {
            string name;
            cout<<"Enter name of task which you want to delete"<<endl;
            cin>>name;
            for(int i=0;i<total;i++)
            {
                if(name==arr1[i])
                {
                    for( int j=i;j<total;j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }
                    total--;
                    cout<<"Your required task is deleted..!!"<<endl;
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
    int value;
    while(true)
    {
        cout<<endl;
        cout<<"Press 1 to enter task  :"<<endl;
        cout<<"Press 2 to show task   :"<<endl;
        cout<<"Press 3 to search task :"<<endl;
        cout<<"Press 4 to update task :"<<endl;
        cout<<"Press 5 to delete task :"<<endl;
        cout<<"Press 6 to exit"<<endl<<endl;
        cin>>value;
        switch (value)
        {
            case 1:
                entertask();
                break;
            case 2:
                showtask();
                break;
            case 3:
                searchtask();
                break;
            case 4:
                updatetask();
                break;
            case 5:
                deletetask();
                break;
            case 6:
                exit(0);
                break;
            default:
            cout<<"Invalid input"<<endl;
        }
   }
   return 0;
}