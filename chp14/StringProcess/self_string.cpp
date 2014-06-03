#include "self_string.h"
//#include <unistd.h>
#include <string.h>
#include <stdlib.h>
//----------------------------------------------------
//
//�\��y�z�G�NpSrcString�����ȫ�����pDestString��
//          �Y�������\�A �A�h��^�j��1���ȡA�_�h��^0
//
//
//----------------------------------------------------
int self_stringcopy(char *pSrcString,char *pDestString)
{
	if(NULL == pSrcString 
		|| NULL== pDestString)
		return -1;
	
	int srclength = strlen(pSrcString);	
	int destlength = sizeof(pDestString);
	
	if(srclength >= destlength)
		return -1;

	int i;
	for(i = 0; i < srclength; i++)
	{
		pDestString[i] = pSrcString[i];
	}
	pDestString[i] = '\0';
	
	return 0;	
}

//
//�Ω�w�q�r�����A�P�_���P�ت��r��O�_�۵�
// 1. type=0,�h�q�{�j�p�g
// 2. type=1�A�h�����j�p�g
//
//
int self_stringcompare(char *pSrcString,char *pDestString,int type)
{
	if(pSrcString == NULL || pDestString == NULL)
		return -1;
	
	int srclength = strlen(pSrcString);	
	int destlength = strlen(pDestString);
	
	if(srclength != destlength)
		return -1;

	if(type == 0)
	{
		int i ;
		for(i = 0; i < srclength; i++)
		{
			if(pSrcString[i] != pDestString[i])
				return -1;
		}
	}
	else
	{
		int i ;
		for(i = 0; i < srclength; i++)
		{
			if(pSrcString[i] != pDestString[i]
				&& pSrcString[i] != pDestString[i]+32
				&& pSrcString[i] != pDestString[i]-32)
				return -1;
		}
	}
	return 0;
}

// �r��j�p�g�ഫ��z�A
// �q�Ltype�ӱ���A
// �Y��0�A�h���ഫ���p�g�A�_�h���ഫ���j�g
int self_stringChange(char *pSrcString,int type)
{
	if(pSrcString == NULL)
		return -1;

	int length = strlen(pSrcString);
	if(type == 0)
	{
		int i ;
		for(i = 0; i < length; i++)
		{
			if(pSrcString[i] > 'A' && pSrcString[i] < 'Z')
				pSrcString[i] -= 32;
			
		}
	}
	else 
	{
		int i ;
		for(i = 0; i < length; i++)
		{
			if(pSrcString[i] > 'a' && pSrcString[i] < 'z')
				pSrcString[i] += 32;
		}
	}
	return 0;
}

//�d��code�Ĥ@���X�{����m,�䤣��A�h��^-1.
int self_stringfindcharfirst(char *pSrcString,char cCode)
{
	if(pSrcString == NULL)
		return -1;

	int length = strlen(pSrcString);
	
	int i;
	for(i = 0; i < length; i++)
	{
		if(pSrcString[i] == cCode)
			return i;
	}
	return -1;
}
//�d��Ĥ@���X�{����m,�䤣��A�h��^-1.
int self_stringfindstringfirst(char *pSrcString,char *pSubString)
{
/*	if(pSrcString == NULL || pDestString == NULL)
		return -1;
	
	int srclength = strlen(pSrcString);	
	int destlength = strlen(pDestString);
	
	if(srclength < destlength)
		return -1;
	
	int i = 0;
	for(i = 0; i < srclength; i++)
	{
		if(pSrcString[i] == pSubString[0])
		{
			int j;
			bool flag = true;
			for(j = 1; j < destlength; j++)
			{
				if(pSrcString[i+j] != pSubString[j])
				{
					flag = false;
					break;
				}
			}
			if(flag)
				return i;
		}
	}

  */
	return -1;
}

int self_stringcat(char *pSrcString,char *pCatString)
{
/*	if(pSrcString == NULL || pDestString == NULL)
		return -1;
	
	int srclength = sizeof(pSrcString);	
	int destlength = strlen(pDestString);
	int srcstrlen = strlen(pSrcString);

	if(srclength < destlength+srcstrlen)
		pSrcString = realloc(pSrcString,srclength+destlength);
	
	int i
	for( i= 0; i < destlength; i++)
	{
		pSrcString[i+srclength] = pCatString[i];
	}
	pSrcString[i+srclength]='\0';
	*/
	return 0;
}
