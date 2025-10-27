#include <iostream>
using namespace std;

// this is the main function
int main(){
    cout<<"enter a number:";
    int n;
    cin>> n; 
    int c=1,f=1;
    while(c<=n){
        f = f*c;
        c = c +1;
    }
    cout<<"The Factorial is "<< f << endl;   
    return 0;
}

