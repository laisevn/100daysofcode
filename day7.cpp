#include <iostream>


class  point {
	public:
		double getx() {  return x; }
		void setx(double v) { x = v;}
		
		double gety() const { return y; }
		void sety(double v) { y = v; }
		
	point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}


	private:
		double x, y;
		friend point operator+ (const point& p1, const point& p2);
    	friend std::ostream& operator<< (std::ostream& out, const point& p);
};


point operator+ (const point& p1, const point& p2) {
    return point(p1.x + p2.x, p1.y + p2.y);
}

/*operador binario. 
Esta retornando a referencia para nao haver curto de chamar por valor.
*/
std::ostream& operator<< (std::ostream& out, const point& p) {
	out << "( " << p.x << ", " << p.y << " )";
	return out;
}

int main () {
	point a(3.5, 2.5), b(2.5, 4.5), c;
	std::cout << "a= " << a << " b =" << b << std::endl;
	std::cout << " sum = " << a + b << std::endl; 
}
