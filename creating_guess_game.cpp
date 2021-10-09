#include<iostream>
#include<stdlib>
#include<ctime>
using namespace std;// std::cout ;
void playgame()
{
int random=rand()%100+1;
}


int main()
{
    srand(time(NULL));
 int choice;
 while(true)
 {
     cout<<"guess the number\n";
     int guess;
     cin>>guess\n;
     if(guess==random)
     cout<<"you win"<<endl;
     else if (guess<random)
     cout<<"Too low"<<endl;
     else
     cout<<"too high"<<endl;
 }
 do
 {
     cout<<"0. Quit\n"<<"1. Play\n"
     cin >> choice >> endl;
     switch (choice)
     {
     case 0:
     cout<<"thanks for nothing\n"
     break;
     case 1:
     playgame();
     break;
     default:
     cout<<"invalid choice"<<endl;
         break;
     }
 } while (choice!=0);
 
 
}