#include "Trapezium.h"


float slope(const Point& a, const Point& b)
{
	float m = a.getY() - b.getY();
	m /= (a.getX() - b.getX());
	return m;
}

void Trapezium::updateLengths()
{
	int opPoints[4]{};
	this->oppositePoints(opPoints);
	
	//Slopes of a nd c from b and d.
	float m_ab = slope(this->Ps[opPoints[0]], this->Ps[opPoints[2]]);
	float m_ad = slope(this->Ps[opPoints[0]], this->Ps[opPoints[3]]);

	float m_cb = slope(this->Ps[opPoints[1]], this->Ps[opPoints[2]]);
	float m_cd = slope(this->Ps[opPoints[1]], this->Ps[opPoints[3]]);

	if (m_ab == m_cb)
	{

	}
	else if (m_ab == m_cd)
	{

	}
	else if (m_ad == m_cb)
	{

	}
	else if (m_ad == m_cd)
	{

	}
}

void Trapezium::updateArea()
{

}