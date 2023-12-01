#include <iostream>
#include <map>
#include <Windows.h>
#include <limits>
using namespace std;
//task_1
float calcSquare() {
	float b1;
	cout << "b1 = ";
	cin >> b1;
	float b2;
	cout << "b2 = ";
	cin >> b2;
	float h;
	cout << "h = ";
	cin >> h;
	return ((b1 + b2) / 2) * h;
}

//task_2
class Circle {
public:
	const float pi = acos(-1.0);
	float r;
	float calcSquare() {
		cout << "r = ";
		cin >> r;
		return pi*pow(r,2);
	}
	float calcCircumference() {
		return 2 * pi * r;
	}
};

//task_3
class Triangle {
public:
	float a; //leg_1
	float b; //leg_2
	float calcSquare() {
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		return a * b / 2;
	}
	float calcHypotenuse() {
		return sqrt (pow(a, 2) + pow(b, 2));
	}
};

//task_4
int calc() {
	int a{};
	cout <<"Enter number between 1000 and 9999: ";
	cin >> a;
	int sum{};
	if (1000 <= a && a<=9999) {
		for (int i{}; i < sizeof(a); i++) {
			sum += a % 10;
			a = a / 10;
		}
		return sum;
	}
	else {
		cerr << "Error condition";
	}
}

//task_5
void result_5(float x, float y) {
	//r - полярный радиус
	float r = sqrt(pow(x,2)+pow(y,2));
	//f - полярный угол в радианах
	float f = atan(y/x);
	cout << "r = " << r << ";f = " << f;
}

//task_6
void result_6(float r, float f) {
	float x = r * cos(f);
	float y = r * sin(f);
	cout <<"x = "<< x << ";y = "<< y;
}

//task_7
void result_7(double a, double b, double c) {
	if ((pow(b, 2) - 4 * a * c) >= 0) {
		double x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
		double x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
		cout << "x1 = " << x1 << "; x2 = " << x2;
	}
	else {
		cerr << "Error condition";
	}
}

//task_8
void result_8(double a, double b, double c) {
	if (a + b <= c || a + c <= b || b + c <= a) {
		cerr << "Error condition";
	}
	else {
		double m1 = 0.5 * sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2));
		double m2 = 0.5 * sqrt(2 * pow(c, 2) + 2 * pow(a, 2) - pow(b, 2));
		double m3 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
		double r1 = 0.5 * sqrt(2 * pow(m3, 2) + 2 * pow(m2, 2) - pow(m1, 2));
		double r2 = 0.5 * sqrt(2 * pow(m3, 2) + 2 * pow(m1, 2) - pow(m2, 2));
		double r3 = 0.5 * sqrt(2 * pow(m1, 2) + 2 * pow(m2, 2) - pow(m3, 2));
		cout << "median_1 = " << r1 << "; median_2 = " << r2 << "; median_3 = " << r3;
	}

}

//task_9
void result_9(int k) {
	//Как я понял мы рассматриваем перевод в рамках одних сутках, поэтому вводится потолок ограничения в рамках суток
	if (k > 0 && k <= 86400) {
		int hours = k / pow(60, 2);
		int minutes = k % (3600 * hours) / 60;
		cout << hours << "hours " << minutes << "minutes";
	}
	else {
		cerr << "Error condition";
	}
}

//task_10
void result_10(float a,float b, float c) {
	//Условие существования треугольника
	if (a + b <= c || a + c <= b || b + c <= a) {
		cerr << "Error condition"<<endl;
	}
	//Доказываем по определению равнобедреннго треугольника
	else if (a == b || a == c || b == c) {
		cout << "Isosceles triangle" <<endl;
	}
	else {
		cout << "Not isosceles triangle"<<endl;
	}
}

//task_11
void result_11 (float sum){
	if (sum > 1000) 
		cout << "Total sum = " << sum * 0.9 <<" RUB";
	else
		cout << "Total sum without discount = " << sum <<" RUB";
}

//task_12
void result_12(float height,float weight) {
	float formula = height - 100;
	if (weight < formula)
		cout << "You should gain weight";
	else if (weight == formula)
		cout << "You are in ideal condition of weight";
	else
		cout << "You should loose weight"; 
}

//task_13
void result_13() {
	//Генерируем числа от 1 до 9 включительно
	int number1 = 1 + rand() % 9;
	int number2 = 1 + rand() % 9;
	cout <<"Generated numbers = "<< number1 << ", " << number2<<endl;
	int result{};
	cin >> result;
	if (result != number1 * number2) {
		cout << "You are false"<<endl;
	}
	else cout << "You are right"<<endl;
}

//task_14
void result_14(float minutes, int day) {
	if (day > 0 && day <= 7) {
		if (day == 6 || day == 7) {
			cout << "price = " << minutes * 5 * 0.8<<" RUB";
		}
		else {
			cout << "price = " << minutes * 5<<" RUB";
		}
	}
	else {
		cout << "Error condition";
	}
}
//task_15
void result_15(string month) {
	map<std::string, string> months;
	months["1"] = "January" " Winter";
	months["2"] = "February" " Winter";
	months["3"] = "March" " Spring";
	months["4"] = "April" " Spring";
	months["5"] = "May" " Spring";
	months["6"] = "June" "Summer";
	months["7"] = "July" "Summer";
	months["8"] = "August" "Summer";
	months["9"] = "September" "Autumn";
	months["10"] = "October" "Autumn";
	months["11"] = "November" "Autumn";
	months["12"] = "December" " Winter";
	cout << months[month];
}

//task_16
void result_16(int number) {
	int number_array[6]{};
	int sum1{};
	int sum2{};
	for (int i{}; i <= 5; i++) {
		number_array[i] += number % 10;
		number = number / 10;
	}
	for (int i{}; i < 3; i++) {
		sum1 += number_array[i];
	}
	for (int i = 3; i <= 5; i++) {
		sum2 += number_array[i];
	}
	if (sum1 == sum2) {
		cout << "Lucky ticket";
	}
	else
		cout << "Unlucky ticket";
}

//task_17
void result_17(int number) {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		switch (number) {
		case 1:case 21:case 31:case 41:case 51:case 61:case 71:case 81:case 91: cout << number<< " копейка"<<endl;
			break;
		case 2:case 22:case 32:case 42:case 52:case 62:case 72:case 82:case 92:
		case 3:case 23:case 33:case 43:case 53:case 63:case 73:case 83:case 93:
		case 4: case 24:case 34:case 44:case 54:case 64:case 74:case 84:case 94: cout <<number<< " копейки" << endl;
			break;
		default:
			cout << number << " копеек" << endl;
			break;
		}
}

//task_18
void result_18(int number) {
	if (number >= 1000 && number <= 9999) {
		int number_array[4]{};
		for (int i{}; i < 4; i++) {
			number_array[i] += number % 10;
			number = number / 10;
		}
		for (int i{}; i < 4; i++) {
			if (number_array[i] == number_array[i + 3] && number_array[i + 1] == number_array[i + 2]) {
				cout << "Yes it's a palindrome";
			}
			else
				cout << "No it's is not a palindrome";
			break;
		}
	}
	else {
		cerr << "Error condition";
	}
}

//task_19
void result_19(int number, int b) {
	if (number >= 100 && number <= 999) {
		int number_array[3]{};
		int multiply{ 1 };
		int sum{};
		for (int i{}; i < 3; i++) {
			multiply *= number % 10;
			sum += number % 10;
			number = number / 10;
		}
		if (multiply > b) {
			cout << "Yes, multiply of number >" << " b"<<endl;
		}else cout << "No, multiply of number <"<<" b"<< endl;
		
		if (sum % 7 == 0) {
			cout << "Yes, sum : 7 without surplus"<<endl;
		}else cout << "No , sum : 7 with surplus";
	}
	else {
		cerr << "Error condition";
	}
}

void result_20 (float a, float b, float c, float d) {
	(((a <= c) && (b <= d)) || ((a <= d) && (b <= c))) ? cout << "Yes the rectangle with a,b can be replaced in rectangle c,d" : cout<<"No it can't be replaced";
}

void result_21() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//По умолчанию все типы данных уже идут типа signed
	cout << "Тип int занимает в памяти " << sizeof(int) * 8 << " Бита, Диапазон принимаемых значений: " << -pow(2, 8 * sizeof(int)) / 2 << " - " << pow(2, 8 * sizeof(int)) / 2 - 1 << endl;
	cout << "Тип unsigned int занимает в памяти " << sizeof(unsigned int) * 8 << " Бита, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(unsigned int)) - 1 << endl;
	cout << "Тип char занимает в памяти " << sizeof(char) * 8 << " Битов, Диапазон принимаемых значений: " << -pow(2, 8 * sizeof(char)) / 2 << " - " << pow(2, 8 * sizeof(char)) / 2 - 1 << endl;
	cout << "Тип unsigned char занимает в памяти " << sizeof(unsigned char) * 8 << " Битов, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(unsigned char)) - 1 << endl;
	cout << "Тип bool занимает в памяти " << sizeof(bool) * 8 << " Битов, Диапазон принимаемых значений: " << "true" << " - " << "false" << endl;
	cout << "Тип short занимает в памяти " << sizeof(short) * 8 << " Битов, Диапазон принимаемых значений: " << -pow(2, 8 * sizeof(short)) / 2 << " - " << pow(2, 8 * sizeof(short)) / 2 - 1 << endl;
	cout << "Тип unsigned short занимает в памяти " << sizeof(unsigned short) * 8 << " Битов, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(unsigned short)) - 1 << endl;
	cout << "Тип long занимает в памяти " << sizeof(long) * 8 << " Бита, Диапазон принимаемых значений: " << -pow(2, 8 * sizeof(long)) / 2 << " - " << pow(2, 8 * sizeof(long)) / 2 - 1 << endl;
	cout << "Тип unsigned long занимает в памяти " << sizeof(unsigned long) * 8 << " Бита, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(unsigned long)) - 1 << endl;
	cout << "Тип long long занимает в памяти " << sizeof(long long) * 8 << " Бита, Диапазон принимаемых значений: " << -pow(2, 8 * sizeof(long long)) / 2 << " - " << pow(2, 8 * sizeof(long long)) / 2 - 1 << endl;
	cout << "Тип unsigned long long  занимает в памяти " << sizeof(unsigned long long) * 8 << " Бита, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(unsigned long long)) - 1 << endl;
	cout << "Тип double занимает в памяти " << sizeof(double) * 8 << " Бита" << endl;
	cout << "Тип float занимает в памяти " << sizeof(float) * 8 << " Бита"<< endl;
	cout << "Тип wchar_t занимает в памяти " << sizeof(wchar_t) * 8 << " Битов, Диапазон принимаемых значений: " << 0 << " - " << pow(2, 8 * sizeof(wchar_t)) - 1 << endl;

}

int main() {
	/*task_1
	cout << calcSquare();*/

	/*task_2
	Circle circle;
	cout << "Square = " << circle.calcSquare() << endl;
	cout << "Circumference = " << circle.calcCircumference();*/

	/*task_3
	Triangle triangle;
	cout << "Square = " <<triangle.calcSquare()<<endl;
	cout << "Hypotenuse = " << triangle.calcHypotenuse();*/

	/*task_4
	cout << calc();*/

	/*task_5
	result_5(5,3);*/

	/*task_6
	result_6(5, 1);*/

	//task_7
	//В аргументы функции передаются коэффициенты квадратного уравнения
	//result_7(1, 0, -30);

	//task_8
	//результат проверял здесь: http://rcl-radio.ru/?p=100467
	//В аргументе функции передаются стороны треугольника
	//result_8(3,3,1);

	//task_9
	//result_9(3660);

	/*task_10
	В аргументы функции передаются стороны треугольника
	result_10(3, 3, 1);
	result_10(3, 2, 4);*/

	//task_11
	//В аргумент функции передается стоимость покупки
	//result_11(1200);

	/*task_12
	Передаем в аргумент рост, вес
	result_12(182,83);*/

	/*task_13
	result_13();*/

	//task_14
	//Пусть 1 минута стоит 5 рублей
	//В аргумент функции передаем минуты, день недели
	//result_14(13, 6);

	/*task_15
	string month;
	cin >> month;
	result_15(month);*/

	/*task_16
	В аргумент передается шестизначное число
	result_16(416606);*/

	/*task_17
	Вводим стоп код, ибо запускаем цикл while 
	int stop_code = 404;
	int number{};
	while (number != stop_code) {
		cin >> number;
		if (number > 1 && number <= 99) {
			result_17(number);
		}
		else if(number!=404) {
			cerr << "Ошибочное условие";
		}
	} */

	/*task_18
	int number;
	cin >> number;
	В аргумент функции передаем четырехзначное число
	result_18(number);*/

	/*task_19
	В аргумент функции передается трехзначное число, число b
	Функция сначала выполняет условие 19.1, потом выполняет условие 19.2, выводит результат обоих условий
	result_19(707, 35);*/
	
	/*task_20 В аргумент функции передаются стороны a, b, c, d
	result_20(3,4,1,2);*/

	//task_21
	result_21();
}