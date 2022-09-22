#include <iostream>
#include <stdio.h>

int main(){

	int h, m, s, h1, m1, s1, day;
	day = 0; h1 = 0; m1 = 0; s1 = 0;
	std::cout << "Enter the current time:\n";
	std::cin >> h >> m >> s;
	std::cout << "Enter end time:\n";
	std::cin >> h1 >> m1 >> s1;

	h = h + h1;
	m = m + m1;
	s = s + s1;

	if (s > 59) {
		m = m + (s / 60);
		s = s1 % 60;
	}
	
	if (m > 59) {
		h = h + (m / 60);
		m = m % 60;
	}

	if (h > 23) {
		day = day + (h / 24);
		h = h % 24;
	}

	std::cout << h << ":" << m << ":" << s << "+ " << day << " days";
}
