// Platform: HackerRank
// Problem: Classes and Objects
// Topic: Classes and arrays

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student 
{
    public:
    vector<int> scores;
    void input()
    {
        scores.resize(5);
        for(int i=0;i<5;i++)
        cin>>scores[i];
    }
    
    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+scores[i];
        }
        return sum;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<Student>s(n);
    for(int i=0;i<s.size();i++)
    {
        s[i].input();
    } 
    
    int kristenscore=s[0].calculateTotalScore();
    int count=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i].calculateTotalScore()>kristenscore)
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}
