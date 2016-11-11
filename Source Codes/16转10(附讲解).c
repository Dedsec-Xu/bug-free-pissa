#include <stdio.h>
int main (void)
{
int x,y;
char c;
printf("请输入一个字符:");
y=scanf("%x",&x);//以16进制读取x，返回y
if(y==0)//看scanf读取16进制数是否失败
  {printf("\n你输入的不是16进制数，它的字符码是:");
  c=getchar();
  printf("%d",c);
  }//如果失败，那么读取缓存区里的字符c，强行用十进制格式输出则自动转为ascii码
  else
{printf("\n你输入的是16进制数，转化为10进制数后是:"); printf("%d",x);}//如果成功，强行用十进制格式输出
  return 0;
}
	