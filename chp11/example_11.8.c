#include<map>
#include<iostream>
using namespace std;
int main()
{
   map<const char*,int> student;
   map<const char*,int>::iterator mi;
   typedef pair <const char*,int> Pair;
   student.insert(Pair("sun",1001));
   student.insert(Pair("li",1002));
   student.insert(Pair("zheng",1003));
   student.insert(Pair("zhang",1004));
   for(mi=student.begin();mi!=student.end();mi++)
      cout<<mi->first<<"   "<<mi->second<<endl;   
   student.erase(student.end());//�R����������
   student.clear();//�R��map�e��������������
   return 1;
}