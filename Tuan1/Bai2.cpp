#include<iostream>
using namespace std;

class Point {
	public:
		double x;
		double y;
};

class Line {
	public:
		Point A;
		Point B;
};

int main() {
	Point A,B,C,D;
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>D.x>>D.y;
	
	int a1 = A.x - B.x;
	int b1 = B.y - A.y;
	int c1 = B.x*A.y - A.x*B.y;
	
	int a2 = C.x - D.x;
	int b2 = D.y - C.y;
	int c2 = D.x*C.y - C.x*D.y;
	
	cout<<"pt cua AB la: "<<b1<<"x + "<<a1<<"y + "<<c1<<" = 0"<<endl;
	cout<<"pt cua CD la: "<<b2<<"x + "<<a2<<"y + "<<c2<<" = 0"<<endl;
	
	if(a1==a2 && b1!=b2) {
		cout<<"NO";
	}else if(a1==a2 && b1==b2) {
		cout<<"MANY";
	}
	//not finished yet
	return 0;
}
