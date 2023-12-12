#include <iostream>
#include <cmath>
using namespace std;

class Shape{
	protected:
		float area;
		float perimeter;
	public:
		virtual void CalculateArea() = 0;
		virtual void CalculatePerimeter() = 0;

		void display(){
			cout << "Area of the shape : " << area << endl;
			cout << "Perimeter of the shape : " << perimeter << endl;
			return;
		}

};

class Circle : public Shape{
	private:
		float radius;
	public:
		Circle(float r){
			radius=r;
		}

		void CalculateArea() override{
			area=3.14*radius*radius;
		}
		void CalculatePerimeter() override{
			perimeter=2*3.14*radius;
		}
};

class Triangle : public Shape{
	private:
		float side1,side2,side3;
	public:
		Triangle(float a,float b,float c){
			side1=a;
			side2=b;
			side3=c;
		}
		
		void CalculateArea() override{
			float x=(side1 + side2 + side3)/2;
			area=sqrt(x*(x-side1)*(x-side2)*(x-side3));
		}
		void CalculatePerimeter() override{
			perimeter=side1+side2+side3;
		}
};

class Square : public Shape{
	private:
		float side;
	public:
		Square(float r){
			side=r;
		}
		void CalculateArea() override{
			area=side*side;
		}
		void CalculatePerimeter() override{
			perimeter = 4*side;
		}
};


int main() {
    Circle circle(5);
    circle.CalculateArea();
    circle.CalculatePerimeter();
    cout << "Circle : \n" << endl;
    circle.display();

    Triangle triangle(3, 4, 5);
    triangle.CalculateArea();
    triangle.CalculatePerimeter();
    cout << "Triangle : \n" << endl;
    triangle.display();

    Square square(6);
    square.CalculateArea();
    square.CalculatePerimeter();
    cout << "Square : " << endl;
    square.display();


    return 0;
}
