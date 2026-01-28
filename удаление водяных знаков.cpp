#include <iostream>
#include <string>

using namespace std;

string remove_watermark(const string& text) {
    string result;
    for (char c : text) {
        if (c != '#' && c != ' ') { // Удаляем знаки и пробелы
            result += c;
        }
    }
    return result;
}

int main() {
    string input = "Текст: ";
    string output = remove_watermark(input);

    cout << "Исходный текст: " << input << endl;
    cout << "Текст без водяного знака: " << output << endl;
    return 0;
}
