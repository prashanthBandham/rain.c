int rainsense= A0; // analog sensor input pin 24
int countval= 0;
 
void setup(){
   Serial.begin(9600);
   pinMode(rainsense, INPUT);
}
void loop(){
   int rainSenseReading = analogRead(rainsense);
   Serial.println(rainSenseReading); // serial monitoring message 
   delay(250);// rain sensing value from 0 to 1023.
   // from heavy rain - no rain.
   if (countval >= 35){ 
      Serial.print("Heavy rain");
   }
   if (rainSenseReading <500){ 
      countval++; // increment count value
   }
   else if (rainSenseReading >500) { // if not raining
    Serial.print("Low rain");
    countval++;
   
   }
   else if (rainSenseReading = 0) {
    Serial.print("No rain");
    countval = 0;//eset count to r0
   }
   delay(1000);
}
