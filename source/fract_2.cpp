#include <iostream>

float fract(float in_float_number) {
	float result = in_float_number - int(in_float_number);
	return result;
}

int main() {

	float zahl = 5.123f;

	std::cout << "Der Nachkommaanteil von " << zahl << " ist: "
		<< fract(zahl) << std::endl;

	return 0;
}