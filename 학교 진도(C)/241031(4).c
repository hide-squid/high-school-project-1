#include<stdio.h>
int LCM(int a, int b){ //정수형 함수 LCM 선언 매개변수(a = data1 , b = data2) 
	int i; //정수형 변수 i 선언 
	int result; //정수형 변수 result 선언 
	for(i = a * b; i >= 1 ; i--){ //반복문 a*b에서 1까지 반복(1씩 감소) 
		if(i%a==0 && i%b==0){ //만약 i를 a와 b로 나누었을때 나머지가 0이면 
			result=i; //result에 i 저장 
		}
	}
	return result; //값 변환 
}
int main(){
	int data1, data2; //정수형 변수 선언(data1, data2)
	int result; //정수형 변수 result 선언 
	printf("첫번째 숫자를 입력하세요 : "); //"글 출력"
	scanf("%d", &data1); //data1에 정수형 데이터 입력받기 
	printf("두번째 숫자를 입력하세요 : "); //"글 출력"
	scanf("%d", &data2); //data2에 정수형 데이터 입력받기
	result = LCM(data1, data2); //result에 LCM함수 실행 변환값 저장 
	printf("최소 공배수는 %d입니다.", result);
	return 0; //프로그램 종료
}
