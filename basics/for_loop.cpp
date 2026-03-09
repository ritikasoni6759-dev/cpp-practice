// Platform: HackerRank
// Problem: For Loop
// Topic: Control Flow (Loops)

#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a;
    cin>>b;
    
    vector <string> vec {"one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++)
    {
        if(i>=1 &&i<=9)
        cout<<vec[i-1]<<endl;
        else
        {
            if(i%2==0)
            cout<<"even"<<endl;
            else 
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
