int flame = 0; // select analog pin 0 for the sensor
int waterPump = 13; // select digital pin for the water pump relay
int val = 0; // initialize variable

void setup()
{
    pinMode(waterPump, OUTPUT); // set water pump relay pin as "output"
    pinMode(flame, INPUT); // set flame sensor pin as "input"
    Serial.begin(9600); // set baud rate at "9600"
}

void loop()
{
    val = analogRead(flame); // read the analog value of the sensor
    Serial.println(val); // output and display the analog value
    
    if (val >= 500) // when the analog value is larger than 500, turn on the water pump
    {
        digitalWrite(waterPump, HIGH);
    }
    else
    {
        digitalWrite(waterPump, LOW);
    }
    
    delay(500);
}
