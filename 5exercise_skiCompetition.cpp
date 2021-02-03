#include <iostream>
#include <string.h>
using namespace std;
struct Contestent {
    int code;
    char name[21];
    int score;
    char country[21];
};

void EnterContestent(struct Contestent* con, int* count) {
    cout << "\nEnter Contestent Data:";
    cout << "\nEnter number: ";
    cin >> con[*count].code;
    cout << "\nEnter Name: ";
    cin >> con[*count].name;
    cout << "\nEnter Score: ";
    cin >> con[*count].score;
    cout << "\nEnter Country: ";
    cin >> con[*count].country;

    (*count)++;
}


void SortByName(struct Contestent* con, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place  
        for (j = 0; j < n - i - 1; j++)
            if (con[j].score > con[j + 1].score)
                swap(con[j], con[j + 1]);
}


void SortByScore(struct Contestent* con, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place  
        for (j = 0; j < n - i - 1; j++)
            if (strcmp( con[j].name, con[j + 1].name ))
                swap(con[j], con[j + 1]);
}

void ReportByScore(struct Contestent* con, int n) {
    //sort by score
    SortByScore(con, n);
    //sort by name
    SortByName(con, n);
    
    for (int i = 0; i < n; i++) {
        cout << "\nInfo on contestent #" << con[i].code;
        cout << "\nName: " << con[i].name;
        cout << "\nScore: " << con[i].score;
        cout << "\nCountry: " << con[i].country << endl;
    }
}

double calculateAverage(struct Contestent* con, int n) {
    double average = 0;
    for (int i = 0; i < n; i++) {
        average += con[i].score;
    }

    return average / n;
}

void ReportGreaterBy(struct Contestent* con, int n) {
    double average = calculateAverage(con, n);
    char country[21];

    cout << "\nEnter country\n";
    cin >> country;
    for (int i = 0; i < n; i++) {
        if (!strcmp(con[i].country, country) && (con[i].score < average)) {
            cout << "\nName: " << con[i].name << ", Code: " << con[i].code;
        }
    }
}

int main()
{
    struct Contestent con[100];
    int count = 0;
    char endMe = 'y';
    do
    {
        cout << "\n---Menu---";
        cout << "\n1. Enter Contestent.";
        cout << "\n2. Report by score";
        cout << "\n3. Average score";
        cout << "\n4. List greater than score\n";
        int menuChoise;
        cin >> menuChoise;

        if (menuChoise == 1) {
            EnterContestent(con, &count);
        }
        else if (menuChoise == 2) {
            ReportByScore(con, count);
        }
        else if (menuChoise == 3) {
            cout << "Average Score: " << calculateAverage(con, count);
        }
        else if (menuChoise == 4) {
            ReportGreaterBy(con, count);
        }

        cout << "\nTerminate program?";
        cin >> endMe;
    } while (endMe != 'y');
    
    return 0;
    
}
