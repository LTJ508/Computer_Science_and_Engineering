// Declaring variables for moisture value and percentage
int moisturevalue;
float Moisture_Percentage;

// Setting the pin numbers for Digital Output for LEDs
int led1 = 2;
int led2 = 3;
int led3 = 6;
int led4 = 7;

// Start the program
void setup() {
    Serial.begin(9600); // Initialize serial communication at 9600 bits per second
    // Set LED pins as output
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

// Infinite loop that continuously checks the moisture level
void loop() {
    moisturevalue = analogRead(A0); // Read data from analog pin A0
    // Calculate the moisture percentage using the formula
    Moisture_Percentage = ((1028 - moisturevalue) / 10.0); 
    // Print the moisture percentage to the serial monitor
    Serial.print(" Moisture Percentage: ");
    Serial.println(Moisture_Percentage); 

    // Turn off all LEDs initially
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);

    // Decide which LEDs to turn on based on the moisture percentage
    if (Moisture_Percentage >= 15 && Moisture_Percentage < 25) {
        // Turn on the first LED
        digitalWrite(led1, HIGH);
    } else if (Moisture_Percentage >= 25 && Moisture_Percentage < 50) {
        // Turn on the first two LEDs
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
    } else if (Moisture_Percentage >= 50 && Moisture_Percentage < 75) {
        // Turn on the first three LEDs
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
    } else if (Moisture_Percentage >= 75) {
        // Turn on all four LEDs
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    } else {
        // Ensure all LEDs are off (redundant but clear)
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }

    delay(1000); // Delay for 1 second before the next reading
}
