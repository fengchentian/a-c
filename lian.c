#include <stdio.h>//头文件
#include <stdlib.h>
#include <math.h>
int main()//主函数 
{
	float x,y,a;//定义变量 
	for(y=1.5;y>-1.5;y-=0.1){
		for(x=-1.5;x<1.5;x+=0.05){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' '); //注意最后面单引号内有空号 
		}
		system("color 0c");//红色颜色代码 
		putchar('\n');
	}
	printf("                         送给");//输入心爱的人 
	printf("\n");
	getchar();
	return 0;//返回函数 
}

	
