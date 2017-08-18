/*
On_To_Functions.cpp
Aug 18, 2017
Juan Casian
*/

#include <iostream>   //input output library

using namespace std;  //std namespace declaration

  int Value1, Value2;   // inicialice variables

void Addition (int a, int b) {        /*
                                        This cpp program has functions, a function is a
                                        set of instructions the system will follow once it is called.

                                        And example of it is the processes of addition, sub, mult, divi, and remainder

                                        There are 2 types of processes, the ones that need to return a value and
                                        those that don't.

                                        void is a function that does not need to return a value. As you can see it has no
                                        "return" command at the end

                                        The ones that need to return a value should be defined with the type of value they return
                                        Ex: "int Substraction" in this code, which returns a value of 0
                                        ***IMPORTANT*** this type of fucntions should ALWAYS have a return command!!!!

                                        In this program I used both to have an example of each one, but all of the functions
                                        could have been voids, because there was no need to return a value.

                                        HOW DOES A FUNCTION IS EXPRESSED?

                                        "Type of function" "Name for the function" (parameters that should enter fucntion) {

                                        all the code of what the process should follow

                                        *** Note: in parameters you also inicialice variables with the value of what you send
                                        when you call for the function in the main process
                                      }

                                        Ex:
                                        void Addition (int a, int b){

                                      }
                                        */
  int ResultAddition;
  ResultAddition = a + b;
  cout << "Result of addition = "; cout << ResultAddition; cout << "." << endl;
}

int Substraction (int a, int b) {       /* type of function: integer
                                            Name of function: Substraction
                                            Parameters: int a and int b (which are used inside the process)
                                            What it does: creates a variable for the answer of the operation
                                            Gives "ResultSubstraction" the value of variables "a" and "b" which values
                                            come from the call of the function
                                            then prints the result of the substaction
                                            Finally it returns a value of 0 so the process ends
                                            */
  int ResultSubstraction;
  ResultSubstraction = a - b;
  cout << "Result of substraction = "; cout << ResultSubstraction; cout << "." << endl;
  return 0;         /*IT IS EXTREMELY IMPORTANT TO RETURN SOMETHING FOR THE PROCESS TO RUN
                      In this case it is not important to return something but it is useful

                       If each function did not printed the result, then we could
                       return the value of the substaction and then print it from the main function
                       or use it to do something else.
                       */
}

int Multiplication (int a, int b) {
  int ResultMultiplication;
  ResultMultiplication = a * b;
  cout << "Result of multiplication = "; cout << ResultMultiplication; cout << "." << endl;
  return 0;
}

int Division (int a, int b) {
  int ResultDivition;
  ResultDivition = a / b;
  cout << "Result of division = "; cout << ResultDivition; cout << "." << endl;
  return 0;
}

int Remainder (int a, int b) {
  int ResultRemainder;
  ResultRemainder = a % b;
  cout << "Remainder of the division above =  "; cout << ResultRemainder; cout << "." << endl;
  return 0;
}
int main () {       /* EVEN IF THERE ARE PROCESS ABOVE MAIN THE PROGRAM, THE only
                      FUNCTION THAT THE PROGRAM WILL RUN AUTOMATICALLY AND FIRST IS
                      THE MAIN FUNCTION
                      */

  cout << "Please enter the first value: "; cin >> Value1;
  cout << "Please enter the second value: "; cin >> Value2;

  Addition (Value1, Value2);
  Substraction (Value1, Value2);
  Multiplication (Value1, Value2);
  /*
                                      This is how you call a FUNCTION
                                      "name of the function" (parameters expected by the function);

                                      In this case we call the function Multiplication, which will run:
                                      int Multiplication (int a, int b) {
                                        int ResultMultiplication;
                                        ResultMultiplication = a * b;
                                        cout << "Result of multiplication = "; cout << ResultMultiplication; cout << "." << endl;
                                        return 0;
                                      }

                                      giving variable "a" the value of "Value1" and variable "b" the value of "Value2"

                                    */

  Division (Value1, Value2);
  Remainder (Value1, Value2);

  return 0;       /* "main"  is the only function that if you forget to return a value the program will take it as
                      return 0; but add it anyway */
}
