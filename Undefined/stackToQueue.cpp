#include<iostream>
#include<cstring>
#define MaxSize 50
typedef int Elemtype;
using std::cin; using std::cout;
typedef struct
{
	Elemtype a[MaxSize];	//输入栈
	Elemtype b[MaxSize];	//输出栈
	Elemtype c[MaxSize];	//辅助栈
	/*top_a为队尾,同时指向a的栈顶
	 *
	 *top_b为队头,同时指向b的栈顶
	 */
	Elemtype top_a, top_b, top_c;	
}StackQueue;
void InitQueue(StackQueue* &s)	//初始化栈队列
{
	s = new StackQueue;
	s->top_a = s->top_b = s->top_c = -1;
}
bool inStackQueue(StackQueue* &s, Elemtype e)	//入队列
{
	if(s->top_a + 1 >= MaxSize)
		return false;
	s->a[++(s->top_a)] = e;
	return true;
}
bool transfer(Elemtype* stack1, Elemtype* top1, Elemtype* stack2, Elemtype* top2)	//stack1中元素转移到stack2中
{
//	cout << "this is debug!\n";
	if(*top2 + *top1 >= MaxSize)
		return false;
	int len = *top1 + 1;
//	cout << "this is debug2!\n";
	while(len--)
	{
//		cout <<*top1<< "this is debug2top1!\n";
		stack2[++(*top2)] = stack1[(*top1)--];
//		(*top1)= (*top1)-1;
	}
//	cout << "this is debug3!\n";
	return true;
}
bool outStackQueue(StackQueue* &s,Elemtype &e)			//出队列
{
	bool btoc = transfer(s->b, &(s->top_b), s->c, &(s->top_c));			//栈元素转移b-----c
	bool atob = transfer(s->a, &(s->top_a), s->b, &(s->top_b));			//栈元素转移a-----b
	bool ctob = transfer(s->c, &(s->top_c), s->b, &(s->top_b));			//栈元素转移c-----b
	if(!(btoc && atob && ctob) || s->top_b < 0)
		return false;
	e = s->b[(s->top_b)--];
	return true;
}
int main()
{
	StackQueue* s;
	int e = 0, n;
	InitQueue(s);
	cin >> n;
	for(int i = 1; i <= n; i++)		//连续入队1~n，并在入队3的倍数时出队
	{
		cout << i << "入队状态：" << inStackQueue(s, i);				//入队返回值为1表示入队成功
		putchar('\n');
		if(i%3 == 0)
		{	
			outStackQueue(s,e);			//出队
			cout << "出队数字：" << e <<"\n";			 
		}
	}
	free(s);
	return 0;
}