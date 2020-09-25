void exeCMD() {
  switch (commands[0]) {
    case 0:
      wdt_disable();
      wdt_enable(WDTO_15MS);
      while (1) {}
      break;

    case 3:
      switch (commands[1]) {
        case 0:
          stripClear();
          break;
        case 1:
          stripUpdate();
          stripShow();
          break;
        case 2:
          stripUpdate();
          break;
        case 3:
          stripShow();
          break;
        case 4:
          brightnessUpdate();
          break;
        default:
          break;
      }
      break;

    case 4:
      switch (commands[1]) {
        case 0:
          digitalWrite(IR_PIN, LOW);
          break;
        case 1:
          digitalWrite(IR_PIN, HIGH);
          break;
        default:
          break;
      }
      break;

    default:
      // statements
      break;
  }
}