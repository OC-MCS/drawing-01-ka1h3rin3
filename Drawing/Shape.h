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



