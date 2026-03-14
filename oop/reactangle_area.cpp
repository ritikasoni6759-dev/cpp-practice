// Platform: HackerRank
// Problem: Rectangle Area
// Topic: C++ Inheritance

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle
{   public:
    int w;
    int h;
    
    void display()
    {
        cout<<w<<" "<<h<<endl;
    }
};

class RectangleArea:public Rectangle
{
    public:
    void read_input()
    {
        cin>>w>>h;
    }
    void display()
    {
        cout<<w*h<<endl;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    RectangleArea r;
    r.read_input ();
    r.Rectangle::display();
    r.display();
    return 0;
}
