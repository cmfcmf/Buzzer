#include <USBComposite.h>

#define PIN PB12

void setup() {
  pinMode(PIN, INPUT_PULLUP);
  USBHID_begin_with_serial(HID_KEYBOARD);
  Keyboard.begin();
}

void loop() {
  static bool state = false;
  if (digitalRead(PIN) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_GUI);
    if (state == 1) {
      Keyboard.press(KEY_LEFT_ALT);
    }
    Keyboard.press('b');
    delay(200);
    Keyboard.releaseAll();
    delay(500);
    state = !state;
  }
}

