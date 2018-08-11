#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",a,b);
//	printf("\\n \\\n %d\n");		//error1
	printf("\\n \\\n\n");		
	return 0;
}
/*error1
Speak1_15B.c(8): warning C4129: “%”: 不可识别的字符转义序列
Speak1_15B.c(8): warning C4473: “printf”: 没有为格式字符串传递足够的参数
Speak1_15B.c(8): note: 占位符和其参数预计 1 可变参数，但提供的却是 0 参数
Speak1_15B.c(8): note: 缺失的可变参数 1 为格式字符串“%d”所需
*/
/*sample
12 2
12 2

12
2
12 2	

           12         2
12 2

      12



         2
12 2

12 s
12 0

 12
    s
12 0

12 2
12 2
\n \
*/