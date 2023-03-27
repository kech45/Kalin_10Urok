#include <iostream>

//zad1    
class Word 
{
private:
	char* word;
public:
	Word(const char *Word)
	{
		word = new char[strlen(Word) + 1];
		strcpy(word, Word);
	}
	Word()
	{
		word = new char{ 0 };
	}
	~Word() {
		delete[]word;
	}
	char* getWord()
	{
		return word;
	}
	char& operator[](unsigned i) {

		return word[i];
	}
	Word operator+(const Word& other)
	{
		if (strlen(this->word) + strlen(other.word) <= 20)  {
			char* c = new char[strlen(this->word) + strlen(other.word) + 1];
			strcpy(c, this->word);
			strcat(c, other.word);
			Word result;
			delete[] result.word;
			result.word = c;
			return result;
		}
	
		return 0;
	}
	Word& operator+=(const Word& other)
	{
		*this = *this + other;
		return *this;
	}
	bool operator <(const Word& other)
	{
		return (strcmp(this->word, other.word) < 0);
	}
	bool operator == (const Word& other)
	{
		return (strcmp(this->word, other.word) == 0);
	}
};
//zad2
class NumbersSummator {
private:
	int sum;
	int counter = 0;
public:
	NumbersSummator(int number) {
		sum = number;
	}
	NumbersSummator() {

	}
	~NumbersSummator() {
		
	}
	double Sum() {
		return sum;
	}
	void Add(int n)
	{
		sum += n;
		counter++;
	}
	void Sub(int n)
	{
		sum -= n;
		counter++;
	}
	unsigned Num()
	{
		return counter;
	}
	double Average() {

		double result;
		return result = Sum() / counter;
	}

};

//zad3
class HistoryEntry {
private:
	char* Url;
	unsigned Month;
public:
	HistoryEntry() {
		Url = new char{ 0 };
	}
	HistoryEntry(char* url1, unsigned month1)
	{
		Url = new char[strlen(url1) + 1];
		strcpy_s(Url, strlen(url1), url1);
		Month = month1;
	}
	~HistoryEntry() {
		delete[] Url;
	}

};

class BrowserHistory {

};




int main()
{
	
}