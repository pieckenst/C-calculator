#include <stdio.h>

int main() {
	int test;
	int x;
	int res;
	scanf_s("%d%d", &test, &x);
	//test = 5;
	//x = 13;
	
	char askn[100];
	scanf_s("%d", &askn);
	if (strcmp(askn ,"add")) {
		res = x + test;
	}
	else if (strcmp(askn, "minus")) {
		res = x - test;
	}
	else if(strcmp(askn, "multiply")) {
		res = x * test;
	}
	else if (strcmp(askn, "divide")) {
		res = x / test;
	}
	
	
	printf("You entered - int1 = %d , int2 = %d \n",test,x);
	printf("result = %d",res);
	return 0;
}