#include "Header.h"

void Person::Show() const
{
	cout << FirstName << " " << LastName << endl;
}
void Gunslinger::Show() const
{
	Person::Show();

	cout << Gunslinger::Draw() << " " << TimeForShoot << endl;

}

PokerPlayer::Card PokerPlayer::Draw()
{
	int res;
	srand(time(0));
	string Card[4] = { "Bubna","Pika", "Chresta", "Chirva" };
	string Suits[4] = { "Ace", "Jack", "Queen", "King" };
	card.Suit = Card[rand() % 4];
	res = (rand() % 13 + 2);
	if (res <= 10)
	{
		card.Name = to_string(res);
	}
	else
	{
		card.Name = Suits[rand() % 4];
	}

	return card;

}

void PokerPlayer::Show() const
{
	Person::Show();
	cout << card.Name << " " << card.Suit << endl;
}


double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}
PokerPlayer::Card BadDude::CDraw()
{
	return PokerPlayer::Draw();
}
void BadDude::Show() const
{
	Person::Show();
}