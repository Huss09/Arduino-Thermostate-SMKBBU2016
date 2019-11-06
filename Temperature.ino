int A5;
float tempc; //Temperature in degree Celsius
float tempf; //Temperature in Fahreinheit
float vout;

void setup() {
pinMode(A5,INPUT); 
Serial.begin(9600);
}

void loop() {

vout=analogRead(A5); //Reading the value from sensor

vout=(vout*500)/1023;

tempc=vout; //Temperature in degree Celsius

tempf=(vout*1.8)+32; // Convert in Fahrenheit

Serial.print("DegreeC");

Serial.print("\t");

Serial.print(tempc);

Serial.print(" ");

Serial.print("Fahrenheit");

Serial.print("\t");

Serial.print(tempf);

Serial.println();

delay(500); //interval half second
