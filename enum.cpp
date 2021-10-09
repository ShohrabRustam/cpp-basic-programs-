
#include <iostream.h> 
using namespace std;
   int main() 
   { 
     enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday}; 
     Days TheDay; 
     int j; 
     cout<<"Please enter the day of the week (0 to 6)"; 
     cin>>j; 
     TheDay = Days(j); 
     if(TheDay == Sunday || TheDay == Saturday) 
       cout<<"Hurray it is the weekend"<     else 
       cout<<"Curses still at work"<     return 0; 
   } 