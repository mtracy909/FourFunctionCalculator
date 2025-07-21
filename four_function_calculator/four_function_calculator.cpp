#include <iostream>
#include <string>
#include <list>
using namespace std;

class Calculator {
public:
	float firstNum;
	float secondNum;
	float result;
	string operation;
	string response;
	list<float> results;
	bool exit;
};

float add(float num1, float num2) {
	return num1 + num2;
}

float subtract(float num1, float num2) {
	return num1 - num2;
}

float multiply(float num1, float num2) {
	return num1 * num2;
}

float divide(float num1, float num2) {
	return num1 / num2;
}

int main()
{
	Calculator myCalculator;
	while (myCalculator.exit != true) {
		cout << "What operation would you like to perform [add, subtract, multiply, divide]? ";
		cin >> myCalculator.operation;
		if (myCalculator.operation == "add") {
			cout << "Please enter the first number to be added: ";
			cin >> myCalculator.firstNum;
			cout << "Please enter the second number to be added: ";
			cin >> myCalculator.secondNum;
			myCalculator.result = add(myCalculator.firstNum, myCalculator.secondNum);
			cout << "The result of your operation is: " << myCalculator.result;
			myCalculator.results.push_back(myCalculator.result);
		}
		else if (myCalculator.operation == "subtract") {
			cout << "Please enter the number to be subtracted from: ";
			cin >> myCalculator.firstNum;
			cout << "Please enter the number to be subtracted: ";
			cin >> myCalculator.secondNum;
			myCalculator.result = subtract(myCalculator.firstNum, myCalculator.secondNum);
			cout << "The result of your operation is: " << myCalculator.result;
			myCalculator.results.push_back(myCalculator.result);
		}
		else if (myCalculator.operation == "multiply") {
			cout << "Please enter the first number to be multiplied: ";
			cin >> myCalculator.firstNum;
			cout << "Please enter the second number to be multiplied: ";
			cin >> myCalculator.secondNum;
			myCalculator.result = multiply(myCalculator.firstNum, myCalculator.secondNum);
			cout << "The result of your operation is: " << myCalculator.result;
			myCalculator.results.push_back(myCalculator.result);
		}
		else if (myCalculator.operation == "divide") {
			cout << "Please enter the dividend: ";
			cin >> myCalculator.firstNum;
			cout << "Please enter the divisor: ";
			cin >> myCalculator.secondNum;
			myCalculator.result = divide(myCalculator.firstNum, myCalculator.secondNum);
			cout << "The result of your operation is: " << myCalculator.result;
			myCalculator.results.push_back(myCalculator.result);
		}
		else {
			cout << "That was not a valid operation.";
		}
		cout << "\nWould you like to perform another operation [y/n]? ";
		cin >> myCalculator.response;
		if (myCalculator.response == "y") {
			myCalculator.exit = false;
		}
		else if (myCalculator.response == "n") {
				myCalculator.exit = true;
		}
		else {
			cout << "That was not a valid response. Exiting the program.";
			myCalculator.exit = true;
		}
	}
	cout << "The results of your operations in this session are:\n";
	for (float result : myCalculator.results) {
		cout << result << "\n";
	}
	return 0;
}