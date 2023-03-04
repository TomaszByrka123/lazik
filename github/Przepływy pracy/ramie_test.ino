void setup()            // funkcja konfigurująca
{
  pinMode(LED, OUTPUT); // ustawienie linii LED jako wyjściowej
}

void loop()             // pętla nieskończona
{
  digitalWrite(LED, HIGH);  // ustawienie bitu
  delay(1000);              // opóźnienie 1 s (1000 ms)
  digitalWrite(LED, LOW);   // wyzerowanie bitu
  delay(1000);              // opóźnienie 1 s (1000 ms)
}
//hejcia