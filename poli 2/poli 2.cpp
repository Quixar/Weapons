#include <iostream>
#include <conio.h>
using namespace std;

class Weapon {
public:
	void virtual action1() {
		cout << "Weapon::action1()\n";
	}
	void virtual action2() {
		cout << "Weapon::action2()\n";
	}
};

class Knife : public Weapon {
public:
	void action1() {
		cout << "Get a knife\n";
	}
	void action2() {
		cout << "Stab\n";
	}
};

class Pistol : public Weapon {
public:
	void action1() {
		cout << "Reload\n";
	}
	void action2() {
		cout << "Fire\n";
	}
};

class Shotgun : public Weapon {
public:
	void action1() {
		cout << "Pull the forend\n";
	}
	void action2() {
		cout << "Fire\n";
	}
};

class Rifle : public Weapon {
public:
	void action1() {
		cout << "Pull the shutter\n";
	}
	void action2() {
		cout << "Burst shooting\n";
	}
};

class Sniperrifle : public Weapon {
public:
	void action1() {
		cout << "Take aim\n";
	}
	void action2() {
		cout << "Adjust the sight\n";
	}
};

class Fraggrenade : public Weapon {
public:
	void action1() {
		cout << "Pull the pin\n";
	}
	void action2() {
		cout << "Explode\n";
	}
};

class Flashgrenade : public Weapon {
public:
	void action1() {
		cout << "Throw\n";
	}
	void action2() {
		cout << "Blind\n";
	}
};

class Smokegrenade : public Weapon {
public:
	void action1() {
		cout << "Reveal smoke\n";
	}
	void action2() {
		cout << "Dispel smoke\n";
	}
};

class Molly : public Weapon {
public:
	void action1() {
		cout << "Set fire\n";
	}
	void action2() {
		cout << "Fill up\n";
	}
};

Weapon* GetSomeWeapon() {
	int r = rand() % 9; // Генерируем случайное число от 0 до 8

	if (r == 0) {
		return new Knife();
	}
	else if (r == 1) {
		return new Pistol();
	}
	else if (r == 2) {
		return new Shotgun();
	}
	else if (r == 3) {
		return new Rifle();
	}
	else if (r == 4) {
		return new Sniperrifle();
	}
	else if (r == 5) {
		return new Fraggrenade();
	}
	else if (r == 6) {
		return new Flashgrenade();
	}
	else if (r == 7) {
		return new Smokegrenade();
	}
	else {
		return new Molly();
	}
}

int main() {
	srand(time(0));
	int count = 9;

	Knife k;
	Pistol p;
	Shotgun shotgun;
	Rifle r;
	Sniperrifle sniper;
	Fraggrenade frag;
	Flashgrenade flash;
	Smokegrenade smoke;
	Molly m;

	while (true) {
		int key = _getch();
		if (key == 49) {
			cout << "Knife\n";
			key = _getch();
			if (key == 32) {
				k.action1();
			}
			else if (key == 13) {
				k.action2();
			}
		}
		else if (key == 50) {
			cout << "Pistol\n";
			key = _getch();
			if (key == 32) {
				p.action1();
			}
			else if (key == 13) {
				p.action2();
			}
		}
		else if (key == 51) {
			cout << "Shotgun\n";
			key = _getch();
			if (key == 32) {
				shotgun.action1();
			}
			else if (key == 13) {
				shotgun.action2();
			}
		}
		else if (key == 52) {
			cout << "Rifle\n";
			key = _getch();
			if (key == 32) {
				r.action1();
			}
			else if (key == 13) {
				r.action2();
			}
		}
		else if (key == 53) {
			cout << "Sniper rifle\n";
			key = _getch();
			if (key == 32) {
				sniper.action1();
			}
			else if (key == 13) {
				sniper.action2();
			}
		}
		else if (key == 54) {
			cout << "Frag grenade\n";
			key = _getch();
			if (key == 32) {
				frag.action1();
			}
			else if (key == 13) {
				frag.action2();
			}
		}
		else if (key == 55) {
			cout << "Flash grenade\n";
			key = _getch();
			if (key == 32) {
				flash.action1();
			}
			else if (key == 13) {
				flash.action2();
			}
		}
		else if (key == 56) {
			cout << "Smoke grenade\n";
			key = _getch();
			if (key == 32) {
				smoke.action1();
			}
			else if (key == 13) {
				smoke.action2();
			}
		}
		else if (key == 57) {
			cout << "Molly\n";
			key = _getch();
			if (key == 32) {
				m.action1();
			}
			else if (key == 13) {
				m.action2();
			}
		}
	}
}