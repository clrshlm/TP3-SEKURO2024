#include <iostream>

using namespace std;

class LinearLine
{
    private:
    float x1;
    float y1;
    float x2;
    float y2;
    
    public:
    LinearLine(float x1, float y1, float x2, float y2){
        this->x1=x1;
        this->x2=x2;
        this->y1=y1;
        this->y2=y2;
    }
    float gradient(){
        return  ((y2-y1)/(x2-x1));
    }
    float y_intercept(){
       return (y1-(gradient()*x1));
    }
    LinearLine operator + (float a){
        float xx1=x1+a;
        float xx2=x2+a;
        float yy1=y1;
        float yy2=y2;
        return LinearLine(xx1,yy1,xx2,yy2);
    }
    void printEquation(){
        cout<<"y="<<gradient()<<"x+"<<y_intercept()<<endl;
    }
    void printPoints(){
        cout<<"("<<x1<<","<<y1<<")"<<endl;
        cout<<"("<<x2<<","<<y2<<")"<<endl;
    }
};
int main()
{
    LinearLine line(1.0f, 8.0f, 2.0f, 3.0f);
    int a=3;
    line.printPoints();
    cout<<line.gradient()<<endl;
    cout<<line.y_intercept()<<endl;
    line.printEquation();
    LinearLine geser = line+a;
    geser.printEquation();
}
