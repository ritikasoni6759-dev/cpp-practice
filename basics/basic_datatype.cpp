// Program: Basic Data Types in C++
// Concept: Using int, float, char and double
#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin>>i>>l>>c>>f>>d;
    
    cout<<i<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    cout<<std::setprecision(3)<<fixed<<f<<endl;
    cout<<setprecision(9)<<fixed<<d<<endl;
    
      
    return 0;
}
