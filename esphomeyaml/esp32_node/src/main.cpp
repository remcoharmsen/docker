// Auto generated code by esphomeyaml
#include "esphomelib/application.h"

using namespace esphomelib;

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  App.set_name("esp32_node");
  App.init_log();
  WiFiComponent *wificomponent = App.init_wifi();
  wificomponent->set_sta(WiFiAp{
      .ssid = "RioMare",
      .password = "RioMareLikeVolharding",
      .channel = -1,
  });
  OTAComponent *otacomponent = App.init_ota();
  otacomponent->start_safe_mode();
  App.init_mqtt("m21.cloudmqtt.com", 17322, "ESP32", "ZVgnuxVMLEn0");
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
  delay(16);
}
