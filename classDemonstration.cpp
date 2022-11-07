// This program demonstrates a simple class.

#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

//***************************************************************
// setWidth assigns a value to the width member.
//***************************************************************

void Rectangle::setWidth(double w)
{
    width = w;
}

//***************************************************************
// setLength assigns a value to the width member.
//***************************************************************

void Rectangle::setLength(double len)
{
    length = len;
}

//***************************************************************
// getWidth returns the value in the width memeber.
//***************************************************************

double Rectangle::getWidth() const
{
    return width;
}

//***************************************************************
// getLength returns the value in the length memeber.
//***************************************************************
double Rectangle::getLength() const
{
    return length;
}

//***************************************************************
// getArea returns the product of width times length.
//***************************************************************

double Rectangle::getArea() const
{
    return width * length;
}

//***************************************************************
// Function main
//***************************************************************

int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;
    double word;

    cout << "This will calculate the area of a\n";
    cout << "rectangle. What is the width? ";

    cin >> rectWidth;
    cout << "What is the length?";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangle with thes data: \n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    cin >> word;
    // system("pause");
    return 0;
}