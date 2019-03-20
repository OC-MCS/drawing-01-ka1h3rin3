#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "ShapeMgr.h"
#include "Shape.h"

// finish this code; add functions, data as needed

class DrawingUI
{
private:

public:
	DrawingUI(Vector2f p)
	{
	}
	void die(string msg)
	{
		cout << msg << endl;
		exit(-1);
	}
	void draw(RenderWindow& win, ShapeMgr *mgr)
	{
		vector<DrawingShape*> shapes = mgr->getShapes();

		for (int count = 0; count < shapes.size(); count++)
		{
			shapes[count]->draw(win);
		}
		
		// MAIN MENU
		DrawingShape* c1 = new Circle(15, 30, 12, Color::Red);
		DrawingShape* s1 = new Square(50, 75, 12, Color::Blue);
		c1->draw(win);
		s1->draw(win);
		delete c1;
		delete s1;
		Font font;
		if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
			die("couldn't load font");

		// title
		Text title("Drawing Color", font, 25);
		title.setPosition(30, 25);
		win.draw(title);


	}
	
	bool isMouseInCanvas(Vector2f mousePos)
	{
		return true; // just to make it compile
	}

};

