/*******************************************************************************
* eyes.exe  Flicker-free, mouse-following, customizably-colored eyes.
* Copyright (C) 1998 Grant Macklem
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
* You may contact me, the author by emailing Grant.Macklem@Colorado.EDU
*******************************************************************************/

#include "graphics.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h>                      // Provides toupper

using namespace std;
#include "Point3D.h"
#include "Segment.h"
#include "Circle.h"
#include "Ray.h"
#include "Line.h"
#include "Square.h"
#include "MyRectangle.h"
#include "Parallelogram.h"

int main()
{
	initwindow(600, 600, "First Sample");  // window size
	
	int midx = getmaxx() / 2, midy = getmaxy() / 2;

	Point Ps[2] = { {200,200},{500,200} };

	Point Ps2[4] = { {200,100},{250,450},{500,100},{550,450} };

	Point P(getmaxx() / 2, getmaxy() / 2);

	Circle cir("Circle", P, 200, COLOR(255,255,0), SLASH_FILL);
	
	Segment seg("Segment", Ps, COLOR(255, 100, 100));
	
	MyRectangle rec(Ps2, "Rectangle", COLOR(0, 255, 255), HATCH_FILL);

	Square sqr(Ps2, "Sqaureee", COLOR(255, 0, 255), CLOSE_DOT_FILL);

	Parallelogram par(Ps2, "Prallelogram", COLOR(255, 255, 0), CLOSE_DOT_FILL);

	Shape& C = par;


	C.Print();

	C.Draw();

										   
	


	//Shape ** AllShapes;
	//ifstream Rdr("Shapes.txt");
	//int NOS, sid;
	//Rdr >> NOS;
	//AllShapes = new Shape*[NOS];
	//for (int t = 1; t <= NOS; t++)
	//{
	//	Rdr >> sid;
	//	switch (sid)
	//	{
	//	case 1:  // Point 2 D
	//	{
	//		int x, y;
	//		Rdr >> x >> y;	 
	//		AllShapes[t - 1] = new Point("Point2D", x, y);
	//	}
	//	break;

	//	case 4:  // Segment  
	//	{
	//		int x, y;
	//		Rdr >> x >> y;
	//		Point P1("Point2D", x, y);
	//		Rdr >> x >> y;
	//		Point P2("Point2D", x, y);
	//		Point Ps[2] = { P1, P2 };
	//		AllShapes[t - 1] = new Segment("Segment", Ps);
	//	}
	//	break;
	//
	//	case 7:  // Circle 
	//	{
	//		int x, y, r;
	//		Rdr >> x >> y >> r;
	//		Point P("Point2D", x, y);
	//		AllShapes[t - 1] = new Circle("Circle", P, r);
	//	}

	//	break;

	//	}

	//	
	//}

	//for (int t = 0; t < NOS; t++)
	//{
	//	AllShapes[t]->Draw();
	//	getch();   /* wait for a key */
	//	cleardevice();   /* clear the screen */
	//}

	//while (!kbhit());

	getch();
}


