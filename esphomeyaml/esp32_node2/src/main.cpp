// Auto generated code by esphomeyaml
#include "esphomelib/application.h"

using namespace esphomelib;

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  App.set_name("esp32_node2");
  App.init_log();
  WiFiComponent *wificomponent = App.init_wifi();
  wificomponent->set_sta(WiFiAp{
      .ssid = "RioMare",
      .password = "RioMareLikeVolharding",
      .channel = -1,
      .manual_ip = ManualIP{
      .static_ip = IPAddress(192, 168, 1, 48),
      .gateway = IPAddress(192, 168, 1, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(0, 0, 0, 0),
      .dns2 = IPAddress(0, 0, 0, 0),
    },
  });
  OTAComponent *otacomponent = App.init_ota();
  otacomponent->start_safe_mode();
  mqtt::MQTTClientComponent *mqtt_mqttclientcomponent = App.init_mqtt("192.168.1.14", 1883, "ESP32", "ZVgnuxVMLEn0");
  mqtt_mqttclientcomponent->set_topic_prefix("ESP32_node2");
  Application::MakePulseCounterSensor application_makepulsecountersensor = App.make_pulse_counter_sensor("Pulse Counter", 15, 1000);
  sensor::Sensor *sensor_sensor = application_makepulsecountersensor.pcnt;
  sensor_sensor->set_unit_of_measurement("tpm");
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
  delay(16);
}
