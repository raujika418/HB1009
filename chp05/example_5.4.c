#include <stdio.h>
#include "mysql.h"

int main()
{
 	MYSQL mysql;     
 	MYSQL_RES *res;
 	MYSQL_ROW row;
 	char *query[3];
 	int i,flag,r; // connect the database 
 	mysql_init(&mysql);
 	if(!mysql_real_connect(&mysql,"localhost","root","sun","student",0,NULL,0))
 	{      //�Y�s����Ʈw����
     	       printf( "Failed to connect to MySQL�I\n");
		return 0;
	}
 	else 	
		printf("Connected mysql successfully!\n");  		
	query[0] = " insert into student (sno,sname,ssex)values(1001,'sun','m')";
//�n�d�ߪ�SQL�y�y
query[1] = " insert into student (sno,sname,ssex)values(1002,'zhang','w')";
//�n�d�ߪ�SQL�y�y
query[2] = " insert into student (sno,sname,ssex)values(1003,'wang','w')";
//�n�d�ߪ�SQL�y�y
for(i=0;i<3;i++)
{
    if(!mysql_real_query(&mysql,query[i],(unsigned int) strlen(query[i])))
   {
	       printf("insert data %d failed!\n",i+1); 
	       return 0;	
   }
}
   
 
    mysql_close(&mysql);  
    return 1;
}
