// Platform: HackerRank
// Problem: Structs
// Topic: Structures

#include <iostream>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Student s;
    cin>>s.age;
    cin>>s.first_name;
    cin>>s.last_name;
    cin>>s.standard;
    
    cout<<s.age<<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard<<endl; 
    return 0;
}
