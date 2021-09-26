#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void display(box the_box);
void update_volume(box * ba);

int main()
{
	using namespace std;
	cout << "Enter maker of the box: ";
	box my_box;
	cin.getline(my_box.maker, 40);
	cout << "Enter dimensions of box (H x W x L): ";
	cin >> my_box.height >> my_box.width >> my_box.length;
	update_volume(&my_box);
	display(my_box);
}

void display(box the_box)
{
	using namespace std;
	cout << "maker: " << the_box.maker << endl;
	cout << "dimensions (H x W x L): " << the_box.height << ' '
				<< the_box.width << ' ' << the_box.length << endl;
	cout << "volume: " << the_box.volume << endl;
}

void update_volume(box * ba)
{
	ba->volume = ba->height * ba->width * ba->length;
}
