#include <iostream>
using namespace std;

class Point {
public:
    double x;
    double y;
};

class Line {
public:
    double a;
    double b;
    double y_ = 0;
    Line(Point A, Point B) {
        double d = B.x - A.x;
        double dx = B.y - A.y;
        double dy = A.x * B.y - B.x * A.y;
        if (d == 0 && dx)
            a = 1, b = 0, y_ = A.x;
        else if (d == 0 && dx == 0) {
            cout << "2 points are identical";
            exit(0);
        } else {
            a = dx / d;
            b = dy / d;
        }
    }
};

int main() {
    Point A, B, C, D;

    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> D.x >> D.y;

    Line AB(A, B);
    Line CD(C, D);

    if(AB.y_ && CD.y_) {
        if(AB.y_ == CD.y_) cout<<"MANY";
        else cout<<"NO";
    } else if(AB.y_) cout<<AB.y_<<" "<<CD.a*AB.y_+CD.b;
    else if(CD.y_) cout<<CD.y_<<" "<<AB.a*CD.y_+AB.b;
    else {
        double d = CD.a - AB.a;
        double dx = AB.b - CD.b;
        double dy = CD.a*AB.b - AB.a*CD.b;
        if (d == 0 && dx && dy ) cout << "NO";
        else if (d == 0 && (dx == 0 || dy == 0)) cout <<"MANY";
        else {
            cout << dx/d << " " << dy/d;
        }
    }

    return 0;
}
