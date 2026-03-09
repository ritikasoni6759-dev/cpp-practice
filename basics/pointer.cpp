// Platform: HackerRank
// Problem: Pointer
// Topic: Pointers

#include <iostream>
using namespace std;
#include<cmath>

void increment(int *f,int *s)
{
    int temp= *f;
    *f= *f + *s;
    *s= abs(temp-*s); 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    cin>>a;
    cin>>b;
    increment(&a,&b); 
    cout<<a<<endl;
    cout<<b<<endl;
     
    return 0;
}
