#include <iostream>
#include <string>

using namespace std;

class Block {
    private:
        double length;
        double width;
        double height;
        string material;
        string color;
        static int countofBlocks;
        
    public:
        // Default Constructor
        Block() {
            length = 0;
            width = 0;
            height = 0;
            material = "Card";
            color = "";
            countofBlocks++;
        }
        
        // Parameterized Constructor
        Block(double length, double width, double height, string material = "Card", string color = "") {
            this->length = length;
            this->width = width;
            this->height = height;
            this->material = material;
            this->color = color;
            countofBlocks++;
        }
        
        // Getters
        double getLength() const {
            return length;
        }
        
        double getWidth() const {
            return width;
        }
        
        double getHeight() const {
            return height;
        }
        
        string getMaterial() const {
            return material;
        }
        
        string getColor() const {
            return color;
        }
        
        // Setters
        void setLength(double length) {
            this->length = length;
        }
        
        void setWidth(double width) {
            this->width = width;
        }
        
        void setHeight(double height) {
            this->height = height;
        }
        
        // Get Volume
        double getVolume() const {
            return length * width * height;
        }
        
        // Get Surface Area
        double getSurfaceArea() const {
            return 2 * ((length * width) + (length * height) + (width * height));
        }
        
        // Print Block
        void print() const {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
            cout << "Material: " << material << endl;
            cout << "Color: " << color << endl;
            cout << "Volume: " << getVolume() << endl;
            cout << "Surface Area: " << getSurfaceArea() << endl;
        }
        
        // Get countofBlocks
        static int getCountofBlocks() {
            return countofBlocks;
        }
};

// Initialize static variable countofBlocks
int Block::countofBlocks = 0;

int main() {
    Block b1(2, 3, 4, "Wood", "Brown");
    b1.print();
    
    Block b2(5, 6, 7, "Metal", "Silver");
    b2.print();
    
    cout << "Total Blocks created: " << Block::getCountofBlocks() << endl;
    
    return 0;
}
