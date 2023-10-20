#include<iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string city;

    public:
    Person()
    {
        cout<<"default constructor call"<<endl;
        name = "Akash";
        age = 25;
        city = "Solapur";
    }
    Person(int age, string name, string city)
    {
        cout<<"Parameterized constructor call"<<endl;
        this->age = age;
        this->name = name;
        this->city = city;
    }
    void accept_data()
    {
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the age : ";
        cin>>age;
        cout<<"Enter the city : ";
        cin>>city;
        cout<<endl;
    }
    void display()
    {
        cout<<"Name is = "<<name<<endl;
        cout<<"Age is = "<<age<<endl;
        cout<<"City = "<<city<<endl;
    }
    void setname(string name)
    {
        cout<<"name is updated"<<endl;
        this->name = name;
    }
    void setage(int age)
    {
        cout<<"Age is updated"<<endl;
        this->age = age;
    }
    void setcity(string city)
    {
        cout<<"City is updated"<<endl;
        this->city = city;
    }
    string getname()
    {
        return name;
    }
     int getage()
    {
        return age;
    }
     string getcity()
    {
        return city;
    }
};
