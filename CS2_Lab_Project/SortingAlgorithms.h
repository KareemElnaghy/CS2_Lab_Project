#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
class Sort_Algorithm
{
protected:
	int* arr;
	const int size;
    int compare;
	int swaps;
public:
    Sort_Algorithm(int);
	~Sort_Algorithm();
	void print_arr() const;
    int Get_count() const;
	int get_Swaps() const;
	void Fill();
    int getSize() const;
    int *getArr() const;
	virtual void Sort() = 0;
    virtual void Swap(int &, int &);
  
};
#endif
