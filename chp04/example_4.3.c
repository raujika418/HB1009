#include <stdio.h>
int main( void )
{
   FILE *ptr;
   int  i, numread, numwritten,length; 
   length=20;
   char data[length];   
    //�V���test.txt���g�J20�Ӧr��    
   if( (ptr = fopen( "test.txt", "w+" )) != NULL )
   {
      for ( i = 0; i < length; i++ )
         data[i] = 'a'+i;      
      numwritten = fwrite(data, sizeof(char), length, ptr );
      printf( "Wrote %d words\n", numwritten );
      fclose( ptr );
   }
   else
      printf( "open file failed!\n" );
   //�q���test.txt��Ū���g�J���ƾ�
   if( (ptr = fopen( "test.txt", "r+" )) != NULL )
   {
       numread=fread( data, sizeof(char), length, ptr );      
       printf( "%s\n", data);
       printf( "Read %d words\n", numread );
       fclose( ptr );
   }
   else
      printf( "Can't open the file!\n" );
   return 1;
}
