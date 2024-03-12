#include <LiquidCrystal.h>

// Initialize the LCD
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  unsigned long currentMillis = millis();
  unsigned long seconds = currentMillis / 1000;
  unsigned long minutes = seconds / 60;
  unsigned long hours = minutes / 60;
  unsigned long days = hours / 24;
  
  // Calculate the current time and date
  int second = seconds % 60;
  int minute = minutes % 60;
  int hour = hours % 24;
  int day = days % 31 + 1; // Assume a month with 31 days
  int month = (days / 31) % 12 + 1; // Assume a 12-month calendar
  int year = 2024 + (days / 365); // Approximate year
  
  // Print the current time and date on the LCD
  lcd.clear(); // Clear the LCD screen
  lcd.setCursor(0, 0); // Set the cursor to the first row, first column
  lcd.print("Date: ");
  lcd.print(year);
  lcd.print("-");
  if (month < 10) lcd.print("0"); // Add leading zero if month is less than 10
  lcd.print(month);
  lcd.print("-");
  if (day < 10) lcd.print("0"); // Add leading zero if day is less than 10
  lcd.print(day);

  lcd.setCursor(0, 1); // Set the cursor to the second row, first column
  lcd.print("Time: ");
  if (hour < 10) lcd.print("0"); // Add leading zero if hour is less than 10
  lcd.print(hour);
  lcd.print(":");
  if (minute < 10) lcd.print("0"); // Add leading zero if minute is less than 10
  lcd.print(minute);
  lcd.print(":");
  if (second < 10) lcd.print("0"); // Add leading zero if second is less than 10
  lcd.print(second);

  delay(1000); // Update every second
}