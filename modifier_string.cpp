#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
 string fullName;
cout << "Type your full name ";
getline (cin, fullName);
cout << "Your name is: " << fullName<<endl;
fullName.append(" welcome");
cout<<fullName<<endl;
fullName.insert(5," enjoy and welcome to insert modifier ");
cout<<fullName<<endl;
fullName.erase(1,-1);
cout<<fullName<<endl;
fullName.replace(0,3," Rustam");
cout<<fullName<<endl;
}