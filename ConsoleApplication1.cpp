#include <iostream>
#include <string>
#include <vector>

using namespace std;
void split(string str, vector <string> &array);

int main() {
	vector <string> array;
	split("It's split in C++", array);
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << endl;
	}

}

void split(string str, vector <string> &array) {
	//получаем указатель на первый элемент строки
	char *pstr = &str[0];

	//создаем пустую строку в которую будем добовлять слова
	string word;

	//идем до конца строки(нулевого символа)
	while (*pstr != '\0') {
		if (*pstr == ' ') {
			++pstr;
			array.push_back(word);
			word.clear();
		}
		else {
			word.push_back(*pstr);
			++pstr;
		}
	}
	array.push_back(word);
}