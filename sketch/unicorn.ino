/**
* Talking Unicorn
*
* @author        Simone Primarosa,(http://simoneprimarosa.com)
* @link          (https://github.com/simonepri/talking-unicormn)
* @license       MIT License (https://opensource.org/licenses/MIT)
*/

#include "PCM.h"
#include "sounddata.h"

bool state;

void setup() {
  state = 0;
}

void loop() {
  int val = analogRead(0);
  if(!state && val >= 200 || state && val < 200) {
    startPlayback(CIAO_REBECCA, sizeof(CIAO_REBECCA));
    delay(2000);
    startPlayback(SONO_CORNO, sizeof(SONO_CORNO));
    delay(1500);
    startPlayback(L_UNICORNO, sizeof(L_UNICORNO));
    delay(5000);
    state != state;
  }
}
