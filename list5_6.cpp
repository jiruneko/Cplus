#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  HealthChecker yamada("山田一郎", 170, 67.5);

  cout << "BMIは、" << yamada.getBmi() << "です。" << endl;

  return 0;
}
