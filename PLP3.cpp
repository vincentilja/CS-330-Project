/* EXAMPLE 1
int x = 9;
int y = 32;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else{
  cout << y + " is greater than " + x << endl;
}
*/

/* EXAMPLE 2
int x = 9;
int y = 32;
if (x > y == false){
  cout << y + " is greater than " + x << endl;
}
else{
  cout << x + " is greater than " + y << endl;
}
*/

/* EXAMPLE 3
// Create an if-else statement that determines whether someone born in June is a Gemini or a Cancer
int birthDay = 6;
int birthMonth = "June";
if (birthDay <= 20 && birthMonth == "June"){
  cout << "You are a Gemini!" << endl;
else{
  cout << "You are a Cancer!" << endl;
}
*/

/* EXAMPLE 4
int birthDay = 6;
int birthMonth = "June";
if (birthMonth == "June"){
  cout << "You are either a Gemini or a Cancer!" << endl;
  if (birthDay <= 20){
    cout << "You are a Gemini!" << endl;
  }
  else{
    cout << "You are a Cancer!" << endl;
  }
else{
  cout << "You are something else!" << endl;
}
*/

/* EXAMPLE 5
int x = 9;
int y = 9;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else{
  cout << y + " is greater than " + x << endl;
}
*/

/* EXAMPLE 6
int x = 9;
int y = 9;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else if{
  cout << y + " is greater than " + x << endl;
}
else{
  cout << "It appears that these numbers are equal to each other"
}
*/

/* EXAMPLE 7
int birthDay = 6;
int birthMonth = "June";
if (birthMonth == "June"){
  cout << "You are either a Gemini or a Cancer!" << endl;
  if (birthDay <= 20)
    cout << "You are a Gemini!" << endl;
  else
    cout << "You are a Cancer!" << endl;
else
  cout << "You are something else!" << endl;
}
*/

/*
int x = 9;
if (x != 9 && x == 9){
  cout << "This is a contradiction!" << endl;
}
else{
  cout << "Please do not use and operators like this!" << endl;
}
*/

/*
int x = 9;
if (x == 9 || x != 9){
  cout << "This is not a contradiction!" << endl;
}
else{
  cout << "You can use or operators like this!" << endl;
}
*/

/*
int birthMonth = 6;
switch (birthMonth) {
  case 1:
    cout << "You are either a Capricorn or an Aquarius" << endl;
    break;
  case 2:
    cout << "You are either an Aquarius or a Pisces" << endl;
    break;
  case 3:
    cout << "You are either a Pisces or an Aries" << endl;
    break;
  case 4:
    cout << "You are either an Aries or a Taurus" << endl;
    break;
  case 5:
    cout << "You are either a Taurus or a Gemini" << endl;
    break;
  case 6:
    cout << "You are either a Gemini or a Cancer" << endl;
    break;
  case 7:
    cout << "You are either a Cancer or a Leo" << endl;
    break;
  case 8:
    cout << "You are either a Leo or a Virgo" << endl;
    break;
  case 9:
    cout << "You are either a Virgo or a Libra" << endl;
    break;
  case 10:
    cout << "You are either a Libra or a Scorpio" << endl;
    break;
  case 11:
    cout << "You are either a Scorpio or a Sagittarius" << endl;
    break;
  case 12:
    cout << "You are either a Sagittarius or a Capricorn" << endl;
    break;
  default:
    cout << "Invalid birth month. Try again." << endl;
    break;
}
*/