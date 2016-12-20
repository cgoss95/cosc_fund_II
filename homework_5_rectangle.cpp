// Cecilia Goss

#include <iostream>
#include <string>
using namespace std;

// Structure with rectangle.
struct Rectangle
{
	int length;
	int width;
};

// Gets rectangle info.
void getRectangleInfo(Rectangle x)
{
	cout << "The length of the rectangle is " << x.length << "." << endl;
	cout << "The width of the rectangle is " << x.width << "." << endl;

}

// Puts the length and width of a rectangle into an object.
void populateRectangle(Rectangle &x)
{
	cout << "What is the length of the rectangle? " << endl;
	cin >> x.length;
	cout << "\nWhat is the width of the rectangle? " << endl;
	cin >> x.width;

}


// Creates a rectangle object and returns it.
Rectangle createRectangle()
{
	Rectangle x;
	populateRectangle(x);

	return x;
}

// Main function.
int main()
{
	Rectangle rect = createRectangle();
	getRectangleInfo(rect);

	// Keep window on screen.
	int empty;
	cin >> empty;

	return 0;
}