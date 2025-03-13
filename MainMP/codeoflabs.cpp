#include "codeoflabs.h"
#include <iostream>
#include <winsock2.h>
#include <vector>
#include <fstream>
#include <list>
using namespace std;
HANDLE hOUTPUT2 = GetStdHandle(STD_OUTPUT_HANDLE);

///LOGO FOR LABS
void logo(int n) {
    system("cls");
    SetConsoleTextAttribute(hOUTPUT2, 11);
    wstring logo;
    if (n == 1) {
        logo = LR"(
 _______   ______   ______  __    __ ________ _______   ______   ______  __    __ ______ __    __  ______  
|       \ /      \ /      \|  \  /  \        \       \ /      \ /      \|  \  /  \      \  \  |  \/      \ 
| ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓ /  ▓▓\▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓ /  ▓▓\▓▓▓▓▓▓ ▓▓\ | ▓▓  ▓▓▓▓▓▓\
| ▓▓__/ ▓▓ ▓▓__| ▓▓ ▓▓   \▓▓ ▓▓/  ▓▓   | ▓▓  | ▓▓__| ▓▓ ▓▓__| ▓▓ ▓▓   \▓▓ ▓▓/  ▓▓  | ▓▓ | ▓▓▓\| ▓▓ ▓▓ __\▓▓
| ▓▓    ▓▓ ▓▓    ▓▓ ▓▓     | ▓▓  ▓▓    | ▓▓  | ▓▓    ▓▓ ▓▓    ▓▓ ▓▓     | ▓▓  ▓▓   | ▓▓ | ▓▓▓▓\ ▓▓ ▓▓|    \
| ▓▓▓▓▓▓▓\ ▓▓▓▓▓▓▓▓ ▓▓   __| ▓▓▓▓▓\    | ▓▓  | ▓▓▓▓▓▓▓\ ▓▓▓▓▓▓▓▓ ▓▓   __| ▓▓▓▓▓\   | ▓▓ | ▓▓\▓▓ ▓▓ ▓▓ \▓▓▓▓
| ▓▓__/ ▓▓ ▓▓  | ▓▓ ▓▓__/  \ ▓▓ \▓▓\   | ▓▓  | ▓▓  | ▓▓ ▓▓  | ▓▓ ▓▓__/  \ ▓▓ \▓▓\ _| ▓▓_| ▓▓ \▓▓▓▓ ▓▓__| ▓▓
| ▓▓    ▓▓ ▓▓  | ▓▓\▓▓    ▓▓ ▓▓  \▓▓\  | ▓▓  | ▓▓  | ▓▓ ▓▓  | ▓▓\▓▓    ▓▓ ▓▓  \▓▓\   ▓▓ \ ▓▓  \▓▓▓\▓▓    ▓▓
 \▓▓▓▓▓▓▓ \▓▓   \▓▓ \▓▓▓▓▓▓ \▓▓   \▓▓   \▓▓   \▓▓   \▓▓\▓▓   \▓▓ \▓▓▓▓▓▓ \▓▓   \▓▓\▓▓▓▓▓▓\▓▓   \▓▓ \▓▓▓▓▓▓                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
)";
    }
    else if (n == 2) {
        logo = LR"(
  ______  __        ______   ______  _______  ______ ________ __    __ __       __  ______  
 /      \|  \      /      \ /      \|       \|      \        \  \  |  \  \     /  \/      \ 
|  ▓▓▓▓▓▓\ ▓▓     |  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓▓▓▓▓▓\\▓▓▓▓▓▓\▓▓▓▓▓▓▓▓ ▓▓  | ▓▓ ▓▓\   /  ▓▓  ▓▓▓▓▓▓\
| ▓▓__| ▓▓ ▓▓     | ▓▓ __\▓▓ ▓▓  | ▓▓ ▓▓__| ▓▓ | ▓▓    | ▓▓  | ▓▓__| ▓▓ ▓▓▓\ /  ▓▓▓ ▓▓___\▓▓
| ▓▓    ▓▓ ▓▓     | ▓▓|    \ ▓▓  | ▓▓ ▓▓    ▓▓ | ▓▓    | ▓▓  | ▓▓    ▓▓ ▓▓▓▓\  ▓▓▓▓\▓▓    \ 
| ▓▓▓▓▓▓▓▓ ▓▓     | ▓▓ \▓▓▓▓ ▓▓  | ▓▓ ▓▓▓▓▓▓▓\ | ▓▓    | ▓▓  | ▓▓▓▓▓▓▓▓ ▓▓\▓▓ ▓▓ ▓▓_\▓▓▓▓▓▓\
| ▓▓  | ▓▓ ▓▓_____| ▓▓__| ▓▓ ▓▓__/ ▓▓ ▓▓  | ▓▓_| ▓▓_   | ▓▓  | ▓▓  | ▓▓ ▓▓ \▓▓▓| ▓▓  \__| ▓▓
| ▓▓  | ▓▓ ▓▓     \\▓▓    ▓▓\▓▓    ▓▓ ▓▓  | ▓▓   ▓▓ \  | ▓▓  | ▓▓  | ▓▓ ▓▓  \▓ | ▓▓\▓▓    ▓▓
 \▓▓   \▓▓\▓▓▓▓▓▓▓▓ \▓▓▓▓▓▓  \▓▓▓▓▓▓ \▓▓   \▓▓\▓▓▓▓▓▓   \▓▓   \▓▓   \▓▓\▓▓      \▓▓ \▓▓▓▓▓▓                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
)";
    }
    else if (n == 3) {
        logo = LR"(
 /$$   /$$  /$$$$$$   /$$$$$$  /$$   /$$         /$$$$$$$$ /$$   /$$ /$$   /$$  /$$$$$$ 
| $$  | $$ /$$__  $$ /$$__  $$| $$  | $$        | $$_____/| $$  | $$| $$$ | $$ /$$__  $$
| $$  | $$| $$  \ $$| $$  \__/| $$  | $$        | $$      | $$  | $$| $$$$| $$| $$  \__/
| $$$$$$$$| $$$$$$$$|  $$$$$$ | $$$$$$$$ /$$$$$$| $$$$$   | $$  | $$| $$ $$ $$| $$      
| $$__  $$| $$__  $$ \____  $$| $$__  $$|______/| $$__/   | $$  | $$| $$  $$$$| $$      
| $$  | $$| $$  | $$ /$$  \ $$| $$  | $$        | $$      | $$  | $$| $$\  $$$| $$    $$
| $$  | $$| $$  | $$|  $$$$$$/| $$  | $$        | $$      |  $$$$$$/| $$ \  $$|  $$$$$$/
|__/  |__/|__/  |__/ \______/ |__/  |__/        |__/       \______/ |__/  \__/ \______/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
)";
    }
    locale::global(locale("en_US.UTF-8"));
    wcout.imbue(locale());
    wcout << logo;
    SetConsoleTextAttribute(hOUTPUT2, 15);
    setlocale(LC_ALL, "RU");
}

///Lab1 - Метод отработки назад
void lab1() {
    logo(1);
    double S;
    double V;
    double l;

    cout << "\nВведите объем бака: ";
    cin >> V;
    cout << "Введите расход на км: ";
    cin >> l;
    cout << "Введите расстояние: ";
    cin >> S;

    double remaining = S;
    int stages = 0;

    while (remaining > 0) {
        stages++;
        double d_stage = V / ((2 * stages - 1) * l);
        remaining -= d_stage;
    }

    cout << "Мин. кол-во баков: " << stages << endl;
}


///Lab2 - Алгоритмы
int partition(int n, int max) {
    if (n == 0) return 1;
    if (n < 0 || max == 0) return 0;
    return partition(n - max, max) + partition(n, max - 1);
}

void lab2() {
    logo(2);
    cout << "\n\nКакая задача вас интересует?"
        "\n\n1. Ханойские башни"
        "\n2. Число способов разбиения числа"
        "\n3. Спички-камни" << endl;

    int n;
    int m;
    int omove;
    int ch;
    cout << "\n/#?: ";
    cin >> ch;

    switch (ch) {
    case 1:
        cout << "\nВведите число дисков: ";
        cin >> n;
        cout << "Минимальное количество ходов: " << (pow(2, n) - 1) << endl;
        break;
    case 2:
        cout << "\nВведите число для разбиения: ";
        cin >> n;
        cout << "Число разбиений: " << partition(n, n) << endl;
        break;
    case 3:
        cout << "\nВведите число спичек в начале: ";
        cin >> n;
        cout << "Введите макс. возможное число, которое можно взять за раз: ";
        cin >> m;
        omove = n % m;
        if (omove == 0) omove = 1;
        cout << "Первый игрок должен взять " << omove << " спичек, чтобы выиграть." << endl;
        break;
    default:
        system("cls");
        lab2();
        break;
    }
}


///Lab3 - Шахматная доска (Ферзи) 
int N;
int solutions = 0;
vector<int> finalBoard; // Для хранения одной из возможных расстановок

bool iS(const vector<int>& b, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (b[i] == col ||
            b[i] - i == col - row ||
            b[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

void q(vector<int>& b, int row) {
    if (row == N) {
        solutions++;
        if (solutions == 1) { 
            finalBoard = b;
        }
        return;
    }
    for (int col = 0; col < N; col++) {
        if (iS(b, row, col)) {
            b[row] = col;
            q(b, row + 1);
        }
    }
}

void printBoard(const vector<int>& b) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (b[i] == j) {
                cout << "Q "; 
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void lab3() {
    cout << "\nВведите число ферзей и размер доски: ";
    cin >> N;
    if (N < 4) {
        cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": 0" << endl;
    }
    else {
        vector<int> b(N, -1);
        q(b, 0);
        cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": " << solutions << endl;

        if (solutions > 0) {
            cout << "\nОдна из возможных расстановок:" << endl;
            printBoard(finalBoard);
        }
    }
}


///Lab4 - Хеширование
class HashTable {
private:
    int SIZE = 100;
    vector<list<int>> table;

    int hashFunction(int key) {
        cout << key << " " << key % 100 << endl;
        return key % SIZE;

    }

public:
    HashTable() : table(SIZE) {}

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
        ///cout << key << " " << index << endl;
        ///if (find(table[index].begin(), table[index].end(), key) == table[index].end()) {
        ///    table[index].push_back(key);
        ///}
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        return find(table[index].begin(), table[index].end(), key) != table[index].end();
    }

    void print(ofstream& outFile) {
        for (int i = 0; i < SIZE; i++) {
            if (!table[i].empty()) {
                outFile << "Index " << i << ": ";
                for (int num : table[i]) {
                    outFile << num << " ";
                }
                outFile << endl;
            }
        }
    }
};


void lab4() {
    logo(3);
    HashTable hashTable;
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile) {
        cerr << "\nОшибка открытия input.txt" << endl;
        system("exit");
    }

    int num;
    while (inputFile >> num) {
        hashTable.insert(num);
    }

    hashTable.print(outputFile);

    inputFile.close();
    outputFile.close();

    cout << "\nВведите число для поиска: ";
    cin >> num;

    if (hashTable.search(num)) {
        cout << "Число найдено в хеш-таблице." << endl;
    }
    else {
        cout << "Число отсутствует в хеш-таблице." << endl;
    }
}
