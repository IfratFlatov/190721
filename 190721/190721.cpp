#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
	Point() { point_x1 = 0; point_y1 = 0; point_x2 = 0; point_y2 = 0; }
	Point(const size_t x1, const size_t y1, const size_t x2, const size_t y2) { point_x1 = x1; point_y1 = y2; point_x2 = x2; point_y2 = y2; }
	void set_points(const size_t x1, const size_t y1, const size_t x2, const size_t y2) { point_x1 = x1; point_y1 = y2; point_x2 = x2; point_y2 = y2; }
	size_t get_points() { return point_x1, point_y1, point_x2, point_y2; }
	void show() {
		cout << "Point x1 = " << point_x1 << endl;
		cout << "Point y1 = " << point_y1 << endl;
		cout << "Point x2 = " << point_x2 << endl;
		cout << "Point y2 = " << point_y2 << endl;
	}
	static float distance(const size_t x1, const size_t y1, const size_t x2, const size_t y2) { return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); }
private:
	size_t point_x1;
	size_t point_y1;
	size_t point_x2;
	size_t point_y2;
};

int main()
{
	Point first(5, 4, 7, 6), second;

	cout << "Distance = " << first.distance(5, 4, 7, 6) << endl;

	return 0;
}
