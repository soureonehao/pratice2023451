#include<stdio.h>
int wide, Lnog, High; //ȫ�ֱ���
int Heads( Lnog, High) { //��������
	int a;
	a = Lnog * High; // ������
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
	printf("�����볤����ĳ���ߣ�");
	scanf_s("%d%d%d", &Lnog, &wide, &High);
	printf("������ĳ����Ϊ��%d%d%d\n", wide, Lnog, High); 
	a = Heads(Lnog, High); //�����ĵ���
	b = Side(wide, High);
	c = Top(Lnog, wide);
	printf("������������Ϊ��%d\n", a);
	printf("������Ĳ����Ϊ��%d\n", b);
	printf("������Ķ����Ϊ��%d\n", c);
}