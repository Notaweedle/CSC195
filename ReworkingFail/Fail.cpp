#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Recteangle.h"

using namespace std;




int main() {
    vector<Shape*> shapes;

    Circle* c =  new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

	shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        
        cout << "Shape: " << i + 1 << endl;
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius

        Circle* circle = dynamic_cast<Circle*>(shapes[i]);
        if (circle)
        {
            std::cout << "Radius: " << circle->GetRadius()<<endl;
        }

        cout << endl;
        delete shapes[i];
        shapes[i] = nullptr;
    }
    shapes.clear();
    

    // FIXME: Getting memory leak! Delete all shapes.

    return 0;
}
