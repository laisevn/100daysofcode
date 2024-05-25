#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
	VideoMode vm(1280, 720);
	RenderWindow window(vm, "YAY!", Style::Default);

	while (window.isOpen())
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape)) 
		{
			window.close();
		}
		window.clear();
		window.display();
	}
	return 0;
}

