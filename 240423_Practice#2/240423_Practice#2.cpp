//삼항 연산자

#include <iostream>

int main()
{
	int num;
	int result;

	std::cout << "숫자를 입력해주세요. \n";
	std::cin >> num;

	result = num % 5;

	result == 0 ? std::cout << num << "는 5의 배수입니다." : std::cout << num << "는 5의 배수가 아닙니다.";

	return 0;
}