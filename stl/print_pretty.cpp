#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <iomanip>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        
        double a,b,c;
        cin>>a>>b>>c;
        
        long long ai=(long long)floor(a);
        cout<<showbase<<hex<<ai<<endl;
        
        cout<<noshowbase;
        
        cout<<setprecision(2)<<fixed<<showpos<<setw(15)<<setfill('_')<<b<<endl;
        
        cout<<noshowpos;
        
        cout<<setprecision(9)<<fixed<<scientific<<uppercase<<c<<endl;
        
        cout<<nouppercase;
        
    }
    return 0;
}
