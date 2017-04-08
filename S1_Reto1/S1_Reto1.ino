//RETO 1 TIMBRE

int Timbre = 2;    // Pin botón on
int Led =  3;      // Pin led

// variables
int Estado = 0;    // variable for reading the pushbutton status


void setup() {
  // Iniciar led como output
  pinMode(Led, OUTPUT);
  // Iniciar botones como input
  pinMode(Timbre, INPUT);
  }

void loop() {
  // Leer estado
  Estado = digitalRead(Timbre);
 
  // check if the pushbutton is pressed.
   if (Estado == HIGH) {
    // Encender Led
    digitalWrite(Led, HIGH);
   if (Estado == LOW) {
    // Encender Led
    digitalWrite(Led,     LOW);
       }
    }
   }
