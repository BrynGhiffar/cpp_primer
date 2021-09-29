#include <iostream>
#include "dma.h"

const int MAX_DMA = 3;
const int MAX_STR = 500;
int main()
{
	abcDMA * dmas[MAX_DMA];
	char label[MAX_STR];
	int rating;
	char color[MAX_STR];
	char style[MAX_STR];
	char dma_kind;
	for (int i = 0; i < MAX_DMA; i++)
	{
		std::cout << "Enter label: ";
		std::cin.getline(label, MAX_STR);

		std::cout << "Enter rating: ";
		(std::cin >> rating).get();

		do {
			std::cout << "--- DMA type ---\n";
			std::cout << "1) baseDMA\n";
			std::cout << "2) lacksDMA\n";
			std::cout << "3) hasDMA\n";
			std::cout << "Enter type: ";
		} while (std::cin >> dma_kind
				&& (dma_kind != '1' && dma_kind != '2' && dma_kind != '3'));
			while (std::cin.get() != '\n');

		if (dma_kind == '1') // baseDMA
		{
			dmas[i] = new baseDMA(label, rating);
		} else if (dma_kind == '2')
		{
			std::cout << "Enter color: ";
			std::cin.getline(color, MAX_STR);
			dmas[i] = new lacksDMA(color, label, rating);
		} else {
			std::cout << "Enter style: ";
			std::cin.getline(style, MAX_STR);
			dmas[i] = new hasDMA(style, label, rating);
		}
	}
	std::cout << '\n';
	for (int i = 0; i < MAX_DMA; i++)
	{
		dmas[i]->operator=(*dmas[0]);
		dmas[i]->View();
		std::cout << '\n';
	}

	for (int i = 0; i < MAX_DMA; i++)
		delete dmas[i];
	std::cout << "Done.\n";
	return 0;
}
