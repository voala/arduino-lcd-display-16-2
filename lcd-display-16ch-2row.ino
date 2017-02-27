#include <LiquidCrystal.h> // incarcam libraria de LCD
LiquidCrystal LCD(10,9,5,4,3,2); // Cream obiectul LiquidCrystal denumit LCD (RS, E, DB4, DB5,DB6,DB7)
int myCounter=0; // declaram variabila myCounter

void setup() {
  
  LCD.begin(16,2); // Vom porni obiectul prin nume.begin(nr.randuri,nr.coloane);
  LCD.setCursor(0,0); // Vom stabili care este punctul de plecare al cursorului (coloana0,randul0);
  LCD.print("Cronometru: "); // Printeaza prima linie de pe ecran

}

void loop() {

  //NUMARAM PANA LA 10 LA 0
  for(myCounter=1; myCounter<=10; myCounter=myCounter+1){

      LCD.setCursor(0,1); // seteaza coloana 0 randul 1
      LCD.print("                "); // printeaza spatii goale pentru a goli randul
    
      LCD.setCursor(0,1); // setam cursorul la coloana 0 si randul 1 (al doilea rand)
      LCD.print(myCounter); // printam counterul
      LCD.print(" Secunde"); // ce printam
      delay(1000); // facem un delay de 1s
  }

  //NUMARAM DE LA 0 LA 10
  for(myCounter=10; myCounter>=0; myCounter=myCounter-1){

      LCD.setCursor(0,1); // seteaza coloana 0 randul 1
      LCD.print("                "); // printeaza spatii goale pentru a goli randul
    
      LCD.setCursor(0,1); // setam cursorul la coloana 0 si randul 1 (al doilea rand)
      LCD.print(myCounter); // printam counterul
      LCD.print(" Secunde"); // ce printam
      delay(1000); // facem un delay de 1s
  }

}
