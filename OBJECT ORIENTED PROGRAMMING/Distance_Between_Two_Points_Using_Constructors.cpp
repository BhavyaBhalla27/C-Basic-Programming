#include<iostream>
#include<math.h>
using namespace std;
class Point{
    int x,y;
    friend void distancePoint(Point , Point);
    public:
    Point(int a,int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<" , "<<y<<")";
    }
};
void distancePoint(Point obj1, Point obj2)
{
    double dis;
    dis = sqrt(pow((obj2.x - obj1.x), 2) + pow((obj2.y - obj1.y), 2));
    cout << dis << endl;
}
int main(){ 
    Point a(3,4);
    Point b(5,6);
    a.displayPoint();
    b.displayPoint();
    cout<<endl;
    cout<<"The distance between the two points is "<<endl;
    distancePoint(a,b);
    return 0;
}