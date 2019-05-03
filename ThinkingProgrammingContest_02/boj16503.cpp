/* BOJ 16503��
 * ��ȣ ���� ��Ģ����
 * +, -, *, / �� �켱���� ����
 * ������ �ΰ��� ����� ũ�� ������ ���
 *
 */

#include<iostream>
using namespace std;

int operate(int num1, int num2, char op);
void printIncreasingOrder(int num1, int num2);

int main(void) { //void main���� ����
	int inputNum1, inputNum2, inputNum3;
	char inputOp1, inputOp2;
	int output1, output2;

	//K1 O1 K2 O2 K3 ���·� �Է¹���
	cin >> inputNum1 >> inputOp1 >> inputNum2 >> inputOp2 >> inputNum3;
	
	output1 = operate(operate(inputNum1, inputNum2, inputOp1), inputNum3, inputOp2);
	output2 = operate(inputNum1, operate(inputNum2, inputNum3, inputOp2), inputOp1);

	printIncreasingOrder(output1, output2);

	return 0;
}
int operate(int num1, int num2, char op) {
	switch (op) {
	case '+':
		return num1 + num2;

	case '-':
		return num1 - num2;

	case '*':
		return num1 * num2;

	case '/':
		return num1 / num2;

	default:
		return 0;
	}
}
void printIncreasingOrder(int num1, int num2) {
	if (num1 < num2) {
		cout << num1 << "\n" << num2;
	}
	else {
		cout << num2 << "\n" << num1;
	}
}