#include <iostream>

using namespace std;

class Shape
{
    private:
    float area;
    float keliling;
    public:
    virtual float calculateArea()
    {
        return 0;
    }
    virtual float calculateKeliling()
    {
        return 0;
    }
    };
class Rectangle : public Shape
{
    private:
    float width, length;
    public:
    Rectangle(float twidth, float tlength){
        width=twidth;
        length=tlength;
    }
    float calculateArea()
    {
        return width*length;
    }
    float calculateKeliling()
    {
        return 2*(width+length);
    }
};
    

int main()
{
    Rectangle rect(5.0,4.0);
    Shape*shape1=&rect;
    float area = shape1->calculateArea();
    float kel = shape1->calculateKeliling();
    cout<<"Area : "<<area<<" dan keliling : "<<kel<<endl;
}