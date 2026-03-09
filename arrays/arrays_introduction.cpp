// Platform: HackerRank
// Problem: Arrays Introduction- print array in reverse order
// Topic: Arrays
#include <iostream>
#include <algorithm>
using namespace std;
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    std::reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
