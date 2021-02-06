#include "Circle.h"
#include "Cylinder.h"
#include <iostream>
#include <vector>

void testCircle() {
    // create two circles
    Circle *c1 = new Circle(2); // allocate memory to a circle
    Circle *c2 = new Circle();
    c2->setRadius(6);

    // dereference a Circle object and print a circle object using the overloaded operator <<
    cout << *c1;
    cout << *c2;
    cout << " the sum of the two circles is: " << (*c1 + *c2);
    delete c1; // de-allocate (release) the memory pointed by c1
    delete c2; // de-allocate (release) the memory pointed by c2
}

void CreateCircleVector() {
    // uses the build in vector class as a container for a set

    // define the vector
    vector<Circle *> circleList(5); // vector of 5 circle pointers

    // create the circle object and insert their pointers into the vector
    for (int i = 0; i < 5; i++) {
        circleList[i] = new Circle(2 * i + 5); // allocates memory
    }
    cout << circleList.size() << " Circles have been found into the ";
    for (int i = 0; i < 5; i++) {
        cout << *circleList[i] << "\n";
        if (circleList[i]->getRadius() > 10) {
            cout << " Big Circle \n";
        }
    }
    for (int i = 0; i < 5; i++){
        delete circleList[i]; // deallocate memory
    }
}

void createCircleInStack(){
    Circle var1; // allocate memory to a circle in the stack
    var1.setRadius(10);
    cout << "A circle from the stack: " << var1;
}

void testPolymorphism(){
    Circle *c1 = new Circle(5);
    Cylinder *cy = new Cylinder(5, 5);
    cout << "the area of the circle is: " << c1->getArea();
    cout << "the area of the cylinder is: " << cy->getArea();
    cout << *c1;
    cout << *cy;
}

int main() {
//    testCircle();
//    CreateCircleVector();
//    createCircleInStack();
    testPolymorphism();

//    system("pause");
}
