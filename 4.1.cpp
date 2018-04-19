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
		void setL(int X,int Y){
			x=X;
			y=Y;
			strcpy(name,"Noname");
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
			setname("Noname");
			cout<<"num : "<<num<<endl;
		}
		Point(int x){
			num++;
			setX(x);
			setname("Noname");
			cout<<"num : "<<num<<endl;
		}
		Point(int x,int y){
			num++;
			setX(x);
			setY(y);
			setname("Noname");
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
		int &dot(Point&);
		Point &midpoint(Point& ,Point& );
		
}; 
		int Point::num;
		
	void Point::show(){
		cout<<"Name="<<name<<endl;
		cout<<"X="<<x<<endl;
		cout<<"Y="<<y<<endl;
		cout<<endl;
}
	int &Point::dot(Point& n){
		int totle;
		totle = (x*n.x)+(y*n.y);
		return totle;
	}
	
	Point& Point::midpoint(Point& n,Point& m){
		
		x = (n.x+m.x)/2;
		y = (n.y+m.y)/2;
		return *this;
	}

int main(){
	Point d;
	Point a(30,17,"bank2");
	Point b(10,20,"bank");
	a.show();
	b.show();
	
	cout<<"dot :"<<a.dot(b)<<endl;;
	
	d.midpoint(a,b).show();

	
	return 0;
}	
