

#pragma once

#include "Drawing.h"
#include "Util.h"


int text_bitmap[128][25] = {

	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	//space
	{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },	//!
	{0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	//"
	{0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0 },	//#
	{0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },	//$
	{0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, },	//%
	{0, 0, 1, 0, 0,	0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, },	//&
	{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	//'
	{0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, },	//(
	{0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, },	//)
	{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, },	//*
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, },	//+
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },	//,
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },	//-
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },	//.
	{0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, },	//slash (/)

	{0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0 },	//0
	{0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0 },	//1
	{0, 1, 1, 0, 0,	0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, },	//2
	{0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0 },	//3
	{0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, },	//4
	{0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, },	//5
	{ 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 },	//6
	{0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, },	//7
	{0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 },	//8
	{0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },	//9

	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },	//:
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },	//;
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },	//<
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },	//=
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },	//>
	{0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },	//?
	{0, 1, 1, 1, 0,	1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0 },	//@

	{0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, },	//A
	{1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, },	//B
	{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, },	//C
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, },	//D
	{1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, },	//E
	{1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, },	//F
	{0, 1, 1, 1, 1,	1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//G	
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, },	//H
	{1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, },	//I
	{1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//J
	{1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, },	//K
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, },	//L
	{1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, },	//M
	{1, 0, 0, 0, 1,	1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, },	//N
	{0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//O
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, },	//P
	{0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, },	//Q
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, },	//R
	{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, },	//S
	{1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, },	//T
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//U
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, },	//V
	{1, 0, 0, 0, 1,	1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, },	//W
	{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, },	//X
	{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, },	//Y
	{1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, },	//Z

	{0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0 },	//[
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, },	//backslash (\)
	{0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },	//]
	{0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	//^
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1 },	//_
	{0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },	//`

	{0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, },	//a
	{1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, },	//b
	{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, },	//c
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, },	//d
	{1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, },	//e
	{1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, },	//f
	{0, 1, 1, 1, 1,	1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//g	
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, },	//h
	{1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, },	//i
	{1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//j
	{1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, },	//k
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, },	//l
	{1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, },	//m
	{1, 0, 0, 0, 1,	1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, },	//n
	{0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//o
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, },	//p
	{0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, },	//q
	{1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, },	//r
	{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, },	//s
	{1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, },	//t
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, },	//u
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0 },	//v
	{1, 0, 0, 0, 1,	1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0 },	//w
	{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1 },	//x
	{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },	//y
	{1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1 },	//z

	{0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0 },	//{
	{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },	//|
	{0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },	//}
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }	//~

};


void frame_DrawText(struct frameStruct* frame, int x1, int y1, char text[], int text_xScale, int text_yScale, int color, float transparency) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	int letter_spacing = 2;

	if (text_xScale < 0) {
		text_xScale = 2;
	};

	if (text_yScale < 0) {
		text_yScale = text_xScale;
	};


	letter_spacing = 1;

	int letter_width = 5;	// these stay constant
	int letter_height = 5;

	int letter_id = 0;
	int letter_line = 0;
	int letter_column = -1;

	int text_length = text_GetSize(text);

	for (int letter = 0; letter < text_length; letter++) {

		letter_id = (int)(text[letter]) - 32;
		letter_line = 0;
		letter_column = -1;

		for (int i = 0; i < (letter_width * letter_height); i++) {

			if (text[letter] == 0) {
				continue;
			};

			letter_column++;

			if (letter_column >= 5) {
				letter_line++;
				letter_column = 0;
			};

			if (!text_bitmap[letter_id][i]) {
				continue;
			};


			int x = x1;
			x += letter_column * text_xScale;	// small rectangles
			x += letter * (letter_width + letter_spacing) * text_xScale;	// letter x position

			for (int sX = 0; sX < text_xScale; sX++) {

				x++;

				if (x < 0 || x >= frame->width) {
					continue;
				};

				for (int sY = 0; sY < text_yScale; sY++) {

					int y = y1;
					y += (letter_height * text_yScale) - (letter_line * text_yScale + sY);	// flip upside down
					y -= letter_height * text_yScale;	// shift down

					if (y < 0 || y >= frame->height) {
						continue;
					};

					frame->pixels[y * frame->width + x] = (RGB_BLEND(color, frame->pixels[y * frame->width + x], (int)((1 - transparency) * 100)));

				};

			};



		};

	};

	return;
};


void frame_DrawLine(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	int deltaX = x2 - x1;
	int deltaY = y2 - y1;

	if ((deltaX == 0) && (deltaY == 0)) { //if given a point
		return;
	};

	double tIncrement = 1.0 / sqrt((deltaX * deltaX) + (deltaY * deltaY));

	//t goes from 0 - 1; 1 is endpoint
	for (double t = 0; t <= 1; t += tIncrement) {

		int x = (int)(x1 + deltaX * t);
		int y = (int)(y1 + deltaY * t);

		if ((x <= 0) || (x >= frame->width)) {
			continue;
		};

		if ((y <= 0) || (y >= frame->height)) {
			continue;
		};

		frame->pixels[y * frame->width + x] = color;

	};

	return;
}


// draw a line, but looped back if passes boundary
void frame_DrawLineModulus(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	int deltaX = x2 - x1;
	int deltaY = y2 - y1;

	if ((deltaX == 0) && (deltaY == 0)) { //if given a point
		return;
	};

	double tIncrement = 1.0 / sqrt((deltaX * deltaX) + (deltaY * deltaY));

	//t goes from 0 - 1; 1 is endpoint
	for (double t = 0; t <= 1; t += tIncrement) {

		int x = (int)(x1 + deltaX * t);
		int y = (int)(y1 + deltaY * t);

		if (x < 0) {
			x += frame->width;
		};

		if (y < 0) {
			y += frame->height;
		};

		frame->pixels[(y % frame->height) * frame->width + (x % frame->width)] = color;

	};

	return;
}


void frame_DrawLineA(struct frameStruct* frame, int x1, int y1, int dist, double angle, int color) {

	int deltaX = dist * cos(angle * 3.14 / 180);
	int deltaY = dist * sin(angle * 3.14 / 180);

	frame_DrawLine(frame, x1, y1, x1 + deltaX, y1 + deltaY, color);

	return;
}


void frame_DrawRect(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color) {

	frame_DrawLine(frame, x1, y1, x2, y1, color);
	frame_DrawLine(frame, x2, y1, x2, y2, color);
	frame_DrawLine(frame, x2, y2, x1, y2, color);
	frame_DrawLine(frame, x1, y1, x1, y2, color);

	return;
}


void frame_DrawRectFilled(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color, float transparency) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	if (x1 > x2) {
		int temp = x1;
		x1 = x2;
		x2 = temp;
	};

	if (y1 > y2) {
		int temp = y1;
		y1 = y2;
		y2 = temp;
	};

	for (int x = x1; x < x2; x++) {

		if (x < 0 || x >= frame->width) {
			continue;
		};

		for (int y = y1; y < y2; y++) {

			if (y < 0 || y >= frame->height) {
				continue;
			};

			frame->pixels[y * frame->width + x] = (RGB_BLEND(color, frame->pixels[y * frame->width + x], (int)((1 - transparency) * 100)));

		};

	};

	return;
};


void frame_DrawRectA(struct frameStruct* frame, int xAnchor, int yAnchor, int horizontalShift, int verticalShift, double angle, int width, int height, int color) {

	int x1 = xAnchor + horizontalShift * cos((angle - 90) * 3.14 / 180) + verticalShift * cos(angle * 3.14 / 180);
	int y1 = yAnchor + horizontalShift * sin((angle - 90) * 3.14 / 180) + verticalShift * sin(angle * 3.14 / 180);

	int x2 = x1 + height * cos(angle * 3.14 / 180);
	int y2 = y1 + height * sin(angle * 3.14 / 180);

	int x4 = x1 + width * cos((angle - 90) * 3.14 / 180);
	int y4 = y1 + width * sin((angle - 90) * 3.14 / 180);

	int x3 = x1 + height * cos(angle * 3.14 / 180) + width * cos((angle - 90) * 3.14 / 180);
	int y3 = y1 + height * sin(angle * 3.14 / 180) + width * sin((angle - 90) * 3.14 / 180);

	frame_DrawLine(&frame, x1, y1, x2, y2, color);
	frame_DrawLine(&frame, x2, y2, x3, y3, color);
	frame_DrawLine(&frame, x3, y3, x4, y4, color);
	frame_DrawLine(&frame, x4, y4, x1, y1, color);

	return;
};


void frame_DrawRectAFilled(struct frameStruct* frame, int xAnchor, int yAnchor, int horizontalShift, int verticalShift, int angle, int width, int height, int color) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	if (angle == 90) {
		frame_DrawRectFilled(frame, xAnchor + horizontalShift, yAnchor + verticalShift, xAnchor + width + horizontalShift, yAnchor + height + verticalShift, color, 0);
		return;
	};

	if (angle == 270) {
		frame_DrawRectFilled(frame, xAnchor - horizontalShift, yAnchor - verticalShift, xAnchor - width - horizontalShift, yAnchor - height - verticalShift, color, 0);
		return;
	};

	int x1 = xAnchor + horizontalShift * cos((angle - 90) * 3.14 / 180) + verticalShift * cos(angle * 3.14 / 180);
	int y1 = yAnchor + horizontalShift * sin((angle - 90) * 3.14 / 180) + verticalShift * sin(angle * 3.14 / 180);

	int x3 = x1 + height * cos(angle * 3.14 / 180) + width * cos((angle - 90) * 3.14 / 180);
	int y3 = y1 + height * sin(angle * 3.14 / 180) + width * sin((angle - 90) * 3.14 / 180);

	int angle1 = NormalizeAngle(angle);
	int angle2 = NormalizeAngle(angle - 90);

	int angle3 = NormalizeAngle(angle + 180);
	int angle4 = NormalizeAngle(angle + 90);

	int longestSide = height;
	if (width > height) {
		longestSide = width;
	};

	for (int x = x1 - longestSide * 1.5; x < x1 + longestSide * 1.5; x++) {

		if (x < 0 || x >= frame->width) {
			continue;
		};

		for (int y = y1 - longestSide * 1.5; y < y1 + longestSide * 1.5; y++) {

			if (y < 0 || y >= frame->height) {
				continue;
			};

			int fill = 1;
			int pointAngle = NormalizeAngle(DeltasToDegrees(x - x1, y - y1));

			if (pointAngle < angle1 != pointAngle < angle2) {
				fill = -1;
			};

			if (NormalizeAngle(angle) >= 90) {
				fill *= -1;
			};

			if (fill == -1) {
				continue;
			};

			fill = 1;
			pointAngle = NormalizeAngle(DeltasToDegrees(x - x3, y - y3));

			if (pointAngle <= angle3 == pointAngle <= angle4) {
				fill = -1;
			};

			if (NormalizeAngle(angle3) < 90) {
				fill *= -1;
			};

			if (fill == -1) {
				continue;
			};

			frame->pixels[y * frame->width + x] = color;

		};

	};

	return;
};


void frame_DrawCircleFilled(struct frameStruct* frame, int x1, int y1, int radius, int color, float transparency) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	for (int x = x1 - radius; x < x1 + radius; x++) {

		if (x < 0 || x >= frame->width) {
			continue;
		};

		for (int y = y1 - radius; y < y1 + radius; y++) {

			if ((y < 0) || (y >= frame->height)) {
				continue;
			};

			// (y-h)^2 + (x-h)^2 = r^2
			if (sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1)) > radius) {
				continue;
			};

			frame->pixels[y * frame->width + x] = (RGB_BLEND(color, frame->pixels[y * frame->width + x], (int)((1 - transparency) * 100)));

		};

	};

	return;
}


void frame_DrawSemiCircleFilled(struct frameStruct* frame, int x1, int y1, int radius, int sliceAngle, int angle, int color, float transparency) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	sliceAngle /= 2;
	int angle1 = angle - sliceAngle;
	int angle2 = angle + sliceAngle;

	angle1 = NormalizeAngle(angle1);
	angle2 = NormalizeAngle(angle2);

	int flip = 0;
	if (angle2 < sliceAngle * 2) {
		flip = 1;
	};

	for (int x = x1 - radius; x < x1 + radius; x++) {

		if (x < 0 || x >= frame->width) {
			continue;
		};

		for (int y = y1 - radius; y < y1 + radius; y++) {

			if ((y < 0) || (y >= frame->height)) {
				continue;
			};

			// (y-h)^2 + (x-h)^2 = r^2
			if (sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1)) > radius) {
				continue;
			};

			int ang = DeltasToDegrees(x - x1, y - y1);
			ang = NormalizeAngle(ang);

			if (flip && !((ang < angle1) == (ang < angle2))) {
				continue;
			};

			if (!flip && (ang < angle1) == (ang < angle2)) {
				continue;
			};

			frame->pixels[y * frame->width + x] = (RGB_BLEND(color, frame->pixels[y * frame->width + x], (int)((1 - transparency) * 100)));

		};

	};

	return;
};


void frame_DrawTriangleFilled(struct frameStruct* frame, int x1, int y1, int x2, int y2, int x3, int y3, int color) {

	if (color < 0) {
		color = 0x00FFFFFF;
	};

	/*
	if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || x3 < 0 || y3 < 0) {		// if out of bounds
		return;
	};
	if (x1 >= frame->width || y1 >= frame->height || x2 >= frame->width || y2 >= frame->height || x3 >= frame->width || y3 >= frame->height) {
		return;
	};*/

	if (y1 == y2 || y1 == y3 || y2 == y3) {	// smooth out straight lines
		y1++;
	};
	if (x1 == x2 || x1 == x3 || x2 == x3) {
		x1++;
	};

	int startX = x1;
	if (x2 < startX) {
		startX = x2;
	};
	if (x3 < startX) {
		startX = x3;
	};

	int endX = x1;
	if (x2 > endX) {
		endX = x2;
	};
	if (x3 > endX) {
		endX = x3;
	};

	int startY = y1;
	if (y2 < startY) {
		startY = y2;
	};
	if (y3 < startY) {
		startY = y3;
	};

	int endY = y1;
	if (y2 > endY) {
		endY = y2;
	};
	if (y3 > endY) {
		endY = y3;
	};

	float angle1 = DeltasToDegrees(x2 - x1, y2 - y1);
	float angle2 = DeltasToDegrees(x3 - x1, y3 - y1);

	angle1 = NormalizeAngle(angle1);
	angle2 = NormalizeAngle(angle2);

	int flip1 = 0;
	if (abs(angle2 - angle1) > 180 ) {
		flip1++;
	};

	float angle3 = DeltasToDegrees(x1 - x2, y1 - y2);
	float angle4 = DeltasToDegrees(x3 - x2, y3 - y2);
	
	angle3 = NormalizeAngle(angle3);
	angle4 = NormalizeAngle(angle4);

	int flip2 = 0;
	if (abs(angle4 - angle3) > 180) {
		flip2++;
	};

	for (int x = startX; x < endX; x++) {

		if (x < 0 || x >= frame->width) {
			continue;
		};

		for (int y = startY; y < endY; y++) {

			if (y < 0 || y >= frame->height) {
				continue;
			};

			float angle = DeltasToDegrees(x - x1, y - y1);
			angle = NormalizeAngle(angle);

			if (flip1 && !((angle < angle1) == (angle < angle2))) {
				continue;
			};
			if (!flip1 && (angle < angle1) == (angle < angle2)) {
				continue;
			};

			angle = DeltasToDegrees(x - x2, y - y2);
			angle = NormalizeAngle(angle);

			if (flip2 && !((angle < angle3) == (angle < angle4))) {
				continue;
			};
			if (!flip2 && (angle < angle3) == (angle < angle4)) {
				continue;
			};

			frame->pixels[y * frame->width + x] = color;

		};

	};	

	return;

};
