#include<iostream>
#include<stack>
using namespace std;
int main()
{
   bool flag;//   
   stack<int>s;   
   s.push(1);
   s.push(10);
   s.push(5);
   s.push(23);
   s.pop();
   s.pop();
   flag=s.empty();
   if(flag==true)
      cout<<"�Ӱ��|����"<<endl;
   else
   { 
      cout<<"�Ӱ��|������"<<endl;
      cout<<"���|�������G"<<s.top()<<endl;
      cout<<"���|���׬��G"<<s.size()<<endl;
   }
}