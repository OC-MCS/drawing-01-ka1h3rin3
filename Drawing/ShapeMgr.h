#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Shape.h"

using namespace std;
using namespace sf;

// finish the ShapeMgr class.

class ShapeMgr
{
private:
	vector<DrawingShape*> mShapes;
	
public:
	ShapeMgr()
	{
		
	}

	void addShape(Vector2f pos, ShapeEnum whichShape, Color color)
	{
		if (whichShape == CIRCLE)
			mShapes.push_back(new Circle(pos.x, pos.y, 20, color));
		else if (whichShape == SQUARE)
			mShapes.push_back(new Square(pos.x, pos.y, 20, color));

	}
	vector<DrawingShape*>& getShapes()
	{
		return mShapes;
	}

};
