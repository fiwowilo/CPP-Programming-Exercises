#pragma once
#include "Monster.h"

class Zombie : public Monster {
public:
	Zombie(string n = "��������", string i = "��", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Zombie() { cout << " Zombie"; }
};

class Vampire : public Monster {
public:
	Vampire(string n = "�����̾�", string i = "��", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Vampire() { cout << " Vampire"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 4;
		if (dir == 0) x--;
		else if (dir == 1) x++;
		else if (dir == 2) y--;
		else y++;
		clip(maxx, maxy);
		eat(map);
	}
};

class KGhost : public Monster {
public:
	KGhost(string n = "ó��ͽ�", string i = "��", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~KGhost() { cout << " KGhost"; }

	void move(int** map, int maxx, int maxy) {
		x = rand() % maxx;
		y = rand() % maxy;
		clip(maxx, maxy);
		eat(map);
	}
};

class Jiangshi : public Monster {
	bool	bHori;
public:
	Jiangshi(string n = "�������", string i = "��", int x = 0, int y = 0, bool bH = true)
		: Monster(n, i, x, y), bHori(bH) {}
	~Jiangshi() { cout << " Jiangshi"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 2;
		int jump = rand() % 2 + 1;
		if (bHori) x += ((dir == 0) ? -jump : jump);
		else y += ((dir == 0) ? -jump : jump);
		clip(maxx, maxy);
		eat(map);
	}
};
class Smombi : public Monster {
public:
	Smombi(string n = "������", string i = "��", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Smombi() { cout << " Smombi"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 4;
		if (dir == 0) { x--; y--; }
		else if (dir == 1) { x++; y--; }
		else if (dir == 2) { y++; x--; }
		else { y++; x++; }
		clip(maxx, maxy);
		eat(map);
	}
};
class Siangshi : public Jiangshi {
	int nMove = 0;
public:
	Siangshi(string n = "���۰���", string i = "��", int x = 0, int y = 0)
		: Jiangshi(n, i, x, y) {}
	~Siangshi() { cout << " Siangshi"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 2;
		int jump = rand() % 2 + 1;
		if (nMove < 150) {
			x += ((dir == 0) ? -jump : jump);
			nMove++;
		}
		else if (nMove >= 50 && nMove < 200) {
			y += ((dir == 0) ? -jump : jump);
			nMove++;
		}
		else if (nMove >= 250 && nMove < 300) {
			x += ((dir == 0) ? -jump : jump);
			nMove++;
		}
		else if (nMove >= 350 && nMove < 400) {
			y += ((dir == 0) ? -jump : jump);
			nMove++;
		}
		else if (nMove >= 450 && nMove < 500) {
			x += ((dir == 0) ? -jump : jump);
			nMove++;
		}
		else x += ((dir == 0) ? -jump : jump);
		clip(maxx, maxy);
		eat(map);
	}
};
class Addmonster : public Monster {
public:
	Addmonster(string n = "�߰�����", string i = "��", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Addmonster() { cout << " Addmonster"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 7;
		if (dir == 0) { x--; y--; }
		else if (dir == 1) { x++; y++; }
		else if (dir == 2) { x++; y--; }
		else if (dir == 3) { x--; y++; }
		else if (dir == 4) x--;
		else if (dir == 5) x++;
		else if (dir == 6) y--;
		else y++;
		clip(maxx, maxy);
		eat(map);
	}
};