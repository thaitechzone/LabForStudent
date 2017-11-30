#include <Scheduler.h>
#include "_newTask1.h"
#include "_newTask2.h"

//object declare 
_newTask1 event1;
_newTask2 event2;

void setup() {
  Serial.begin(9600);
  Serial.println("Starting Event.....");
  delay(1000);
  // put your main code here, to run repeatedly:
  Scheduler.start(&event1);
  Scheduler.start(&event2);
  Scheduler.begin();
}

void loop() {
 
}

