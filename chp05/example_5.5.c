#include <stdio.h>
#include "mysql.h"

int main()
{
 	MYSQL mysql;     
 	MYSQL_RES *res;
 	MYSQL_ROW row;
 	char *query;
 	int i,flag,r; // connect the database 
 	mysql_init(&mysql);
 	if(!mysql_real_connect(&mysql,"localhost","root","sun","student",0,NULL,0))
 	{//�Y�s����Ʈw����
     	printf( "Failed to connect to MySQL�I\n");
		return 0;
	}
 	else 	
		printf("Connected mysql successfully!\n");  		
	query= "delete from student where ssex='m'";
//�n�d�ߪ�SQL�y�y
 if(!mysql_real_query(&mysql,query,(unsigned int) strlen(query)))
{
   printf("delete data %d successful!\n",i+1); 	
   printf("\n");
 }
    mysql_close(&mysql);  
    return 1;
}
