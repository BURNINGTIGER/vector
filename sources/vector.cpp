#include "vector.hpp"
vector_t::vector_t()
{
	ptr_ = new int[0];
}

vector_t::vector_t(unsigned int size)
{
	size_ = size;
	capacity_ = size;
	ptr_ = new int[size];
	for (int i = 0; i < size_; i++)
		ptr_[i] = 0;
}

vector_t::vector_t(const vector_t& other)
{
	ptr_ = new int[other.capacity_];
	size_ = other.size_;
	capacity_ = other.capacity_;
	
	for (int i = 0; i < size_; i++)
		ptr_[i] = other.ptr_[i];
}

vector_t::~vector_t() noexcept
{
	delete[] ptr_;
}

unsigned int vector_t:: size() const 
{
	return (size_);
}

vector_t& vector_t:: operator=(const vector_t& other)
{
	size_ = other.size_;
	capacity_ = other.capacity_;
	ptr_ = new int[capacity_];
	for (int i = 0; i < size_; i++)
		ptr_[i] = other.ptr_[i];
}

unsigned int vector_t::capacity() const
{
	return (capacity_);
}

auto vector_t::operator[](unsigned int index) const noexcept -> int
{
	return (ptr_[index ]);
}

void vector_t::push_back(int value)
{
	vector_t v1;
	v1 = *ptr_;
	if (capacity_ = size_)
		ptr_ = new int(2 * size_);
	for (int i = 0; i < v1.size_; i++)
		ptr_[i] = v1.ptr_[i];
	ptr_[size_ + 1] = value;
}
