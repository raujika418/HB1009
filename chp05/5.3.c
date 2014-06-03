#include <stdio.h>
#include "mysql.h"

int main()
{
 	MYSQL mysql;     // need a instance to init
 	MYSQL_RES *res;
 	MYSQL_ROW row;
 	char* query[5];
 	int t,i; // connect the database 
 	mysql_init(&mysql);
 	if (!mysql_real_connect(&mysql,"localhost", "root", "sun", "book",0,NULL,0))
 	{
     		printf( "Error connecting to database: %s\n",mysql_error(&mysql));
		return 0;
	}
 	else 	
		printf("Connected mysql successfully!\n");	
	query[0] = "insert into book (id,name,author,publisher,price)values(1001,'
C�y���{�ǳ]�p','�ӯE�j','�M�ؤj�ǥX����',24.00)";
	query[1] = "insert into book (id,name,author,publisher,price)values(1002,' 
C#�J���g��(��4��)','(����)karli Watson (����)Christian Nagel','�M�ؤj�ǥX����',118.00)";
	query[2]= "insert into book (id,name,author,publisher,price)values(1003,' 
�ƾڵ��c(C�y����)','�Y���ӵ� ','�M�ؤj�ǥX����',22.00)";
	query[3]= "insert into book (id,name,author,publisher,price)values(1004,' 
C++Primer Plus<��5��>���媩','(��)���Զ�','�H���l�q�X����',72.00)";
	query[4] = "insert into book (id,name,author,publisher,price)values(1005,' 
��k�ɽ�(��Ѳ�2��)','���(Cormen T.H.) (��)��','����u�~�X����',85.00)";
	for(i=0;i<5;i++)
	{
		t = mysql_real_query(&mysql,query[i],(unsigned int) strlen(query[i]));
		if(!t)
			printf("insert data %s successfully\n",query[i]);
	}
    mysql_close(&mysql);
  
   return 0;
}
