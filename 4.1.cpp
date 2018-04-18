#include <iostream>
#include <string.h>
using namespace std;

class Point {
	private:
		char name[10];
		static int num;
		int x;
		int y;
	public:
		void set(int X,int Y,char *n){
			x=X;
			y=Y;
			strcpy(name,n);
		}
		void setX(int X){
			x = X;
			}
		void setY(int Y){
			y = Y;
		}
		void setname(char *n){
			strcpy(name,n);
		}
		char *getname(){
			return name;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		Point(){
			num++;
			cout<<"num : "<<num<<endl;
		}
		Point(int x){
			num++;
			setX(x);
			cout<<"num : "<<num<<endl;
		}
		Point(int x,int y){
			num++;
			setX(x);
			setY(y);
			cout<<"num : "<<num<<endl;
		}
		Point(int x,int y,char *n){
			num++;
			setX(x);
			setY(y);
			setname(n);
			cout<<"num : "<<num<<endl;
		}
		~Point(){
			num--;
			cout<<"num : "<<num<<endl;
		} 
		static int count(){
			return num;
		}
		
	
		
		void show(void);
		void dot(Point&);
		
		
}; 
		int Point::num;
		void  Point::show(){
	cout<<"Name="<<name<<endl;
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	cout<<endl;
}
	void Point::dot(Point& n){
		int total;
		total = (x*n.x)+(y*n.y);
		cout<<"total dot : "<<total<<endl;
	}
	void midpoint(Point& n,Point& m){
		int N,M;
		N=(n.getX()+m.getX())/2;
		M=(n.getY()+m.getY())/2;
		cout<<"midpoint : "<<N<<","<<M<<endl;
	}

int main(){
	Point a(30,17,"bank2");
	Point b(10,20,"bank");
	a.show();
	b.show();
	a.dot(b);
	midpoint(a,b);
	return 0;
}	
