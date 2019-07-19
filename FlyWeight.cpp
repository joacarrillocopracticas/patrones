#include<iostream>

using namespace std;

class Point
{
	
	public:

	Point( int _x ) : x ( _x ) { };

	void report( int y )
	{
		cout << x << " "<< y << endl;
	}

	private:

	int x;

};


class Factory
{

	public:

	static Point * getPoint(int x)
	{
		if( points[x] == NULL )
			points[x] = new Point(x);
		return points[x];
	}

	private:
	
	static Point * points[];
};

Point * Factory::points[] = { 0,0,0,0,0,0 };

int main()
{
	
	for( int i = 0; i < 6; ++ i )
		for( int j = 0; j < 6; ++ j )
			Factory::getPoint(i)->report(j);

	return 0;
}
