#ifndef DMA_H_
#define DMA_H_
#include <iostream>
class abcDMA{
private:
	char *label;
public:
	abcDMA(const char * l = "null");
	abcDMA(const abcDMA & rs);
	virtual ~abcDMA();
	abcDMA & operator=(const abcDMA &rs);
	virtual View() const { std::cout << "Label: " << label << std::endl;} 
};
class baseDMA:public abcDMA{
private:
	int rating;
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const abcDMA &, int r = 0);
	virtual ~baseDMA();
	virtual View() const { abcDMA::View(); std::cout << "Rating: " << rating << std::endl;} 
};

class lacksDMA : public abcDMA{
private:
	enum { COL_LEN = 40};
	char color[COL_LEN];
public:
	lacksDMA(const char *c = "blank", const char *l="null");
	lacksDMA(const char * c, const abcDMA & rs);
	virtual ~lacksDMA();
	virtual View() const { abcDMA::View(); std::cout << "Color: " << color << std::endl;} 
};

class hasDMA : public abcDMA{
private:
	char * style; 
public:
	hasDMA(const char *s = "none", const char * l = "null");
	hasDMA(const char * s, const abcDMA & rs);
	hasDMA(const hasDMA &hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	virtual View() const { abcDMA::View(); std::cout << "style: " << style << std::endl;} 
};
#endif
