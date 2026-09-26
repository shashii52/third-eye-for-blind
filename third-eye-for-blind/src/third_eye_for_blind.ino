/*
  Third Eye for the Blind
  Academic recreation based on the project report.

  Hardware:
  - Arduino UNO/Nano
  - HC-SR04 ultrasonic sensor
  - Vibration motor
  - Piezo buzzer

  IMPORTANT:
  The report does not specify the original pin numbers. The pin mapping
  below is an example wiring arrangement. Verify it against your actual
  circuit before powering the hardware.
*/

const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int VIBRATION_PIN = 6;
const int BUZZER_PIN = 7;

const float ALERT_DISTANCE_CM = 100.0;

float measureDistanceCm() {
  // Ensure a clean trigger pulse.
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond ultrasonic trigger pulse.
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo duration. Timeout prevents the program from hanging
  // when no echo is received.
  unsigned long duration = pulseIn(ECHO_PIN, HIGH, 30000UL);

  if (duration == 0) {
    return -1.0; // No valid echo received.
  }

  // Speed of sound conversion: distance = time / 58 (cm, approx.).
  return duration / 58.0;
}

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(VIBRATION_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(TRIG_PIN, LOW);
  digitalWrite(VIBRATION_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.begin(9600);
}

void loop() {
  float distanceCm = measureDistanceCm();

  if (distanceCm < 0) {
    Serial.println("No valid echo");
    digitalWrite(VIBRATION_PIN, LOW);
    noTone(BUZZER_PIN);
  } else {
    Serial.print("Distance: ");
    Serial.print(distanceCm, 1);
    Serial.println(" cm");

    if (distanceCm < ALERT_DISTANCE_CM) {
      // Obstacle is within the alert threshold.
      digitalWrite(VIBRATION_PIN, HIGH);
      tone(BUZZER_PIN, 2000);
    } else {
      digitalWrite(VIBRATION_PIN, LOW);
      noTone(BUZZER_PIN);
    }
  }

  delay(100);
}
