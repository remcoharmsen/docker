// Auto generated code by esphomeyaml
#include "esphomelib/application.h"

using namespace esphomelib;

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  App.set_name("esp8266_node1");
  LogComponent *logcomponent = App.init_log();
  logcomponent->set_global_log_level(ESPHOMELIB_LOG_LEVEL_INFO);
  WiFiComponent *wificomponent = App.init_wifi();
  wificomponent->set_sta(WiFiAp{
      .ssid = "RioMare",
      .password = "RioMareLikeVolharding",
      .channel = -1,
      .manual_ip = ManualIP{
      .static_ip = IPAddress(192, 168, 1, 45),
      .gateway = IPAddress(192, 168, 1, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(0, 0, 0, 0),
      .dns2 = IPAddress(0, 0, 0, 0),
    },
  });
  OTAComponent *otacomponent = App.init_ota();
  otacomponent->start_safe_mode();
  App.init_mqtt("192.168.1.14", 1883, "ESP32", "ZVgnuxVMLEn0");
  Application::MakePulseCounterSensor application_makepulsecountersensor = App.make_pulse_counter_sensor("Molen omwentelingen", 1, 15000);
  sensor::Sensor *sensor_sensor = application_makepulsecountersensor.pcnt;
  sensor_sensor->set_unit_of_measurement("tpm");
  sensor_sensor->set_filters({
      new sensor::MultiplyFilter(-0.006289f),
  });
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
  delay(16);
}
