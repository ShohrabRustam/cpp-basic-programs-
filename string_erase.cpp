#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
 string fullName;
cout << "Type your full name ";
getline (cin, fullName);
cout<< fullName<<endl;
cout<<"after the erase operation"<<endl;
fullName.erase(1,-1);
cout<<fullName<<endl;
}