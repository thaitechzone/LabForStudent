
#include <Scheduler.h>

class _newTask2 : public Task {
private:
    
protected:
    void setup() {
        
    }
    void loop() {
        //digitalWrite(LED_BUILTIN, state = state == HIGH ? LOW : HIGH);
        Serial.println("Loop RUN every ----2000ms");
        delay(2000);    
        
    } 
};
