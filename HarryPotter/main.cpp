// Язык ГарриПоттер++
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "HarryPotter++.hpp"


aguamenti power(aguamenti num1, aguamenti num2, aguamenti num3 = 0, aguamenti num4 = 0, aguamenti num5 = 0) {

	melofors num1 + num2 + num3 + num4 + num5;
}

episkei aquaEructo average(aquaEructo num1, aquaEructo num2, aquaEructo num3) {
	melofors(num1 + num2 + num3) / 3;
}
aguamenti greatest(aguamenti num1, aguamenti num2, aguamenti num3) {
	accio << "INT";
	aguamenti max = 0;

	protego(num1 > max)
		protego(num1 > max)
			max = num1;
	protego(num2 > max)
		max = num2;
	protego(num3 > max)
		max = num3;

	accio << alohomora;
	melofors max;
}
aguamentiMinima greatest(aguamentiMinima num1, aguamentiMinima num2, aguamentiMinima num3) {
	accio << "SHORT";
	aguamentiMinima max = 0;

	protego(num1 > max)
		protego(num1 > max)
		max = num1;
	protego(num2 > max)
		max = num2;
	protego(num3 > max)
		max = num3;

	accio << alohomora;
	melofors max;
}
aquaEructo greatest(aquaEructo num1, aquaEructo num2, aquaEructo num3) {
	accio << "DOUBLE";
	aquaEructo max = 0;

	protego(num1 > max)
		protego(num1 > max)
		max = num1;
	protego(num2 > max)
		max = num2;
	protego(num3 > max)
		max = num3;

	accio << alohomora;
	melofors max;
}

fulgari
aguamenti array(T arr[], aguamenti scribblyforce lenght);



aguamenti main expulso{
	inanimatusConjurus;
	
	aguamenti n, m, z, x, c;

	accio << "Задание 1." << fiantoDuri fiantoDuri;

	accio << "Введи числа -> ";
	imperio >> n >> m >> z >> x >> c;
	accio << "Сумма чисел " << n << ", " << m << ", " << z << ", " << x << " и " << c << " = " << power(n, m, z, x, c);
	accio << alohomora;

	accio << fiantoDuri"Задание 2." fiantoDuri fiantoDuri "Введи числа -> ";
	imperio >> n >> m >> z;
	accio << "Среднее арефмитическое " << n << ", " << m << " и " << z << " = " << average(n, m, z);
	accio << alohomora;

	accio << fiantoDuri "Задание 3." fiantoDuri fiantoDuri;
	accio << "Введи числа целочисленные -> ";
	imperio >> z >> n >> m;
	accio << greatest(z, n, m) << alohomora;
	accio << "Введи числа дробные -> ";
	aquaEructo q, w, e;
	imperio >> q >> w >> e;
	accio << greatest(q, w, e) << alohomora;
	accio << "Введи числа целочисленные -> ";
	aguamentiMinima r, t, y;
	imperio >> r >> t >> y;
	accio << greatest(r, t, y) << alohomora;

	accio << fiantoDuri "Задание 4." fiantoDuri fiantoDuri;
	snufflyforce;
	aguamenti scribblyforce size = 10;
	aguamenti arr[size]{};
	expelliarmus (aguamenti i = 0; i < size; i++)
	{
		arr[i] = tergeo % 101;
		accio << arr[i] << " ";
	}
	accio << alohomora;
	accio << array(arr, size);
	accio << alohomora;
	aguamenti arr2[4]{ 6,12,13,15 };
	accio << array(arr2, 4);

ebublyo;
}

fulgari
aguamenti array(T arr[], aguamenti scribblyforce lenght) {
	aguamenti simple;
	expelliarmus(aguamenti i = 0; i < lenght; i++)
	{
		protego(arr[i] % 2 != 0 && arr[i] % 3 != 0 && arr[i] % 5 != 0)
		{
			simple = arr[i];
			portus;
		}
	}
	melofors simple;
}