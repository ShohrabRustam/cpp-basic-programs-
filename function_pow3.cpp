#include<iostream>
#include<math.h>
using namespace std;// std::cout ;
int mypower (int base,int exp)
{
int result = 1;

    for (int i=0;i<base;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    int x,y;  
    
    cout <<"enter the number of x and y  to find power ";
    cin>>x>>y;
    cout <<mypower(x,y)<<endl; 
}