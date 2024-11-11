#include<iostream>
using namespace std;

class Student
{
    public:
     int id;
     string name;
     float marks;

};

int main()
{
    Student s[5];
    Student *p=NULL;
    p=s;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter id : ";
        cin>>p->id;
        cout<<"Enter name : ";
        cin>>p->name;
        cout<<"Enter marks : ";
        cin>>p->marks;
        p++;
    }
    p=s;
    
    for(int i =0; i<5; i++)
    {
        cout<<s[i].id<< " ";
        cout<<s[i].name<< " ";
        cout<<s[i].marks<<endl;
    }
    return 0;
}