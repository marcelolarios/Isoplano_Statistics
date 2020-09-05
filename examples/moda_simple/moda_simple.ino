#include <Isoplano_Statistics.h>

Isoplano_Statistics calc;

void setup()
{
    Serial.begin(9600);
    int a[] = {100, 200, 200};

    int x = calc.moda(a, 3);
    Serial.print(x);
}

void loop()
{
        
  delay(3000);
}
