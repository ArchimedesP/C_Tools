

#include "Util.h"


void text_ClearString(char string[]) {

	for (int i = 0; i < string_maxLength; i++) {
		string[i] = 0;
	};

	return;
}


int text_GetSize(char string[]) {

	int size = 0;
	for (int i = 0; i < string_maxLength; i++) {

		if (string[i] == 0) {
			size = i;
			break;
		};

	};

	return (size);
}


void text_AppendString(char string1[], char string2[]) {

	if (string_maxLength < 0) {
		return;
	};

	int iEnd = 0;
	for (int i = 0; i < string_maxLength; i++) {

		if (!string1[i]) {
			iEnd = i;
			break;
		};

	};

	if (string_maxLength <= 0) {
		iEnd = 0;
	};

	for (int i = 0; i < string_maxLength; i++) {

		if (string_maxLength == 1) {
			string1[iEnd + i] = string2;
			continue;
		};

		if (string2[i] == 0) {	//when string2 over
			break;
		};

		string1[iEnd + i] = string2[i];

	};

	return;
}


void text_AppendInt(char string[], int num) {

	int iEnd = 0;
	for (int i = 0; i < string_maxLength; i++) {

		if (!string[i]) {
			iEnd = i;
			break;
		};

	};

	if (num == 0) {
		string[iEnd] = '0';
		return;
	};

	int num_length = 0;
	int tempNum = abs(num);

	while (tempNum > 0) {

		num_length++;
		tempNum /= 10;

	};

	if (num < 0) {
		string[iEnd] = '-';
		iEnd++;
	};

	num = abs(num);

	for (int i = num_length - 1; i >= 0; i--) {

		string[iEnd + i] = (char)(num % 10 + 48);

		num /= 10;
	};

	return;
}


void text_AppendDouble(char string[], double num) {

	text_AppendInt(string, num);
	text_AppendString(string, ".");
	text_AppendInt(string, abs((num - (int)(num)) * 1000));	// decimals

	return;
}


double NormalizeAngle(double angle) {

	while (angle >= 360) {
		angle -= 360;
	};

	while (angle < 0) {
		angle += 360;
	};

	return angle;
}


double DeltasToDegrees(double deltaX, double deltaY) {

	if (deltaX == 0 && deltaY == 0) {
		return -1;
	};

	if (deltaY == 0 && deltaX > 0) {
		return 0;
	};

	if (deltaY == 0 && deltaX < 0) {
		return 180;
	};

	if (deltaX == 0 && deltaY > 0) {
		return 90;
	};

	if (deltaX == 0 && deltaY < 0) {
		return 270;
	};

	double angle = atan(deltaY / deltaX) * 180 / 3.14;
	if (deltaX < 0 && deltaY < 0) {	//Quadrant III
		return angle + 180;
	};

	if (deltaX < 0 && deltaY > 0) {	//Quadrant I
		return angle + 180;
	};

	return angle;
}

//					   plrX, plrY, plrAngle, 2nd line data is all the rest
int util_CollisionDist(int plrX, double plrY, double plrAngle, int x1, int y1, int x2, int y2, int* pX, int* pY) {

	double deltaX1 = cos(plrAngle * 3.14 / 180);
	double deltaY1 = sin(plrAngle * 3.14 / 180);

	double deltaX2 = x2 - x1;
	double deltaY2 = y2 - y1;

	double v = (deltaX1 * (y1 - plrY) + (deltaY1) * (plrX - x1)) / ((deltaY1 * deltaX2) - (deltaX1 * deltaY2));

	double u = x1 - 1 + (deltaX2 * v);

	if (deltaX1 != 0) {
		u = ((x1 - plrX) + (deltaX2 * v)) / (deltaX1);
	};

	double pointX = (int)(x1 + deltaX2 * v);
	double pointY = (int)(y1 + deltaY2 * v);

	if (((pointY < y1) == (pointY < y2)) && ((pointX < x1) == (pointX < x2))) {	// if outside of line
		*pX = -1;
		*pY = -1;
		return -1;
	};

	if ((u <= 0) || (v <= 0)) {
		*pX = -1;
		*pY = -1;
		return -1;
		// return -1;
	};

	*pX = (int)(pointX);
	*pY = (int)(pointY);

	//return (sqrt(((pointX - plrX) * (pointX - plrX)) + ((pointY - plrY) * (pointY - plrY))));
};
