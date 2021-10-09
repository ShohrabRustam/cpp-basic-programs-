#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    enum class season(winter,summer,spring,fall);
    season now=season::winter;
    switch(now)
    case(summer) :
    {
        cout<<"summer season";
        break;
    }
    case(spring) :
    {
        cout<<"spring season";
        break;
    }
    case (fall):
    {
        cout << "fall season";
        break;
    }
    case(winter) :
    {
        cout <<"winter season";
        break;
    }
    default :
    {
        cout << "invalid season";
        break;
    }
    
}