#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

// finish this code; add functions, classes, data as needed

// DrawingShape should be an abstract base class 
// for Circle and Square
class DrawingShape 
{
protected:
	int mX, mY, mSize;
	Color mColor;
	bool mFilled;
public:
	void setFilled(bool filled);
	DrawingShape(int x, int y, int size, Color color_shade);
	virtual void draw(RenderWindow& win) = 0;
};

// add Circle, Square classes below. These are derived from DrawingShape

class Circle : public DrawingShape
{
public:
	Circle(int x, int y, int radius, Color color);
	virtual void draw(RenderWindow& win);
};

class Square : public DrawingShape
{
public:
	Square(int x, int y, int width, Color color);
	virtual void draw(RenderWindow& win);
};


#include "Shape.h"

DrawingShape::DrawingShape(int x, int y, int size, Color color_shade)
{
	mX = x;
	mY = y;
	mSize = size;
	mColor = color_shade;
	mFilled = true;
}

void DrawingShape::setFilled(bool filled)
{
	mFilled = filled;

}

Circle::Circle(int x, int y, int radius, Color color) : DrawingShape(x, y, radius, color)
{

}

Square::Square(int x, int y, int width, Color color) : DrawingShape(x, y, width, color)
{

}






void Circle::draw(RenderWindow& win)
{
	CircleShape blueBtn;	//CircleShape is a Graphics lib class
	Vector2f pos(mX, mY);
	blueBtn.setPosition(pos);
	blueBtn.setRadius(mSize);
	blueBtn.setOutlineThickness(2);
	blueBtn.setOutlineColor(mColor);
	// for just an outlined button
	if (mFilled)
		blueBtn.setFillColor(mColor);
	else
		blueBtn.setFillColor(Color::Transparent);

	// The following renders the circle on the screen
	// win is a RenderWindow (see provided code)
	win.draw(blueBtn);

}

void Square::draw(RenderWindow& win)
{
	RectangleShape squareBtn; // RectangleShape is Graphics lib class
	Vector2f sqPos(mX, mY);
	squareBtn.setPosition(sqPos);
	squareBtn.setOutlineColor(mColor);
	squareBtn.setOutlineThickness(2);
	squareBtn.setSize(Vector2f(mSize, mSize));
	if (mFilled)
		squareBtn.setFillColor(mColor);
	else
		squareBtn.setFillColor(Color::Transparent);
	// renders a RectangleShape
	win.draw(squareBtn);
}


