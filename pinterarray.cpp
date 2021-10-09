#include <iostream> 
using namespace std; 
int main() 
{ 
    int marks[]={10,20,30,40,50};
    int *ptr;
    ptr=marks;
    for(int i=0;i<sizeof(marks);i++){
    cout<<"the value of array by pointer is "<<*(ptr+i)<<endl
    }
    return 0; 
} 