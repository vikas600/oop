 


#include <iostream>
#include <string>
#include <stdexcept>
class Publication {
protected:
std::string title;
float price;
public:

Publication(const std::string& t, float p) : title(t), price(p) {}

void display() const {
std::cout << "Title: " << title << "\n";
std::cout << "Price: $" << price << "\n";
}
};
class Book : public Publication {
private:
int pageCount;
public:

Book(const std::string& t, float p, int pages) : Publication(t, p),
pageCount(pages) {}

void display() const {
Publication::display();
std::cout << "Page Count: " << pageCount << "\n";
}
};
class Tape : public Publication {
private:
float playingTime;
public:

Tape(const std::string& t, float p, float time) : Publication(t, p),
playingTime(time) {}

void display() const {
Publication::display();
std::cout << "Playing Time (minutes): " << playingTime << "\n";
}
};
int main() {
try {

std::string bookTitle;
float bookPrice;
int bookPages;
std::cout << "Enter book title: ";
std::getline(std::cin, bookTitle);
std::cout << "Enter book price: ₹ ";
std::cin >> bookPrice;std::cout << "Enter page count: ";
std::cin >> bookPages;

Book book(bookTitle, bookPrice, bookPages);

std::cin.ignore(); 
std::string tapeTitle;
float tapePrice;
float tapeTime;
std::cout << "\nEnter tape title: ";
std::getline(std::cin, tapeTitle);
std::cout << "Enter tape price: ₹ ";
std::cin >> tapePrice;
std::cout << "Enter playing time (minutes): ";
std::cin >> tapeTime;

Tape tape(tapeTitle, tapePrice, tapeTime);

std::cout << "\nBook Information:\n";
book.display();
std::cout << "\nTape Information:\n";
tape.display();
} catch (const std::exception& e) {
std::cerr << "Exception caught: " << e.what() << "\n";

Book zeroBook("", 0.0, 0);
Tape zeroTape("", 0.0, 0.0);

std::cout << "\nZeroed Book Information:\n";
zeroBook.display();
std::cout << "\nZeroed Tape Information:\n";
zeroTape.display();
}
return 0;
}
