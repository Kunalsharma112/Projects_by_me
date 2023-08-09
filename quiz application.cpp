#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};

int main() {
    cout << "\n\n\t\t\t\tTHE DAILY QUIZ" << endl;
    cout << "\nPress Enter to start the quiz... " << endl;
    cin.get();

    string Name;
    int Age;
    cout << "What is your name?" << endl;
    cin >> Name;
    cout << endl;

    cout << "How old are you?" << endl;
    cin >> Age;
    cout << endl;

    string Respond;
    cout << "Are you ready to take the quiz " << Name << "? yes/no" << endl;
    cin >> Respond;

    if (Respond == "yes") {
        cout << endl;
        cout << "Good Luck!" << endl;
    } else {
        cout << "Okay Good Bye!" << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("Question 1: What is the capital of France?", "Paris", "London", "Berlin", "Madrid", 1, 10);
    q2.setValues("Question 2: Which planet is closest to the Sun?", "Mars", "Venus", "Mercury", "Jupiter", 3, 10);
    q3.setValues("Question 3: What is the largest mammal?", "Elephant", "Giraffe", "Blue Whale", "Lion", 3, 10);
    q4.setValues("Question 4: Which gas do plants absorb from the atmosphere?", "Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen", 2, 10);
    q5.setValues("Question 5: Who wrote the play 'Hamlet'?", "William Shakespeare", "Charles Dickens", "Jane Austen", "Leo Tolstoy", 1, 10);
    q6.setValues("Question 6: What is the chemical symbol for water?", "O", "W", "H2O", "H", 4, 10);
    q7.setValues("Question 7: What is the tallest mountain in the world?", "Mount Kilimanjaro", "Mount Everest", "Mount Fuji", "Mount McKinley", 2, 10);
    q8.setValues("Question 8: Which instrument is used to measure earthquakes?", "Thermometer", "Barometer", "Seismometer", "Hygrometer", 3, 10);
    q9.setValues("Question 9: What is the chemical formula for table salt?", "NaCl", "H2O", "CO2", "CaCO3", 1, 10);
    q10.setValues("Question 10: Who painted the Mona Lisa?", "Pablo Picasso", "Vincent van Gogh", "Leonardo da Vinci", "Michelangelo", 3, 10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    cout << "Total Score = " << Total << " out of 100" << endl;

    if (Total >= 70) {
        cout << "Congrats you passed the quiz!" << endl;
    } else {
        cout << "Alas! You failed the quiz." << endl;
        cout << "Better luck next time." << endl;
    }

    return 0;
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa) {
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion() {
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "What is your answer? (Enter the corresponding number)" << endl;
    cin >> Guess;

    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct!" << endl;
        Total = Total + Question_Score;
        cout << "Score = " << Question_Score << " out of " << Question_Score << "!" << endl;
        cout << endl;
    } else {
        cout << endl;
        cout << "Wrong!" << endl;
        cout << "Score = 0 out of " << Question_Score << "!" << endl;
        cout << "Correct answer = " << Correct_Answer << "." << endl;
        cout << endl;
    }
}
