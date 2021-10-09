#include<iostream>
using namespace std;// std::cout ;

int main()
{
    int answer=5;
    int guess_num;
    cout<<"guess the number"<<endl;
    cin >> guess_num >> endl;
    guess_num == answer ? cout<<"good job" : cout<<"bad job";
}