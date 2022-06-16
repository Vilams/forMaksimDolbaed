//#include <iostream>
#include <SFML/Graphics.hpp>
//using namespace std;
using namespace sf;
int main() {

	RenderWindow window(VideoMode(200, 200), "Test");
	CircleShape My(100.f);
	My.setFillColor(Color::Green);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(My);
		window.display();

	}
	return 0;
}