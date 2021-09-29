// 13.14 dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// Abstract base class
class abcDMA
{
	private:
		char * label;
		int rating;
	public:
		abcDMA(const char * l = "null", int r = 0);
		abcDMA(const abcDMA & rs);
		virtual ~abcDMA();
		abcDMA & operator=(const abcDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const abcDMA & rs);
		virtual void View() const = 0;
};

// Base Class Using DMA
class baseDMA : public abcDMA
{
	public:
		baseDMA(const char * l = "null", int r = 0);
		baseDMA(const baseDMA & rs);
		~baseDMA();
		baseDMA & operator=(const baseDMA & rs);
		virtual void View() const;
		friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public abcDMA
{
	private:
		enum { COL_LEN = 40 };
		char color[COL_LEN];
	public:
		lacksDMA(const char * c = "blank", const char * l = "null",
							int r = 0);
		lacksDMA(const char * c, const abcDMA & rs);
		lacksDMA(const lacksDMA & rs);
		virtual ~lacksDMA() {};
		lacksDMA & operator=(const lacksDMA & rs);
		virtual void View() const;
		friend std::ostream & operator<<(std::ostream & os,
																			const lacksDMA & rs);
};

// derived class with DMA
class hasDMA : public abcDMA
{
	private:
		char * style;
	public:
		hasDMA(const char * s = "none", const char * l = "null",
							int r = 0);
		hasDMA(const char * s, const abcDMA & rs);
		hasDMA(const hasDMA & hs);
		virtual ~hasDMA();
		virtual hasDMA & operator=(const hasDMA & rs);
		virtual void View() const;
		friend std::ostream & operator<<(std::ostream & os, 
																			const hasDMA & rs);
};
#endif
