#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
class Sort_Algorithm
{
protected:
	int* arr;
	const int size;
	int compare;
public:
    Sort_Algorithm(int);
	~Sort_Algorithm();
	void print_arr() const;
	int Get_count() const;
	void Fill();
	virtual void Sort() = 0;
    virtual void Swap(int &, int &);
  
};
#endif
