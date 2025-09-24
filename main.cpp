// C++ program to illustrate the client application in the
// socket programming
#include <iostream>
#include <sqlite3.h>
using namespace std;


class Book{
    public:
        string book_title;
        string book_author;
        Book(string title, string author){
            book_title = title;
            book_author = author;
        }

        string get_title(){
            return book_title;
        }
        string get_author(){
            return book_author;
        }

};

int main(int argc, char ** argv)
{
    cout << "You entered: " << argc << "arguments" << endl;
    int i=0;
    while (i< argc){
        cout << "Argument: " << i + 1 << ": " << argv[i] << endl;
        i++;
    }
    /**
     * 
     * Book book1("Diary of A Wimpy Kid", "Jeff Kinney");
    Book book2("Diary of A Wimpy Kid: Rodrick Rules", "Jeff Kinney");
    Book book3("The Cat in the Hat", "Dr. Seuss");
    Book book4("To Kill A Mockingbird", "Harper Lee");
    Book book5("The Catcher and the Rye", "JD Salinger");
    Book book6("A Tale of Two cities", "Charles Dickens");
    Book book7("Of Mice and Men", "John Steinbeck");
    Book book8("Animal Farm", "George Orwell");
    Book book9("Diary of a Wimpy Kid: The Last Straw", "Jeff Kinney");
    Book book10("Diary of a Wimpy Kid: Dog Days", "Jeff Kinney");
    Book book11("Diary of a Wimpy Kid: The Ugly Truth", "Jeff Kinney");
    Book book12("Diary of a Wimpy Kid: Cabin Fever", "Jeff Kinney");
    Book book13("Diary of a Wimpy Kid: Hard Luck", "Jeff Kinney");
    Book book14("Diary of a Wimpy Kid: The Long Haul", "Jeff Kinney");
    Book book15("Diary of a Wimpy Kid: Old School", "Jeff Kinney");
    Book book16("Diary of a Wimpy Kid: Double Down", "Jeff Kinney");
    Book book17("Diary of a Wimpy Kid: The Getaway", "Jeff Kinney");
    Book book18("Diary of a Wimpy Kid: The Meltdown", "Jeff Kinney");
    Book book19("Diary of a Wimpy Kid: Wrecking Ball", "Jeff Kinney");
    Book book20("Diary of a Wimpy Kid: The Deep End", "Jeff Kinney");
    Book book21("Diary of a Wimpy Kid: Big Shot", "Jeff Kinney");
    Book book22("Diary of a Wimpy Kid: Diper Overlode", "Jeff Kinney");
    Book book24("Diary of a Wimpy Kid: No brainer", "Jeff Kinney");
    Book book25("Diary of a Wimpy Kid: Hot Mess", "Jeff Kinney");
    Book book26("Diary of a Wimpy Kid: Party Pooper", "Jeff Kinney");
    Book book27("The Hunger Games", "Suzanne Collins");
    Book book28("Mockingjay", "Suzanne Collins");
    Book book29("Catching Fire", "Suzanne Collins");
    Book book30("The Adventures of Captain Underpants", "Dav Pilkey");
    Book book31("Dog Man", "Dav Pilkey");
    Book book32("Romeo and Juliet", "William Shakespeare");
    Book book33("Midsummer Night's dream", "William Shakespeare");
    Book book34("The Grapes of Wrath", "John Steinbeck");
    Book book35("The Pearl", "John Steinbeck");
    Book book36("The Stranger", "Albert Camus");
    Book book37("Sunrise on the Reaping", "Suzanne Collins");
    Book book38("The Raven", "Edgar Allan Poe");
    Book book39("The Tell-Tale Heart", "Edgar Allan Poe");
    Book book40("The Fall of the House of Usher", "Edgar Allan Poe");
    Book book41("Oliver Twist", "Charles Dickens");
    Book book42("A Christmas Carol", "Charles Dickens");
    Book book43("David Copperfield", "Charles Dickens");
    Book book44("The Old Man and the Sea", "Ernest Hemingway");
    Book book45("For Whom the Bell Tolls", "Ernest Hemingway");
    Book book46("The Sun Also Rises", "Ernest Hemingway");
    Book book47("A Farewell to Arms", "Ernest Hemingway");
    Book book48("A Movable Feast", "Ernest Hemingway");
    Book book49("Men Without Women", "Ernest Hemingway");
    Book book50("Hills like White Elephants", "Ernest Hemingway");
    Book book51("The Da Vinci Code", "Dan Brown");
    Book book52("The Hobbit", "JRR Tolkien");

     */
    
    
    

    cout << "I love books!" << endl;
    return 0;
}