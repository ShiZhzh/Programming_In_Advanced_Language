//Rectangle.h
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
class Rectangle{	//派生类定义部分，公有继承
	public:	//新增公有函数成员
		class Point {	//基类Point类的定义
			public:		//公有函数成员
				Point(float x , float y){
					this->x = x; this->y = y;
				}
				void move(float offX, float offY){
					x += offX; y += offY;
				}
			float getX() const { return x; }
			float getY() const { return y; }
			private:
				float x, y;
		};
		Rectangle(float x, float y, float w, float h){
			this->x = x;
			this->y = y;
			//调用基类公有成员函数
			this->w = w;
			this->h = h;
		}
		void move(float offX, float offY){
				Point a(x , y);
				a.move(offX , offY);	
				}
		float getX() const { return x; }
		float getY() const { return y; }
		float getH() const { return h; }
		float getW() const { return w; }
	private:	//新增私有数据成员
		float x,y,w, h;
	
};
#endif //_RECTANGLE_H
