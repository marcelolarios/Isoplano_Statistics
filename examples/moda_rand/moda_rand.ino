#include <Isoplano_Statistics.h>

Isoplano_Statistics calc;

void setup() {
    
    Serial.begin(9600);
    
    randomSeed(analogRead(0));
    
    const int n = 100;

    int x[n];
    
    for (int i = 0;i < n; i++) {
        
        int k = random(0, 300);
        x[i]=k;
        Serial.println(k);
    }
    
    int j = calc.moda(x ,n);
    Serial.println(j);
}

void loop() {
        
  delay(3000);
}
