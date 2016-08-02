#include <iostream>

//std::setprecision (used to cut off / expand floating point numbers)
#include <iomanip>

using namespace std;

    //amount of wrong answers
    int fails(0);

bool askQuestion(double number)
{
    cout << fixed;
    cout << "Convert this: " << number << " = ";
    string input;
    getline( cin, input);
    
    double tmp = atof( input.c_str());
    
    //correct answer
    if(tmp == number) return true;
    
    //else let the user rethink about shitty math skillz
    cout << "Try again!" << endl;
    return false;
}

int main(int argc, char** argv)
{
    double numbers[] = {34.5, 0.004000, 123.005, 146000, 146000.001, 0.00000000008, 34500.0};
    int size(sizeof( numbers) / sizeof( double));
    
    //begin quiz, init 3 tries for each question. Proceed to next question if success or after 3 fails.
    int i(0);
    while(i < size)
    {
        bool correctAnswer( false);
        int tries(3);
        while( !correctAnswer)
        {
            //check first, if user has some tries left, if yes: ask question
            if(tries == 0)
            {
                cout << "you suck" << endl;
                fails++;
                break;
            }
            correctAnswer = askQuestion(numbers[i]);
            tries--;
        }
        
        //if the answer is correct, go to the next number.
        if(tries != 0) cout << "Correct! Next one..." << endl;
        i++;
    }
    
    //print results
    float correctGuesses = float(size) - float(fails);
    float percentageCorrect( correctGuesses/float( size) * 100.f);
    cout << "You have " << correctGuesses << " of " << size << " correct. (" << setprecision(2) << percentageCorrect << "%)." << endl;
}
