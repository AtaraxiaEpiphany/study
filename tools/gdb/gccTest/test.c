#include<stdio.h>

int add (int a,int b){
	int ret = a + b;
	return ret ;
}

int fun1(){
	return 2*add(2,3);
}

int fun2(int a){
	char *s = "this is in function2\n";
	printf("%s",s);
	return a*fun1();
}

int main () {
	int a,b;
	printf("please input a and b:\n");
	scanf("%d %d",&a,&b);
	int c =	add(a,b);
	printf("a+b=:%d\n",c);
	int d = fun1();
	int n = fun2(c);
	return 0;
}





