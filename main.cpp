#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
	RenderWindow window(VideoMode(1200, 800), "Game");
	Event event;
	RectangleShape shape;
	
	shape.setSize(Vector2f(100, 100));
	shape.setFillColor(Color::White);

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();

			else if (event.type == Event::KeyPressed) {
				switch (event.key.code) {
				case Keyboard::Escape:
					window.close();
					break;
				}
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}