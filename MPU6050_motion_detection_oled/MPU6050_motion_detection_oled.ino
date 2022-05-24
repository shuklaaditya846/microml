#include <Adafruit_MPU6050.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);

void setup() {

  Serial.begin(115200);
  // while (!Serial);
  Serial.println("MPU6050 OLED demo");

  if (!mpu.begin()) {
    Serial.println("Sensor init failed");
    while (1)
      yield();
  }
  Serial.println("Found a MPU-6050 sensor");


  //setupt motion detection
  mpu.setHighPassFilter(MPU6050_HIGHPASS_0_63_HZ);
  mpu.setMotionDetectionThreshold(30);
  mpu.setMotionDetectionDuration(80);
  mpu.setInterruptPinLatch(true);  // Keep it latched.  Will turn off when reinitialized.
  mpu.setInterruptPinPolarity(true);
  mpu.setMotionInterrupt(true);


  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ; // Don't proceed, loop forever
  }
  display.display();
  delay(500); // Pause for 2 seconds
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setRotation(0);
}

void loop() {
  if (mpu.getMotionInterruptStatus()) {
    /* Get new sensor events with the readings */
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    display.clearDisplay();
    display.setCursor(0, 0);

//    Serial.print("Gyro. ");
//    Serial.print("X: ");
//    Serial.print(a.acceleration.x, 1);
//    Serial.print(" m/s^2, ");
//    Serial.print("Y: ");
//    Serial.print(a.acceleration.y, 1);
//    Serial.print(" m/s^2, ");
//    Serial.print("Z: ");
//    Serial.print(a.acceleration.z, 1);
//    Serial.print(" m/s^2, ");

    display.println("Gyro.");
    display.print(a.acceleration.x, 1);
    display.print(", ");
    display.print(a.acceleration.y, 1);
    display.print(", ");
    display.print(a.acceleration.z, 1);
    display.println("");

//    Serial.print("Acc. ");
//    Serial.print("X: ");
    Serial.print(g.gyro.x, 1);
    Serial.print(", ");
//    Serial.print("Y: ");
    Serial.print(g.gyro.y, 1);
    Serial.print(", ");
//    Serial.print("Z: ");
    Serial.print(g.gyro.z, 1);
    Serial.println();

    display.println("Acc.");
    display.print(g.gyro.x, 1);
    display.print(", ");
    display.print(g.gyro.y, 1);
    display.print(", ");
    display.print(g.gyro.z, 1);
    display.println("");

    display.display();
    delay(100);
  }
}
