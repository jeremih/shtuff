#include "Folder.h"

Folder::Folder(const Folder &rhs)
{
	add_messages(rhs);
}

Folder& Folder::operator= (const Folder &rhs)
{
	remove_messages();
	add_messages(rhs);
	return *this;
}

Folder::~Folder()
{
	remove_messages();
}

void Folder::addMsg(Message *m)
{
	messages.insert(m);
}

void Folder::remMsg(Message *m)
{
	messages.erase(m);
}

void Folder::remove_messages()
{
	for (auto m: this->messages)
	{
		m->remove(*this);
	}
}

void Folder::add_messages(const Folder &f)
{
	for (auto m: f.messages)
	{
		m->save(*this);
	}
}
