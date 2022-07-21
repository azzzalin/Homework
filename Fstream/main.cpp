#include <iostream>
#include "Abonent.h"
#include "Directory.h"

using namespace std;


int main()
 {
	Abonent test("Steve", "Jobs", "09876", "Apple");
	Abonent test1("Gave", "Stes", "542233", "Samsung");

	Directory dir(test);
	dir.AddAbonent(test);
}