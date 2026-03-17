/*
Problem: Class Template in C++
Concept: Templates (Generic Programming)
Description: Demonstrates use of class template to handle different data types
*/
#include <iostream>
using namespace std;

template <typename T>
class AddElements
{
    T element;
    public:
    AddElements(T arg):element(arg){ }
    T add(T arg){
        return element+arg;
    }
};

template<>
class AddElements<string>
{
    string element;
    public:
    AddElements(string arg):element(arg){ }
    string concatenate(string arg)
    {
        return element+arg;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n;
    cin >> n;

    while(n--) {
        string type;
        cin >> type;

        if(type == "float") {
            float element1, element2;
            cin >> element1 >> element2;
            AddElements<float> obj(element1);
            cout << fixed<<obj.add(element2) << "\n";
        }
        else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> obj(element1);
            cout << obj.add(element2) << endl;
        }
        else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> obj(element1);
            cout << obj.concatenate(element2) << endl;
        }
    }

    return 0;

}
