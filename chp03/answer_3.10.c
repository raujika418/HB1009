#include<stdio.h>
void	main()
{
int x,y,z,j=0;
printf("Possible plans to buy 100 fowls with 100 Yuan:\n");
for(x=0;x<=20;x++) /*�~�h�`���������μ�*/
for(y=0;y<=33;y++) /*���h�`������������y�b0~33�ܤ�*/
{
z=100-x-y; /*���~�h�`������U�A������z���Ȩ�x,y���Ȫ����*/
if(z%3==0 && 5*x+3*y+z/3==100)
/*���Ҩ�z�Ȫ��X�z�ʤαo��@�ոѪ��X�z��*/
printf("%2d:cock=%2d hen=%2d chicken=%2d\n",++j,x,y,z);
}
}
