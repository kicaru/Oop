#include <iostream>
#include <string.h>
using namespace std;

class Rectangle {
	private:
		static int num;
		int width;
		int height;
	public:
		void set(int W,int H){
			width=W;
			height=H;
		}
		void setWidth(int W){
			width=W;
			
			}
		void setHeight(int H){
			height=H;
		}
		int getWidth(){
			return width;
		}
		int getHeight(){
			return height;
		}
		Rectangle(){
			num++;
			cout<<"num : "<<num<<endl;
		}
		Rectangle(int W){
			num++;
			setWidth(W);
			cout<<"num : "<<num<<endl;
		}
		Rectangle(int W,int H){
			num++;
			setWidth(W);
			setHeight(H);
			cout<<"num : "<<num<<endl;
		}
		
		~Rectangle(){
			num--;
			cout<<"num : "<<num<<endl;
		}
		int area(){
			return width*height;
		}
		int area1(){
			return (width*2)+(height*2);
		} 
		static int count(){
			return num;
		}
		
		void show(void);
}; 
		int Rectangle::num;
		void  Rectangle::show(){
	cout<<"Width : "<<width<<endl;
	cout<<"Height : "<<height<<endl;
	cout<<"area : "<<area()<<endl;
	cout<<"border : "<<area1()<<endl;
	cout<<endl;
}

int main(){
	Rectangle a(10,20),b;
	a.show();
	b.show();
	return 0;
}	
