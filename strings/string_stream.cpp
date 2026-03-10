// Platform: HackerRank
// Problem: StringStream
// Topic: String parsing using stringstream

#include <vector>
#include <iostream>
#include<sstream>
using namespace std;

vector<int> parseInts(string str)
{
    vector <int> v ;
    int x;
    char ch;
    istringstream iss{str};
    while(iss>>x)
    {
        v.push_back(x);
        iss>>ch;
    }
    return v;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s; 
    getline(cin,s);
    vector<int> result=parseInts(s);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    } 
    return 0;
}
