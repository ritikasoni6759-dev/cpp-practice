#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<map>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    string x;
    int y;
    int t;
    
    map<string,int>m;
    
    for(int i=0;i<q;i++)
    {  cin>>t;
        if(t==1)
        {
            cin>>x>>y;
            m[x]+=y;
        }
        else if(t==2)
        {
            cin>>x;
            m.erase(x);
        }
        else if(t==3)
        {
            cin>>x;
            cout<<m[x]<<endl;
        }
      else{}  
    }  
    return 0;
}
