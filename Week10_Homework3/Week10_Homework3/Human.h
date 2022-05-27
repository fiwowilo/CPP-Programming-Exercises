#pragma once
#include "Monster.h"
#include <conio.h>
enum Direction { Left = 75, Right = 77, Up = 72, Down = 80 };

class Human : public Monster {
public:
	Human(string n = "¹Ì·¡¿ìÆÄ", string i = "¿ì", int px = 0, int py = 0)
		: Monster(n, i, px, py) {}
	~Human() { cout << " [Human   ]"; }
	void move(int** map, int maxx, int maxy, unsigned char ch) {
			if (ch == Left) x--;
			else if (ch == Right) x++;
			else if (ch == Up) y--;
			else if (ch == Down) y++;
			else return;
			clip(maxx, maxy);
			eat(map);
		}
};

class Tuman : public Human {
public:
	Tuman(string n = "¹Ì·¡ÁÂÆÄ", string i = "ÁÂ", int x = 0, int y = 0)
		: Human(n, i, x, y) {}
	~Tuman() {}
	void moveHuman(int** map, int maxx, int maxy, unsigned char ch) {
			if (ch == 'a') x--;
			else if (ch == 'd') x++;
			else if (ch == 'w') y--;
			else if (ch == 's') y++;
			else return;
			clip(maxx, maxy);
			eat(map);
		}
};

