#include <map>
#include <iostream>

int main( )
{
   using namespace std;
   map <int, char> m1, m2, m3;
   map <int,char>::iterator mi;
    map <int,char>::iterator mi2;
   typedef pair <int, int> Pair;

   m1.insert ( Pair ( 1, 'a' ) );
   m1.insert ( Pair ( 2, 'b' ) );
   m1.insert ( Pair ( 3, 'c') );
   m2.insert ( Pair ( 4, 'd') );
   m2.insert ( Pair ( 5, 'e') );
   m3.insert ( Pair ( 6, 'f') );

   cout << "m1����l�ƾڬ�:\n";
   for ( mi = m1.begin( ); mi!= m1.end( ); mi++ )
      cout << " " << mi -> first<<" " << mi -> second<<endl;
   

   // This is the member function version of swap
   //m2 is said to be the argument map; m1 the target map
   m1.swap( m2 );

   cout << "�ե�m1.swap( m2 )��Am1���ƾ��ܬ�:\n";
   for ( mi = m1.begin( ); mi!= m1.end( ); mi++ )
	   cout << " " << mi -> first<<" " << mi -> second<<endl;
   cout << "�ե�m1.swap( m2 )��Am2���ƾڬ�:\n";
   for ( mi2 = m2.begin( ); mi2!= m2.end( ); mi2++ )
	   cout << " " << mi2 -> first<<" " << mi2 -> second<<endl;

   // This is the specialized template version of swap
   swap( m1, m3 );
   cout << "�ե�swap( m1, m3 )��Am1���ƾ��ܬ�:\n";
   for ( mi = m1.begin( ); mi!= m1.end( ); mi++ )
	   cout << " " << mi -> first<<" " << mi -> second<<endl;
   cout << "�ե�swap( m1, m3 )��Am3���ƾ��ܬ�:\n";
   for ( mi = m3.begin( ); mi!= m3.end( ); mi++ )
	   cout << " " << mi -> first<<" " << mi -> second<<endl;
}