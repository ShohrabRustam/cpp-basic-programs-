#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
 string fullName;
cout << "Type your full name ";
getline (cin, fullName);
cout << fullName<<endl;
cout <<"after the replace operation"<<endl;
fullName.replace(0,3," Rustam");
cout<<fullName<<endl;
}