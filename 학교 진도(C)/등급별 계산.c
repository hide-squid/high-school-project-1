#include <stdio.h>

double cul1(double price, char class_) { //cul1 총 가격 계산 함수 
    double result = price; //가격 이동 

    if (result >= 100000) { //100000이상이면 
        result = result * 93 / 100; // 7% 할인 
    }
    if (class_ == 'V') { //V등급이면 
        result = result * 95 / 100; // 5% 할인 
    }
    if (result >= 50000) { //50000이상이면 
    	return result; // 값 반환 
    }
    result += 3000; // 배달비 +
    return result; //값 반환 
}

double cul2(double totalPrice, double sale) { //cul2 세금 계산 함수
    double result = totalPrice; //가격 이동
    result = result + (result * sale / 100); // 세금 적용
    return result; //값 반환 
}

int main(void) {
    double sale, price = 0, price_, totalPrice, to_result; //변수 정의 
    int cnt, i = 0;
    char class_; 
    
    printf("세율 입력(%): "); //세일 비율 입력 
    scanf("%lf", &sale);
    printf("회원 등급 입력(일반: 'G', VIP: 'V'): "); //회원 등급 입력 
    scanf(" %c", &class_);
    printf("상품 개수 입력: "); //상품 개수 입력 
    scanf("%d", &cnt);
    
    while (i < cnt) { //cnt만큼 반복 
        printf("상품 가격 입력: "); //상품 가격 입력 
        scanf("%lf", &price_); //%lf는 double , %f는 float 
        price += price_; //
        i++; //하나씩 증가 
    }

    to_result = cul1(price, class_);// cul1 함수 호출
    totalPrice = cul2(to_result, sale);// cul2 최종 가격 계산 (세일 적용)

    printf("최종 가격: %.2f\n", totalPrice); // 최종가격 출력

    return 0;
}
// 코딩: 김태범 보조: 이주안, 박지홍, 주서현 
