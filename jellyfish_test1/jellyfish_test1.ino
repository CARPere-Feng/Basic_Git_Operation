// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       jellyfish_test1.ino
    Created:	14/7/2021 3:57:43 pm
    Author:     HKCLR\cslaw
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
int sensor = A0;
int solenoidPin = 2;
//bool flag = true;


// The setup() function runs once each time the micro-controller starts
void setup()
{
    //Declaring LED pin as output

    pinMode(sensor, INPUT);
    pinMode(solenoidPin, OUTPUT);
    Serial.begin(9600);
    Serial.print("Start system");
}

// Add the main program code into the continuous loop() function
void loop()
{
    digitalWrite(solenoidPin, HIGH);    //Switch Solenoid ON
    delay(1000);                      //Wait 1 Second
    digitalWrite(solenoidPin, LOW);     //Switch Solenoid OFF
    delay(1000);                      //Wait 1 Second

    int reading = analogRead(sensor);
    Serial.print(reading);
    Serial.print('\n');
    delay(1000);
    //Serial.print("hello");
}


//if (flag) {
//for (int j = 0; j < 5; j++)
//{
//    // put your main code here, to run repeatedly:  
//    digitalWrite(solenoidPin, HIGH);    //Switch Solenoid ON
//    delay(1000);                      //Wait 1 Second
//    digitalWrite(solenoidPin, LOW);     //Switch Solenoid OFF
//    delay(1000);                      //Wait 1 Second
//}
//}
//flag = false;

