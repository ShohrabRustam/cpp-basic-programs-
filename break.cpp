  #include<iostream>
  using namespace std;
int main() { 
    // nested for loops with break statement 
    // at inner loop 
    for (int i = 0; i < 5; i++) { 
        for (int j = 1; j <= 10; j++) { 
            if (j > 3) 
                break; 
            else
            cout<<"*"; 
        } 
        cout<<"\n"; 
    } 
   
    return 0; 
} 