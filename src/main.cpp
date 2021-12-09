// TIC TAC TOE
#include <iostream>
#include <string>
using namespace std;

int main()
{
int answer;
cout << " 1 | 2 | 3\n 4 | 5 | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
if (answer == 1) {
cout << " x | 2 | 3\n 4 | 5 | 6\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " x | 2 | 3\n 4 | o | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
    if (answer == 1) {
    cout << "Illegal move.";
    system("pause");
    }
    if (answer == 2) {
    cout << " x | x | 3\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | x | o\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 3) {
    cout << " x | 2 | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | o | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    
}
    if (answer == 4) {
    cout << " x | 2 | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | 2 | 3\n x | o | 6\n o | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    
}
    if (answer == 5) {
    cout << "Illegal move.";
    system("pause");
}
    if (answer == 6) {
    cout << " x | 2 | 3\n 4 | o | x\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | 2 | o\n 4 | o | x\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
}
    if (answer == 7) {
    cout << " x | 2 | 3\n 4 | o | 6\n x | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | 2 | 3\n o | o | 6\n x | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
}
    if (answer == 8) {
    cout << " x | 2 | 3\n 4 | o | 6\n 7 | x | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | 2 | 3\n 4 | o | 6\n o | x | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
}
    if (answer == 9) {
    cout << " x | 2 | 3\n 4 | o | 6\n 7 | 8 | x \n";
    cout << "The Computer will now do its move\n";
    cout << " x | 2 | 3\n 4 | o | 6\n 7 | 8 | x \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
}
}
if (answer == 2) {
cout << " 1 | x | 3\n 4 | 5 | 6\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | x | 3\n 4 | o | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
    if (answer == 1) {
    cout << " x | x | o\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | x | 3\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 2) {
    cout << " 1 | x | 3\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Illegal move.";
    system("pause");
    }
    if (answer == 3) {
    cout << " 1 | x | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | x | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 4) {
    cout << " 1 | x | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | x | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 5) {
    cout << "Illegal move.";
    system("pause");
    }
    if (answer == 6) {
    cout << " 1 | x | 3\n 4 | o | x\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | x | o\n 4 | o | x\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 7) {
    cout << " 1 | x | 3\n 4 | o | 6\n x | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | x | 3\n o | o | 6\n x | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 8) {
    cout << " 1 | x | 3\n 4 | o | 6\n 7 | x | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | x | 3\n o | o | 6\n 7 | x | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 9) {
    cout << " 1 | x | 3\n 4 | o | 6\n 7 | 8 | x \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | x | 3\n 4 | o | o\n 7 | 8 | x \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
}
if (answer == 3) {
cout << " 1 | 2 | x\n 4 | 5 | 6\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | x\n 4 | o | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
    if (answer == 1) {
    cout << " x | 2 | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | o | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 2) {
    cout << " 1 | x | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | x | x\n 4 | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 3) {
    cout << "Illegal Move.";
    system("pause");
    } 
    if (answer == 4) {
    cout << " 1 | 2 | x\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | o | x\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 5) {
    cout << "Illegal Move.";
    system("pause");
    }
    if (answer == 6) {
    cout << " 1 | 2 | x\n 4 | o | x\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | x\n 4 | o | x\n 7 | 8 | o \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 7) {
    cout << " 1 | 2 | x\n 4 | o | 6\n x | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | x\n 4 | o | 6\n x | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 8) {
    cout << " 1 | 2 | x\n 4 | o | 6\n 7 | x | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | x\n 4 | o | o\n 7 | x | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 9) {
    cout << " 1 | 2 | x\n 4 | o | 6\n 7 | 8 | x \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | x\n 4 | o | o\n 7 | 8 | x \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
}
if (answer == 4) {
cout << " 1 | 2 | 3\n x | 5 | 6\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | 3\n x | o | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
    if (answer == 1) {
    cout << " x | 2 | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " x | o | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 2) {
    cout << " 1 | x | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | x | 3\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 3) {
    cout << " 1 | 2 | x\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | o | x\n x | o | 6\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 4) {
    cout << "Illegal move";
    system("pause");
    }
    if (answer == 5) {
    cout << "Illegal move";
    system("pause");
    }
    if (answer == 6) {
    cout << " 1 | 2 | 3\n x | o | x\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | 3\n x | o | x\n 7 | o | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 7) {
    cout << " 1 | 2 | 3\n x | o | 6\n x | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | 3\n x | o | 6\n x | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 8) {
    cout << " 1 | 2 | 3\n x | o | 6\n 7 | x | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | 3\n x | o | 6\n o | x | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 9) {
    cout << " 1 | 2 | 3\n x | o | 6\n 7 | 8 | x \n";
    cout << "The Computer will now do its move\n";
    cout << " 1 | 2 | 3\n x | o | 6\n 7 | o | x \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
}
}
if (answer == 5) {
cout << " 1 | 2 | 3\n 4 | x | 6\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " o | 2 | 3\n 4 | x | 6\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
cin >> answer;
    if (answer == 1) {
    cout << "Illegal move";
    system("pause");
    }
    if (answer == 2) {
    cout << " o | x | 3\n 4 | x | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | x | 3\n 4 | x | 6\n 7 | o | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 3) {
    cout << " o | 2 | x\n 4 | x | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | x\n 4 | x | 6\n o | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 4) {
    cout << " o | 2 | 3\n x | x | 6\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | 3\n x | x | o\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 5) {
    cout << "Illegal move.";
    system("pause");
    }
    if (answer == 6) {
    cout << " o | 2 | 3\n 4 | x | x\n 7 | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | 3\n o | x | x\n 7 | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 7) {
    cout << " o | 2 | 3\n 4 | x | 6\n x | 8 | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | o\n 4 | x | 6\n x | 8 | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 8) {
    cout << " o | 2 | 3\n 4 | x | 6\n 7 | x | 9 \n";
    cout << "The Computer will now do its move\n";
    cout << " o | o | 3\n 4 | x | 6\n 7 | x | 9 \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
    if (answer == 9) {
    cout << " o | 2 | 3\n 4 | x | 6\n 7 | 8 | x \n";
    cout << "The Computer will now do its move\n";
    cout << " o | 2 | 3\n 4 | x | 6\n o | 8 | x \n";
    cout << "Please enter a number through 1 to 9\n";
    cin >> answer;
    }
}
if (answer == 6) {
cout << " 1 | 2 | 3\n 4 | 5 | x\n 7 | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | 3\n 4 | o | x\n 7 | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
}
if (answer == 7) {
cout << " 1 | 2 | 3\n 4 | 5 | 6\n x | 8 | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | 3\n 4 | o | 6\n x | 8 | 9 \n";
cout << "Please enter a number through 1 to 9\n";
}
if (answer == 8) {
cout << " 1 | 2 | 3\n 4 | 5 | 6\n 7 | x | 9 \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | 3\n 4 | o | 6\n 7 | x | 9 \n";
cout << "Please enter a number through 1 to 9\n";
}
if (answer == 9) {
cout << " 1 | 2 | 3\n 4 | 5 | 6\n 7 | 8 | x \n";
cout << "The Computer will now do its move\n";
cout << " 1 | 2 | 3\n 4 | o | 6\n 7 | 8 | x \n";
}
}