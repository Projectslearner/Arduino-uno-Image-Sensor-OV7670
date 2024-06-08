/*
    Project name : Image Sensor OV7670
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-image-sensor-ov7670
*/

#include <Wire.h>
#include <OV7670.h>

OV7670 camera;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  if (!camera.init()) {
    Serial.println("OV7670 Camera not detected.");
    while (1);
  }
  
  camera.setResolution(OV7670_RESOLUTION_QVGA);
}

void loop() {
  // Capture an image frame
  camera.captureFrame();
  
  // Process and store the image frame (not implemented in this example)
  
  delay(1000); // Delay for 1 second before capturing the next frame
}
