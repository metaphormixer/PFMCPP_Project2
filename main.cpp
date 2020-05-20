#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 int
 char
 bool
 float
 double
 void
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int gain = 8;
    int tremRate = 4;
    int chorDepth = 9;

    char prea = 'a';
    char preb = 'b';
    char prec = 'c';

    bool zeroSignal = true;
    bool distOver = false;
    bool codeReady = false;

    float gainDec = 8.5f;
    float tremRateDec = 4.7f;
    float chorDepthDec = 9.8f;

    double a = 4.6894;
    double b = -5948.385;
    double c = 0.0000005839;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(gain, tremRate, chorDepth, prea, preb, prec, zeroSignal, distOver, codeReady, gainDec, tremRateDec, chorDepthDec, a, b, c);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int age(int birthYear, int birthMonth, int birthDay, bool isAlive = true)
{
    ignoreUnused (birthYear, birthMonth, birthDay, isAlive);
    return {};
}
/*
 2)
 */
char presetName(char userInput, bool duplicate = false)
{
    ignoreUnused (userInput, duplicate);
    return {};
}
/*
 3)
 */
bool distortionPresent(float inputLevel, float outputLevel, bool overLimit = true)
{
    ignoreUnused (inputLevel, outputLevel, overLimit);
    return {};
}
/*
 4)
 */
float feedbackLevel(float crossTalk, float inputDifference, bool tapeUsed = true)
{
    ignoreUnused (tapeUsed, crossTalk, inputDifference);
    return {};
}
/*
 5)
 */
double duckingRate(float response, float ratio, double rateSet)
{
    ignoreUnused (response, ratio, rateSet);
    return {};
}
/*
 6)
 */
bool amILate(float meetingTime, float currentTime, bool sameDay = true)
{
    ignoreUnused (meetingTime, currentTime, sameDay);
    return {};
}
/*
 7)
 */
bool isItDoor(bool handle, bool doorFrame, bool hinge)
{
    ignoreUnused (handle, doorFrame, hinge);
    return {};
}
/*
 8)
 */
char fullName(char firstName, bool middleNameExist, char middleName, char lastName, bool suffixExist, char suffix)
{
    ignoreUnused (firstName, middleNameExist, middleName, lastName, suffixExist, suffix);
    return {};
}
/*
 9)
 */
bool letIn(char userName, bool passwordSuccess)
{
    ignoreUnused (userName, passwordSuccess);
    return {};
}
/*
 10)
 */
float timeElapsed(float startTime, float currentTime, int dayNumber)
{
    ignoreUnused (startTime, currentTime, dayNumber);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto ageGiven = age(1987, 4, 10, true);
    //2)
    auto presetNamed = presetName('g', false);
    //3)
    auto distortionOn = distortionPresent(192.5f, 89.2f, true);
    //4)
    auto feedbackOn = feedbackLevel(7.8f, -4.7f, true);
    //5)
    auto duckTastic = duckingRate(7.8f, 274.89f, 0.0000000000000027);
    //6)
    auto yesImLate = amILate(14.5f, 14.3f, true);
    //7)
    auto yesItsDoor = isItDoor(true, true, true);
    //8)
    auto nameGiven = fullName('a', true, 'b', 'c', true, 'd');
    //9)
    auto entrySuccess = letIn('a', true);
    //10)
    auto timeCalc = timeElapsed(4.5f, 7.8f, 1);
    ignoreUnused(ageGiven, presetNamed, distortionOn, feedbackOn, duckTastic, yesImLate, yesItsDoor, nameGiven, entrySuccess, timeCalc);
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
