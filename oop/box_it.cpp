// Platform: HackerRank
// Problem: Box It
// Topic: Classes and operator overloading

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box
{
    private:
    int l;
    int b;
    int h;
    
    public:
    
    Box():l{0},b{0},h{0}{}
    Box(int length,int breadth,int height):l{length},b{breadth},h{height}{}
    
    Box (const Box &B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    
    int getLength()const{return l;}
    int getBreadth()const{return b;}
    int getHeight()const{return h;}
    long long CalculateVolume()const{return (long long)l*b*h;}
    
    bool operator<(const Box &B)const
    {
       if(l<B.l)
       return true;
       else if(l==B.l && b<B.b)
       return true;
       else if(l==B.l && b==B.b &&h<B.h)
       return true ;
       else 
       return false;
        
    }
   friend std::ostream &operator<<(std::ostream &os,const Box &rhs) ;
};
std::ostream &operator<<(std::ostream &os,const Box &rhs)
{
    os<<rhs.l<<" "<<rhs.b<<" "<<rhs.h;
    return os;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
        int n;
      cin>>n;
      
      Box temp;
      for(int i=0;i<n;i++)
      {
        int type;
        cin>>type;
        
        if(type==1)
        {
          cout<<temp<<endl;  
        }
        
        else if(type==2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box Newbox(l,b,h);
            temp=Newbox;
            cout<<temp<<endl;
        }
        else if(type==3)
        {
           int l,b,h;
            cin>>l>>b>>h;
            Box Newbox(l,b,h); 
            if(Newbox<temp)
            cout<<"Lesser"<<endl;
            else
            cout<<"Greater"<<endl;
        }
        
        else if(type==4){
            
           cout<<temp.CalculateVolume()<<endl;
        }
        else if(type==5)
        {
            Box Newbox(temp);
            cout<<Newbox<<endl;
        }
      }
      return 0;
}
