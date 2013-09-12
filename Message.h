#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <set>
#include "Folder.h"

class Message
{
	friend class Folder;
	friend void swap(Message&, Message&);
public:
	explicit Message(const std::string &str = "")
		:contents(str) {}
	Message(const Message&);
	Message& operator= (const Message&);
	~Message();

	void save(Folder&);
	void remove(Folder&);
private:
	std::string contents;
	std::set<Folder*> folders;
	void add_to_folders(const Message&);
	void remove_from_folders();
};
void swap(Message&, Message&);
#endif