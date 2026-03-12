// Platform: HackerRank
// Problem: Sets-STL
// Topic: STL set operations

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<set>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s;
    int q;
    cin>>q;
    int x,y;
    for(int i=0;i<q;i++)
    {
        cin>>y>>x;
        if(y==1)
        s.insert(x);
        
        else if(y==2)
        s.erase(x);
        
        else if(y==3)
        {
            if(s.find(x)!=s.end())
            cout<<"Yes"<<endl;
            else 
            cout<<"No"<<endl;
        }
        else{}
    }  
    
    return 0;
}
