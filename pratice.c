#include<stdio.h>
int wide, Lnog, High; //全局变量
int Heads( Lnog, High) { //函数定义
	int a;
	a = Lnog * High; // 函数体
	return a;
}
int Side( wide, High) {
	int b;
	b = wide * High;
	return b;
}
int Top( Lnog,  wide) {
	int c;
	c = Lnog * wide;
	return c;
}
void main() {
	 int a,b,c;
	printf("请输入长方体的长宽高：");
	scanf_s("%d%d%d", &Lnog, &wide, &High);
	printf("您输入的长宽高为：%d%d%d\n", wide, Lnog, High); 
	a = Heads(Lnog, High); //函数的调用
	b = Side(wide, High);
	c = Top(Lnog, wide);
	printf("长方体的正面积为：%d\n", a);
	printf("长方体的侧面积为：%d\n", b);
	printf("长方体的顶面积为：%d\n", c);
}