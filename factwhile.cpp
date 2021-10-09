#include <iostream>
using namespace std;

 
int
main () 
{
  
int n;
  
unsigned long long int fact = 1;
  
cout << "enter the number top find the factorial:" << endl;
  
cin >> n;
  
int i = 1;
  
  {
    while (i <= n)
      
fact *= i;
    
i++;
  
}
  
cout << "the factorial of " << n << " is :" << fact << endl;
  
return 0;

}
