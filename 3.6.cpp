#include <iostream>

using namespace std;

class Rectangle {
	private:
		
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
		}
		Rectangle(int W){
			
			setWidth(W);
			
		}
		Rectangle(int W,int H){
			
			setWidth(W);
			setHeight(H);
			
		}
		
		~Rectangle(){
		
		}
		
		
}; 
	
//--------------------------------------------------------------------------------------------------------//
class MyRect {
	private:
		Rectangle **a;
		int row;
		int col;
	public:
		MyRect(){
			a=0;
			row=col=0;
		}
		MyRect(int r,int c){
			row=r;col=c;
			a= new Rectangle *[row];
			for(int i=0;i<row;i++){
				a[i]=new Rectangle[col];
			}
		}
		
		~MyRect(){
		if(a!=0){
			for(int i=0;i<row;i++){
				delete[] a[i];
				delete[] a;
		}
		}
	}
		void setRect(){
			int c;
			int k;
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cout<<"Input a["<<i<<"]["<<j<<"]"<<endl;
					cout<<"width : ";cin>>c;
					cout<<"Height : ";cin>>k;
					a[i][j].set(c,k);
					
					cout<<"_________________________"<<endl;
				}
		}
	}
		Rectangle getRect(int r,int c){
					return a[r][c].getWidth();	
		}
	
	void show();
	void reset();
	};
	void MyRect::show(){
		cout<<"-----Show-----"<<endl;
		for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cout<<a[i][j].getWidth()<<endl;
					cout<<a[i][j].getHeight()<<endl;
					cout<<"_______________________"<<endl;
				}
		}
	}
	
	void MyRect::reset(){
		cout<<"---------------Reset--------------"<<endl;
		if(a!=0){
			for(int i=0;i<row;i++){
				delete[] a[i];
				delete[] a;
		}
		}
		
		int c,r;
		cout<<"row = ";cin>>r;
		cout<<"col = ";cin>>c;
		
		row=r;col=c;
			a= new Rectangle *[row];
			for(int i=0;i<row;i++){
				a[i]=new Rectangle[col];
			}
			setRect();
	}

int main(){
	MyRect a(2,2);
	a.setRect();
	a.show();
	a.reset();
	a.show();
	return 0;
}	
