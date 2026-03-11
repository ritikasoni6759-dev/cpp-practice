// Platform: HackerRank
// Problem: Class
// Topic: Classes and encapsulation

#include <iostream>
using namespace std;

class Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
    void set_age(int a) {age=a;}
    int get_age(){return age;}
    
    void set_first_name(string f){first_name=f;}
    string get_first_name(){return first_name;}
    
    
    void set_last_name(string l){last_name=l;}
    string get_last_name(){return last_name;}
    
    void set_standard(int s) {standard=s;}
    int get_standard(){return standard;}
    
    string to_string()
    {
        return (std::to_string(age)+","+first_name+","+last_name+","+std::to_string(standard));
    }
    
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
    int a,st;
    string fn,ln;
    cin>>a;
    cin>>fn;
    cin>>ln;
    cin>>st;
    
    s.set_age(a);
    s.set_first_name(fn);
    s.set_last_name(ln);
    s.set_standard(st);
    
    cout<<s.get_age()<<endl;
    cout<<s.get_last_name()+", "+s.get_first_name()<<endl;
    cout<<s.get_standard()<<endl<<endl;
    cout<<s.to_string();  
    return 0;
}
