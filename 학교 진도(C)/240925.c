#include<stdio.h>
int main(){
	int age; //사용자의 나이를 저장할 변수 
	int ticketPrice = 10000; //기본티켓 가격
	//사용자로부터 나이를 입력받음
	printf("나이를 입력하새요: ");  
	scanf("%d", &age); 
	
	if(0<age && age<12){ //12세 미만 
		printf("어린이 할인을 받아 티켓 가격은 %d원입니다.", ticketPrice/100*50);
	}
	else if(12<=age && age<65){ //12세이상 65세미만 
		printf("성인이므로 기본가격인 %d원입니다.", ticketPrice);
	}
	else if(65<=age){ //65세 이상 
		printf("노인 할인을 받아 티켓 가격은 %d원입니다.", ticketPrice/100*70);
	} 
	else{ //예외처리 
		printf("할인 받지 못하는 나이입니다.");
	}
	return 0; 
}
