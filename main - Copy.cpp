#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//CIS 326 - Patrick MacDowell - Lab Assignment 04
class StringManipulation
{
    private:
        //None needed

    public:
        StringManipulation(); //Constructor

        void IncrementAlphabetCounter(int Alphabet[], string fullTextInput); //Increases the Alphabet array by the number of times a character is in the input file
        void CalculatePercents(int Alphabet[], double Frequency[]); //Calculates the % number of times a character is in the input file
        void PrintOut(double Frequency[], int Alphabet[]); //Prints out the results
        void InitializeIntArray(int Alphabet[]); //Initializes the int array Alphabet by putting zeros into it
        void InitializeDoubleArray(double Frequency[]); //Initializes the double array Frequency by putting zeros into it

};

//Constructor for object initialization
StringManipulation::StringManipulation()
{
}

//This runs through the full input file, which is stored in fulltextinput and counts the number of times
//that a letter has been seen. It then increments the Alphabet respective position in the array by 1
void StringManipulation::IncrementAlphabetCounter(int Alphabet[], string fullTextInput)
{
    for( int i = 0; i < fullTextInput.size(); i++ )
    {
        char letter = fullTextInput[i];
        if (letter == 'a' || letter == 'A')
            Alphabet[0] += 1;
        else if (letter == 'b' || letter == 'B')
            Alphabet[1] += 1;
        else if (letter == 'c' || letter == 'C')
            Alphabet[2] += 1;
        else if (letter == 'd' || letter == 'D')
            Alphabet[3] += 1;
        else if (letter == 'e' || letter == 'E')
            Alphabet[4] += 1;
        else if (letter == 'f' || letter == 'F')
            Alphabet[5] += 1;
        else if (letter == 'g' || letter == 'G')
            Alphabet[6] += 1;
        else if (letter == 'h' || letter == 'H')
            Alphabet[7] += 1;
        else if (letter == 'i' || letter == 'I')
            Alphabet[8] += 1;
        else if (letter == 'j' || letter == 'J')
            Alphabet[9] += 1;
        else if (letter == 'k' || letter == 'K')
            Alphabet[10] += 1;
        else if (letter == 'l' || letter == 'L')
            Alphabet[11] += 1;
        else if (letter == 'm' || letter == 'M')
            Alphabet[12] += 1;
        else if (letter == 'n' || letter == 'N')
            Alphabet[13] += 1;
        else if (letter == 'o' || letter == 'O')
            Alphabet[14] += 1;
        else if (letter == 'p' || letter == 'P')
            Alphabet[15] += 1;
        else if (letter == 'q' || letter == 'Q')
            Alphabet[16] += 1;
        else if (letter == 'r' || letter == 'R')
            Alphabet[17] += 1;
        else if (letter == 's' || letter == 'S')
            Alphabet[18] += 1;
        else if (letter == 't' || letter == 'T')
            Alphabet[19] += 1;
        else if (letter == 'u' || letter == 'U')
            Alphabet[20] += 1;
        else if (letter == 'v' || letter == 'V')
            Alphabet[21] += 1;
        else if (letter == 'w' || letter == 'W')
            Alphabet[22] += 1;
        else if (letter == 'x' || letter == 'X')
            Alphabet[23] += 1;
        else if (letter == 'y' || letter == 'Y')
            Alphabet[24] += 1;
        else if (letter == 'z' || letter == 'Z')
            Alphabet[25] += 1;
        }
}

//Calculates the % of times that each letter in the alphabet array occurs by dividing each array item by
//the total amount of characters. It then places those %s into the frequency array respectfully A-Z.
void StringManipulation::CalculatePercents(int Alphabet[], double Frequency[])
{
    int total = 0;

    for (int i = 0; i < 26; i++)
    {
        total += Alphabet[i];
    }
    cout << "Total Number of Letters: " << total << endl;

    for (int i = 0; i < 26; i++)
    {
        Frequency[i] = 100*((double)Alphabet[i] / total);
    }
}

//Prints out the totals for the number of times each letter was incremented via the alphabet array and
//then shows the % via the respective frequency array.
void StringManipulation::PrintOut(double Frequency[], int Alphabet[])
{
    cout<< "Frequency of Letters by %: "<<endl;

    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'A', Alphabet[0], Frequency[0]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'B', Alphabet[1], Frequency[1]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'C', Alphabet[2], Frequency[2]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'D', Alphabet[3], Frequency[3]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'E', Alphabet[4], Frequency[4]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'F', Alphabet[5], Frequency[5]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'G', Alphabet[6], Frequency[6]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'H', Alphabet[7], Frequency[7]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'I', Alphabet[8], Frequency[8]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'J', Alphabet[9], Frequency[9]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'K', Alphabet[10], Frequency[10]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'L', Alphabet[11], Frequency[11]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'M', Alphabet[12], Frequency[12]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'N', Alphabet[13], Frequency[13]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'O', Alphabet[14], Frequency[14]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'P', Alphabet[15], Frequency[15]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'Q', Alphabet[16], Frequency[16]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'R', Alphabet[17], Frequency[17]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'S', Alphabet[18], Frequency[18]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'T', Alphabet[19], Frequency[19]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'U', Alphabet[20], Frequency[20]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'V', Alphabet[21], Frequency[21]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'W', Alphabet[22], Frequency[22]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'X', Alphabet[23], Frequency[23]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'Y', Alphabet[24], Frequency[24]);
    printf("Letter: %c -- Was Used %03d Times -- For a Total of %07.4f Percent \n", 'Z', Alphabet[25], Frequency[25]);
}

//Initializes the int array by setting all values to 0 via a for loop
void StringManipulation::InitializeIntArray(int ArrayInput[])
{
    for (int i = 0; i <26; i++)
    {
        ArrayInput[i] = 0;
    }
}

//Initializes the double array by setting all values to 0 via a for loop
void StringManipulation::InitializeDoubleArray(double ArrayInput[])
{
    for (int i = 0; i <26; i++)
    {
        ArrayInput[i] = 0.0;
    }
}

//Main Function
int main()
{
    int Alphabet[26];
    double Frequency[26];
    string fileName = "input.txt";

    //Asks the user for the filename and stores it
    cout<<"What Filename would you like to output? Might I suggest, OfStudies.txt?"<<endl;
    cin>>fileName;

    //Uses the file name and opens the file. If it is able to open it, the if function will execute
    string fullTextInput, str1;
    ifstream myfile;
    myfile.open(fileName.c_str());
    if (myfile.is_open())
        cout <<"Good Choice!\n"<<endl;
    else
    {
        //If the name of the file is not found, it will exit the program
        cout << "Unable to open file: "<<fileName<<"\n";
        exit(1);
    }

    //Places all of the characters from the input file into one long string str1
    getline(myfile, str1);
    while (myfile)
    {
        fullTextInput += str1;
        getline(myfile, str1);
    }
    myfile.close();

    cout<<"Let us review the frequencies in the following text: \n" << fullTextInput << endl;

    //Runs all calculations and printing out on the collected data
    StringManipulation Object1;
    Object1.InitializeDoubleArray(Frequency);
    Object1.InitializeIntArray(Alphabet);
    Object1.IncrementAlphabetCounter(Alphabet, fullTextInput);
    Object1.CalculatePercents(Alphabet, Frequency);
    Object1.PrintOut(Frequency, Alphabet);

    return 0;
}
