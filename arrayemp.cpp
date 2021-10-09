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
    int n;
    cout<<"enter the number of employee"<<endl;
    cin>>n;
    employee em[n];
    for(int i=0;i<n;i++)
    {
        em[i].setdata();
        em[i].getdata();
    }
    
}