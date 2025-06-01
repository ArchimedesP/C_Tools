

#pragma once

// contains my custom drawing commands for winapi graphics


struct frameStruct {
	int width;
	int height;
	int* pixels;
};


void frame_DrawText(struct frameStruct* frame, int x1, int y1, char text[], int text_xScale, int text_yScale, int color);

void frame_DrawLine(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color);

void frame_DrawLineModulus(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color);

void frame_DrawLineA(struct frameStruct* frame, int x1, int y1, int dist, double angle, int color);

void frame_DrawRect(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color);

void frame_DrawRectFilled(struct frameStruct* frame, int x1, int y1, int x2, int y2, int color);

void frame_DrawRectA(struct frameStruct* frame, int xAnchor, int yAnchor, int horizontalShift, int verticalShift, double angle, int width, int height, int color);

void frame_DrawRectAFilled(struct frameStruct* frame, int xAnchor, int yAnchor, int horizontalShift, int verticalShift, int angle, int width, int height, int color);

void frame_DrawCircleFilled(struct frameStruct* frame, int x1, int y1, int radius, int color);

void frame_DrawTriangleFilled(struct frameStruct* frame, int x1, int y1, int x2, int y2, int x3, int y3, int color);