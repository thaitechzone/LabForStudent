
#include <Scheduler.h>

class _newTask1 : public Task {
private:
    uint8_t state;
    
protected:
    void setup() {
        state = HIGH;
        pinMode(LED_BUILTIN, OUTPUT);
        digitalWrite(LED_BUILTIN, state);
    }
    void loop() {
        
        digitalWrite(LED_BUILTIN, state = state == HIGH ? LOW : HIGH);
        Serial.println("Loop RUN every 500ms");
        delay(500);        
    } 

};
