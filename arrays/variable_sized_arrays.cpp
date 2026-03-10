// Platform: HackerRank
// Problem: Variable Sized Arrays
// Topic: Vectors / Dynamic Arrays


#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin>>n>>q;
    
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        vec.at(i).resize(k);
        
        for(int j=0;j<k;j++)
        {
            cin>>vec[i][j];
        }
    } 
    
    for(int i=0;i<q;i++)
    
    {
        int x,y;
        cin>>x>>y;
        cout<<vec[x][y]<<endl;
    }
    return 0;
}
