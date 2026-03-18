
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    int min=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(min>v[i])
        min=v[i];
        
        if (max<v[i])
        max=v[i];
    } 
    
    cout<<"Result = "<<max-min<<endl;
    return 0;
}
