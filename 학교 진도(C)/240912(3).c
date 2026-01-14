#include<stdio.h>
int main(void){
	int number; //number변수 
	int sum = 0; //sum변수 0으로 지정 
	do{ //실행문 
		printf("숫자를 입력하세요: ");	
		scanf("%d",&number); //number을 입력 받음 
		sum = sum + number; //sum에 sum+number를 함 
		if(number == 0){ //number에 0이 들어오면 
			break; //반복 멈춤 
		}
	}while(1); //조건 (무한반복) 
	printf("입력한 숫자의 합계: %d\n", sum); //sum 출력 
	return 0;
}
