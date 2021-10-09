#include<iostream>
using namespace std;// std::cout ;

int main()
{
    string sentence ="Hello I am Rustam";
    for(int i=0;i<sentence.size();i++)
    {
        cout<<sentence[i]<<endl;
        if (sentence[i]=="o")
        {
            continue;
        }
    }
    cout<<"done"<<endl;
}