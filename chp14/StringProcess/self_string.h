//--------------------------------------------------------------------
//
//���Gself_string.h
//�y�z�G�Ω��{�ۭq���r��B�z�w
//
//--------------------------------------------------------------------
#ifndef SELF_STRING_
#define SELF_STRING_

//�Ω�w�q�r������A�N���r�ꤤ���ȫ�����ت��ꤤ
int self_stringcopy(char *pSrcString,char *pDestString);

//�Ω�w�q�r�����A�P�_���P�ت��r��O�_�۵�
// 1. type=0,�h�q�{�j�p�g
// 2. type=1�A�h�����j�p�g
int self_stringcompare(char *pSrcString,char *pDestString,int type);

//�Ω�w�q�r����s���A�q�Ltype�����ӧP�_�A�s�����覡
// 1. type=0,�h�s����}�Y
// 2. type=-1,�h�s���쵲��
// 3.type=X,X<strlen(pStrString)���ȡA�h�s���췽�ꪺ���w�r����m
int self_stringcat(char *pSrcString,char *pCatString,int type);

// �r��j�p�g�ഫ��z�A�q�Ltype�ӱ���A�Y��0�A�h���ഫ���p�g�A�_�h���ഫ���j�g
int self_stringChange(char *pSrcString,int type);

//�d��code�Ĥ@���X�{����m,�䤣��A�h��^-1.
int self_stringfindcharfirst(char *pSrcString,char cCode);

//�d��Ĥ@���X�{����m,�䤣��A�h��^-1.
int self_stringfindstringfirst(char *pSrcString,char *pSubString);


#endif
