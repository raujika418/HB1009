#include "self_string.h"
#include <unistd.h>
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
	if(NULL == pSrcString)
		return 0;
	
	int srclength = strlen(pSrcString);	

	int i;
	for(i = 0; i < srclength; i++)
	{
		pDestString[i] = pSrcString[i];
	}
	
	return 1;	
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
	{
		return -1;
	}
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
