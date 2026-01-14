#include<stdio.h>
void main(){
	int kor, math, soci, sci, eng; //정수형으로 변수 선언 
	int sum; //정수형으로 변수 선언 
	printf("국어 점수를 입력하세요: "); //입력받기 전 어떤 데이터 넣을지 출력 
	scanf("%d", &kor); //OO과목점수 입력 
	printf("수학 점수를 입력하세요: ");
	scanf("%d", &math);
	printf("사회 점수를 입력하세요: ");
	scanf("%d", &soci);
	printf("과학 점수를 입력하세요: ");
	scanf("%d", &sci);
	printf("영어 점수를 입력하세요: ");
	scanf("%d", &eng);
	sum = kor + math + soci + sci + eng; //모든 입력받은 과목 더하기 
	printf("다섯과목의 평균은 %.2f입니다.", (float)sum/5); //정수형sum을 5로 나눠 평균구하고 실수로 형변환 
}
