#include <stdio.h>//ͷ�ļ�
#include <stdlib.h>
#include <math.h>
int main()//������ 
{
	float x,y,a;//������� 
	for(y=1.5;y>-1.5;y-=0.1){
		for(x=-1.5;x<1.5;x+=0.05){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' '); //ע������浥�������пպ� 
		}
		system("color 0c");//��ɫ��ɫ���� 
		putchar('\n');
	}
	printf("                         �͸�");//�����İ����� 
	printf("\n");
	getchar();
	return 0;//���غ��� 
}

	
