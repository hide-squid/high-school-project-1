#include<stdio.h>
int add(int a, int b){ //정수형 함수 add 정의 매개변수(a = x, b = y) 
	return a + b; //a+b의 값을 반환함 
}
int main(){
	int x = 10; //정수 x에 10저장 
	int y = 20; //정수 y에 20저장 
	int sum; //정수 sum 정의 
	sum = add(x, y); //sum에 함수add 실행 
	printf("Sum of %d and %d is %d\n", x, y, sum); //출력 
	return 0; //프로그램 종료 
}
