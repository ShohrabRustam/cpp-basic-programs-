#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
 string fullName;
cout << "Type your full name ";
getline (cin, fullName);
cout << fullName<<endl;
cout<<"after the insert opetion"<<endl;
fullName.insert(5," enjoy and welcome to insert modifier ");
cout<<fullName<<endl;
