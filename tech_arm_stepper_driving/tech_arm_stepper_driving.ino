const int dir_lx = 22;
const int step_lx = 13;

const int dir_ly=23;
const int step_ly=12;

const int dir_ry=24;
const int step_ry=11;

const int dir_pinza=25;
const int step_pinza=10;

int vel_baja=40;
int vel_media=20;
int vel_alta=8;
 
void setup() {
  
   // Marcar los pines como salida
   pinMode(dir_lx, OUTPUT);
   pinMode(step_lx, OUTPUT);
   pinMode(dir_ly, OUTPUT);
   pinMode(step_ly, OUTPUT);
   pinMode(dir_ry, OUTPUT);
   pinMode(step_ry, OUTPUT);


 
}
 
void loop() {

int LX=analogRead(A0);

int LY=analogRead(A1);

int RY=analogRead(A2);

int L3=analogRead(A3);

int R3=analogRead(A4);

//CONTROL LX
////SENTIDO ANTI-HORARIO  
  while (LX >= 525 && LX<=650) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_baja);
      digitalWrite(step_lx, LOW);
      delay(vel_baja);
      LX=analogRead(A0);
  }

  while (LX > 650 && LX<=860) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_media);
      digitalWrite(step_lx, LOW);
      delay(vel_media);
      LX=analogRead(A0);
  }

 while (LX >860) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_alta);
      digitalWrite(step_lx, LOW);
      delay(vel_alta);
      LX=analogRead(A0);
  }

////SENTIDO HORARIO

while (LX <= 490 && LX >= 350) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_baja);
      digitalWrite(step_lx, LOW);
      delay(vel_baja);
      LX=analogRead(A0);
  }

  while (LX < 350 && LX >= 190) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_media);
      digitalWrite(step_lx, LOW);
      delay(vel_media);
      LX=analogRead(A0);
  }

 while (LX <190) {
      LX=analogRead(A0);
      digitalWrite(dir_lx, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_lx, HIGH);
      delay(vel_alta);
      digitalWrite(step_lx, LOW);
      delay(vel_alta);
      LX=analogRead(A0);
  }

//CONTROL LY
////SENTIDO ANTI-HORARIO  
  while (LY >= 525 && LY<=650) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_baja);
      digitalWrite(step_ly, LOW);
      delay(vel_baja);
      LY=analogRead(A1);
  }

  while (LY > 650 && LY<=860) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_media);
      digitalWrite(step_ly, LOW);
      delay(vel_media);
      LY=analogRead(A1);
  }

 while (LY >860) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_alta);
      digitalWrite(step_ly, LOW);
      delay(vel_alta);
      LY=analogRead(A1);
  }

////SENTIDO HORARIO

while (LY <= 490 && LY >= 350) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_baja);
      digitalWrite(step_ly, LOW);
      delay(vel_baja);
      LY=analogRead(A1);
  }

  while (LY < 350 && LY >= 190) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_media);
      digitalWrite(step_ly, LOW);
      delay(vel_media);
      LY=analogRead(A1);
  }

 while (LY < 190) {
      LY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_alta);
      digitalWrite(step_ly, LOW);
      delay(vel_alta);
      LY=analogRead(A1);
  }

  //CONTROL RY
////SENTIDO ANTI-HORARIO  
  while (RY >= 525 && RY<=650) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_baja);
      digitalWrite(step_ly, LOW);
      delay(vel_baja);
      RY=analogRead(A1);
  }

  while (RY > 650 && RY<=860) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_media);
      digitalWrite(step_ly, LOW);
      delay(vel_media);
      RY=analogRead(A1);
  }

 while (RY >860) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_alta);
      digitalWrite(step_ly, LOW);
      delay(vel_alta);
      RY=analogRead(A1);
  }

////SENTIDO HORARIO

while (RY <= 490 && RY >= 350) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_baja);
      digitalWrite(step_ly, LOW);
      delay(vel_baja);
      RY=analogRead(A1);
  }

  while (RY < 350 && RY >= 190) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_media);
      digitalWrite(step_ly, LOW);
      delay(vel_media);
      RY=analogRead(A1);
  }

 while (RY < 190) {
      RY=analogRead(A1);
      digitalWrite(dir_ly, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_ly, HIGH);
      delay(vel_alta);
      digitalWrite(step_ly, LOW);
      delay(vel_alta);
      RY=analogRead(A1);
  }

//CONTROL PINZA
////SENTIDO ANTI-HORARIO  
  while (L3 > 300) {
      L3=analogRead(A3);
      digitalWrite(dir_pinza, HIGH);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_pinza, HIGH);
      delay(vel_baja);
      digitalWrite(step_pinza, LOW);
      delay(vel_baja);
      L3=analogRead(A3);
  }

////SENTIDO HORARIO  
  while (R3 > 300) {
      R3=analogRead(A4);
      digitalWrite(dir_pinza, LOW);  // (HIGH = anti-clockwise / LOW = clockwise)
      digitalWrite(step_pinza, HIGH);
      delay(vel_baja);
      digitalWrite(step_pinza, LOW);
      delay(vel_baja);
      R3=analogRead(A4);
  }
}
