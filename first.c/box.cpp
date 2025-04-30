#include <iostream>
using namespace std;

class Box {
private:
    // Private member variables for dimensions
    double length;
    double width;
    double height;

public:
    // Setter methods for each dimension
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    // Getter methods for each dimension
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // Member function to calculate volume
    double volume() const {
        return length * width * height;
    }
};

int main() {
    Box box;

    double l, w, h;
    // Input dimensions
    cout << "Enter length: ";
    cin >> l;
    box.setLength(l);

    cout << "Enter width: ";
    cin >> w;
    box.setWidth(w);

    cout << "Enter height: ";
    cin >> h;
    box.setHeight(h);

    // Calculate and display the volume
    cout << "Volume of the box: " << box.volume() << endl;

    return 0;
}
