#include "Game.h"
#include<cctype>
#include <concepts>
#ifndef SPADES
#define SPADES 1
#define CLUBS 2
#define HEARTS 3
#define DIAMONDS 4
#endif // !SPADES
#ifndef TWO
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 7
#define EIGHT 8
#define NINE 9
#define TEN 10
#define JACK 11
#define QUEEN 12
#define KING 13
#define ACE 14
#endif // TWO

//class Object
//{
//private:
//	const char* m_elem_type;
//	const char* m_mem_type;
//	void* m_ptr;
//public:
//	Object(const char* elem_type, const char* mem_type, void* ptr) : m_elem_type{elem_type}, m_mem_type{mem_type}, m_ptr{ptr} {}
//	~Object()
//	{
//		if (m_mem_type = "array")
//		{
//			if(m_elem_type == "int") delete[] (int*) m_ptr;
//			else if (m_elem_type == "char") delete[] (char*) m_ptr;
//			else if (m_elem_type == "double") delete[] (double*) m_ptr;
//			else if (m_elem_type == "float") delete[] (float*) m_ptr;
//			else if (m_elem_type == "bool") delete[] (bool*) m_ptr;
//			else if (m_elem_type == "long") delete[] (long*) m_ptr;
//			else if (m_elem_type == "short") delete[] (short*) m_ptr;
//			else if (m_elem_type == "long long") delete[] (long long*) m_ptr;
//			else if (m_elem_type == "long double") delete[] (long double*) m_ptr;
//			else if (m_elem_type == "unsigned int") delete[] (unsigned int*) m_ptr;
//			else if (m_elem_type == "unsigned char") delete[] (unsigned char*) m_ptr;
//			else if (m_elem_type == "unsigned long") delete[] (unsigned long*) m_ptr;
//			else if (m_elem_type == "unsigned short") delete[] (unsigned short*) m_ptr;
//			else if (m_elem_type == "unsigned long long") delete[] (unsigned long long*) m_ptr;
//		}
//		else
//		{
//			// delete each of the ptr according to their elem type
//			if (m_elem_type == "int") delete (int*) m_ptr;
//			else if (m_elem_type == "char") delete (char*) m_ptr;
//			else if (m_elem_type == "double") delete (double*) m_ptr;
//			else if (m_elem_type == "float") delete (float*) m_ptr;
//			else if (m_elem_type == "bool") delete (bool*) m_ptr;
//			else if (m_elem_type == "long") delete (long*) m_ptr;
//			else if (m_elem_type == "short") delete (short*) m_ptr;
//			else if (m_elem_type == "long long") delete (long long*) m_ptr;
//			else if (m_elem_type == "long double") delete (long double*) m_ptr;
//			else if (m_elem_type == "unsigned int") delete (unsigned int*) m_ptr;
//			else if (m_elem_type == "unsigned char") delete (unsigned char*) m_ptr;
//			else if (m_elem_type == "unsigned long") delete (unsigned long*) m_ptr;
//			else if (m_elem_type == "unsigned short") delete (unsigned short*) m_ptr;
//			else if (m_elem_type == "unsigned long long") delete (unsigned long long*) m_ptr;
//		}
//	}
//	friend std::ostream& operator<<(std::ostream& os, const Object& obj)
//	{
//		// check the mem type. If the mem type is arr, print out every element of the arr according to it's type
//		if (obj.m_mem_type == "array") os << obj.m_ptr;
//		else
//		{
//			if (obj.m_elem_type == "int")
//			{
//				os << *(int*)obj.m_ptr;
//			}
//			else if (obj.m_elem_type == "char")
//			{
//				os << *(char*)obj.m_ptr;
//			}
//			else if (obj.m_elem_type == "double")
//			{
//				os << *(double*)obj.m_ptr;
//			}
//			else if (obj.m_elem_type == "float")
//			{
//				os << *(double*)obj.m_ptr;
//			}
//		}
//		return os;
//	}
//////};

//template<typename T>
//class Object
//{
//private:
//	const char* state;
//	T* value;
//public:	
//	Object()
//	{
//		value = nullptr;
//		state = "Uninitialized";
//	}
//	Object(T* val)
//	{
//		value = val;
//		state = "Initialized";
//	}
//	~Object()
//	{
//		delete value;
//		state = "Destroyed";
//		std::cout << "Deleted!\n";
//	}
//	T& getObject()
//	{
//		return *value;
//	}
//	friend std::ostream& operator<<(std::ostream& os, Object& object)
//	{
//		os << object.getObject();
//		return os;
//	}
//	void operator=(T* val) 
//	{
//		if (strcmp(state, "Uninitialized")) delete value;
//		value = val;
//		state = "Initialized";
//	}
//	bool operator==(const Object<T>& object)
//	{
//		return (*object->value == this->value);
//	}
//	bool operator!=(const Object<T>& object)
//	{
//		return (*object->value != this->value);
//	}
//	void operator+=(const Object<T>& object)
//	{
//		if (isdigit(*object.value) || typeid(*object.value).name() == "class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >")
//			*this->value += *object->value;
//		else throw "Not a valid type!";
//	}
//	void operator+=(T t)
//	{
//		if (isdigit(*object.value) || typeid(*object.value).name() == "class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >")
//			*this->value += t;
//		else throw "Not a valid type!";
//	}
//	void operator+=(T& t)
//	{
//		if (isdigit(*object.value) || typeid(*object.value).name() == "class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >")
//			*this->value += t;
//		else throw "Not a valid type!";
//	}
//
//};
//
//template<typename T>
//class Vector
//{
//private:
//	std::unique_ptr<T[]> m_arr;
//	size_t m_capacity;
//	size_t m_size;
//public:
//	Vector()
//	{
//		m_arr = std::make_unique<int[]>(1);
//		m_capacity = 1;
//		m_size = 0;
//	}
//	T& operator[](const size_t index)
//	{
//		if (index > m_size) throw "Index out of bounds!";
//		return m_arr[index];
//	}
//	const size_t size() const
//	{
//		return m_size;
//	}
//	void Reserve(const size_t reserve_size)
//	{
//		std::unique_ptr<T> newarr = std::make_unique<T>(reserve_size);
//		for (int i = 0; i < m_size; i++)
//		{
//			newarr[i] = m_arr[i];
//		}
//		m_arr = std::move(newarr);
//	}
//	void Push(T val)
//	{
//		if (m_size + 1 > m_capacity)
//		{
//			Reserve(static_cast<size_t>((size + 1) * 2));
//			m_arr[size] = val;
//			++size;
//		}
//		else {
//			m_arr[size] = val;
//			++size;
//		}
//	}
//};

int main()
{
	
}
