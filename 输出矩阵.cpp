#include<stdio.h>
int main()
{
	int i,j,n=0;                    //n为输出数据的个数，若输出数据为5的倍数，则进行换行
	for(i=1;i<=4;i++)               //外循环变量i由1变到4，用来控制输出4行数据
	 for(j=1;j<=5;j++,n++)          //内循环变量j由1变到5，用来控制输出5行数据
	 {
		 if(n%5==0)printf("\n");    
	 printf("%d\t",i*j);
	 }
	 printf("\n");
	 return 0;
}