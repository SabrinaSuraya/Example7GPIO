#include "Blinky.h"


Blinky led0('D', 0, 750, 350);
Blinky led1('D', 1, 400, 600);



void setup() {

  while(1){
    led0.Refresh();
    led1.Refresh();
  }
}

void loop() {
 

}
