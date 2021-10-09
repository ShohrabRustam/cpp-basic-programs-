#include<iostream>
using namespace std;
class employee
{
    int  id;
    static int count;
    public:
    void setdata()
    {
        cout<<"enter the id of the employee"<<count+1<<endl;
        cin >>id;
        count++;
    }
    void getdata()
    {
        cout<<"the id of the employee"<<count+1<<"is"<<id<<endl;
    }
};
int employee:: count;
int main()
{
    employee ram,rahul;
    ram.setdata();
    ram.getdata();
    rahul.setdata();
    rahul.getdata();
}