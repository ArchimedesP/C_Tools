#pragma once

#pragma once

#include <Math.h>

// contains functions for string manipulation

#define string_maxLength 100

void text_ClearString(char string[]);

int text_GetSize(char string[]);

int text_StringToInt(char string[]);

void text_AppendString(char string1[], char string2[]);

void text_AppendChar(char string1[], char char1);

void text_AppendInt(char string[], int num);

void text_AppendDouble(char string[], double num);

double NormalizeAngle(double angle);

double DeltasToDegrees(double deltaX, double deltaY);

int util_CollisionDist(int plrX, double plrY, double plrAngle, int x1, int y1, int x2, int y2, int* pX, int* pY);
