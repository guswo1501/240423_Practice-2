//���� ������

#include <iostream>

int main()
{
	int num;
	int result;

	std::cout << "���ڸ� �Է����ּ���. \n";
	std::cin >> num;

	result = num % 5;

	result == 0 ? std::cout << num << "�� 5�� ����Դϴ�." : std::cout << num << "�� 5�� ����� �ƴմϴ�.";

	return 0;
}