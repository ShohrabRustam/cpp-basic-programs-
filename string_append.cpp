#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
 string fullName;
cout << "Type your full name ";
getline (cin, fullName);
cout<<"after append operation"<<endl; 
fullName.append(" welcome");
cout<<fullName<<endl;
}