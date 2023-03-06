#include <iostream>
using namespace std;

class Goomba {
private:
	int xpos;
	int ypos;
	bool isAlive;
	char color;
public:
	Goomba();
	Goomba(int x, int y, char c);

	void walk();
	void printInfo();
	void kill();
	bool CheckIsDead();
	void setPosition(int x, int y);


};

int main() {
	Goomba Lary(300, 400, 'l');
	Goomba Bob;
	Lary.printInfo();
	Lary.walk();
	Lary.printInfo();
	Bob.printInfo();

}

Goomba::Goomba() { //default constructor
	xpos = 0;
	ypos = 0;
	isAlive = false;
	color = 'b';

}
Goomba::Goomba(int x, int y, char c) { //paramaterized constructor
	xpos = x;
	ypos = y;
	isAlive = true;
	color = c;
}

void Goomba::kill() { isAlive = false; }



bool Goomba::CheckIsDead() { return isAlive; }



void Goomba::setPosition(int x, int y) {
	xpos = x;
	ypos = y;
	isAlive = true;
}


void Goomba::walk() { xpos += 1; }

void Goomba::printInfo() {
	cout << "Hi, Im a goomba and my position is " << xpos << "," << ypos << endl;
	if (isAlive == true)
		cout << "I am currently alive." << endl;
	else 
		cout << "I am currently dead." << endl;
	if (color == 'b')
		cout << "My color is Brown." << endl;
	else if (color == 'l')
		cout << "My color is Blue" << endl;
}

