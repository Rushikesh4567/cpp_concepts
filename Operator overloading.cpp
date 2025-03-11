// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Point{
  int x_co;
  int y_co;
  
  public:
    Point(int x=0,int y=0):x_co(x),y_co(y){};
    
    Point operator-(const Point &obj)
    {
        return Point(x_co-obj.x_co,y_co-obj.y_co);
    }
    
    void show()
    {
        cout<<"New x= "<<x_co<<endl;
        cout<<"New y= "<<y_co<<endl;
    }
};
int main()
{
    // Write C++ code here
    Point p1(10,6),p2(6,3);
    Point p3=p1-p2;
    
    p3.show();
    return 0;
}
