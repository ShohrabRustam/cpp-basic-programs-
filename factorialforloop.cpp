#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 int n;
 unsigned long long int fact=1;
 cout<<"enter the number top find the factorial:"<<endl;
 cin >> n;
 for (int i=1;i<=n;i++)
 {
     fact*=i;
 }
 cout<< "the factorial of "<< n <<" is :"<<fact<<endl;
    return 0;
}