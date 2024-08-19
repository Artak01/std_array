#include "std_array.h"

//////////////////////////Const_iterator/////////////////////////
/////////////////////////////////////////////////////////////////

template <class T, size_t N>
Array<T,N>::const_iterator::const_iterator(pointer ptr)
    : m_ptr (ptr)
{}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::const_iterator::operator+(size_type n) const
{
    return const_iterator(m_ptr + n);
} 

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::const_iterator::operator-(size_type n) const
{
    return const_iterator(m_ptr - n);
} 

template <class T, size_t N>
typename Array<T, N>::const_iterator& Array<T, N>::const_iterator::operator++()
{
    ++m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::const_iterator::operator++(int)
{
    const_iterator tmp = *this;
    ++m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::const_iterator& Array<T, N>::const_iterator::operator--()
{
    --m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::const_iterator::operator--(int)
{
    const_iterator tmp = *this;
    --m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::const_iterator::operator*()
{
    return *m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::const_pointer Array<T, N>::const_iterator::operator->()
{
    return m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::const_iterator::operator[](size_type pos) const
{
    return m_ptr[pos];
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator ==(const const_iterator& other) const
{
    return (m_ptr == other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator !=(const const_iterator& other) const
{
    return (m_ptr != other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator <(const const_iterator& other) const
{
    return (m_ptr < other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator <=(const const_iterator& other) const
{
    return (m_ptr <= other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator >(const const_iterator& other) const
{
    return (m_ptr > other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_iterator::operator >=(const const_iterator& other) const
{
    return (m_ptr >= other.m_ptr);
}


////////////////////////////////Iterator/////////////////////////
/////////////////////////////////////////////////////////////////

template <class T, size_t N>
Array<T,N>::iterator::iterator(pointer ptr)
    : const_iterator (ptr)
{}

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::iterator::operator+(size_type n) const
{
    return iterator(this -> m_ptr + n);
} 

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::iterator::operator-(size_type n) const
{
    return iterator(this -> m_ptr - n);
} 

template <class T, size_t N>
typename Array<T, N>::iterator& Array<T, N>::iterator::operator++()
{
    ++this -> m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::iterator::operator++(int)
{
    iterator tmp = *this;
    ++this -> m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::iterator& Array<T, N>::iterator::operator--()
{
    --this -> m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::iterator::operator--(int)
{
    iterator tmp = *this;
    --this -> m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::iterator::operator*()
{
    return *this -> m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::pointer Array<T, N>::iterator::operator->()
{
    return this -> m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::iterator::operator[](size_type pos) const
{
    return this -> m_ptr[pos];
}

////////////////////////////////Const_reverse_iterator/////////////////////////
/////////////////////////////////////////////////////////////////

template <class T, size_t N>
Array<T, N>::const_reverse_iterator::const_reverse_iterator(pointer ptr)
    : m_ptr (ptr)
{}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::const_reverse_iterator::operator +(size_type n) const
{
    return const_reverse_iterator(m_ptr - n);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::const_reverse_iterator::operator -(size_type n) const
{
    return const_reverse_iterator(m_ptr + n);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator& Array<T, N>::const_reverse_iterator::operator ++()
{
    --m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::const_reverse_iterator::operator ++(int)
{
    const_reverse_iterator tmp = *this;
    --m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator& Array<T, N>::const_reverse_iterator::operator --()
{
    ++m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::const_reverse_iterator::operator --(int)
{
    const_reverse_iterator tmp = *this;
    ++m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::const_reverse_iterator::operator*() const
{
    return *m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::const_pointer Array<T, N>::const_reverse_iterator::operator->() const
{
    return m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::const_reverse_iterator::operator[](size_type pos) const
{
    return m_ptr[pos];
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator ==(const const_reverse_iterator& other) const
{
    return (m_ptr == other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator !=(const const_reverse_iterator& other) const
{
    return (m_ptr != other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator <(const const_reverse_iterator& other) const
{
    return (m_ptr < other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator <=(const const_reverse_iterator& other) const
{
    return (m_ptr <= other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator >(const const_reverse_iterator& other) const
{
    return (m_ptr > other.m_ptr);
}

template <class T, size_t N>
bool Array<T, N>::const_reverse_iterator::operator >=(const const_reverse_iterator& other) const
{
    return (m_ptr >= other.m_ptr);
}

////////////////////////////////Reverse_iterator/////////////////////////
////////////////////////////////////////////////////////////////////////

template <class T, size_t N>
Array<T, N>::reverse_iterator::reverse_iterator(pointer ptr)
    : const_reverse_iterator (ptr)
{}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::reverse_iterator::operator +(size_type n) const
{
    return reverse_iterator(this -> m_ptr - n);
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::reverse_iterator::operator -(size_type n) const
{
    return reverse_iterator(this -> m_ptr + n);
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator& Array<T, N>::reverse_iterator::operator ++()
{
    --this -> m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::reverse_iterator::operator ++(int)
{
    const_reverse_iterator tmp = *this;
    --this -> m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator& Array<T, N>::reverse_iterator::operator --()
{
    ++this -> m_ptr;
    return *this;
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::reverse_iterator::operator --(int)
{
    reverse_iterator tmp = *this;
    ++this -> m_ptr;
    return tmp;
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::reverse_iterator::operator*()
{
    return *this -> m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::pointer Array<T, N>::reverse_iterator::operator->()
{
    return this -> m_ptr;
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::reverse_iterator::operator[](size_type pos) const
{
    return this -> m_ptr[pos];
}

/////////////////////////////////__Array__//////////////////////////////
////////////////////////////////////////////////////////////////////////

template <class T, size_t N>
Array<T, N>::Array(std::initializer_list<value_type> init)
{
    size_t i = 0;
    for (const auto& value : init) {
        if (i >= N) break;  // Prevent writing beyond the array size
        m_arr[i++] = value;
    }
    // Optionally initialize remaining elements to default value if the list is shorter than N
    while (i < N) {
        m_arr[i++] = T{};
    }
}


template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::at(size_type pos)
{
    return m_arr[pos];
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::at(size_type pos) const
{
    return m_arr[pos];
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::operator[](size_type pos)
{
    return m_arr[pos];
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::operator[](size_type pos) const
{
    return m_arr[pos];
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::front() 
{
    return m_arr[0];
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::front() const
{
    return m_arr[0];
}

template <class T, size_t N>
typename Array<T, N>::reference Array<T, N>::back() 
{
    return m_arr[N - 1];
}

template <class T, size_t N>
typename Array<T, N>::const_reference Array<T, N>::back() const
{
    return m_arr[N - 1];
}

template <class T, size_t N>
typename Array<T, N>::pointer Array<T, N>::data() 
{
    return m_arr;
}

template <class T, size_t N>
typename Array<T, N>::const_pointer Array<T, N>::data() const
{
    return m_arr;
}

template <class T, size_t N>
constexpr bool Array<T, N>::empty() const noexcept
{
    return N == 0;
}

template <class T, size_t N>
constexpr typename Array<T, N>::size_type Array<T, N>::size() const noexcept
{
    return N;
}

template <class T, size_t N>
constexpr typename Array<T, N>::size_type Array<T, N>::max_size() const noexcept
{
    return N;
}

template <class T, size_t N>
void Array<T, N>::fill(const_reference val)
{
    for(int i = 0; i < N; ++i) {
        m_arr[i] = val;
    }
}

template <class T, size_t N>
void Array<T, N>::swap(Array& other) noexcept
{
    std::swap_ranges(m_arr, m_arr + N, other.m_arr);
}

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::begin() noexcept
{
    return iterator(m_arr);
}

template <class T, size_t N>
typename Array<T, N>::iterator Array<T, N>::end() noexcept
{
    return iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::begin() const noexcept
{
    return const_iterator(m_arr);
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::end() const noexcept
{
    return const_iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::cbegin() const noexcept
{
    return const_iterator(m_arr);
}

template <class T, size_t N>
typename Array<T, N>::const_iterator Array<T, N>::cend() const noexcept
{
    return const_iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::rbegin() noexcept
{
    return reverse_iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::reverse_iterator Array<T, N>::rend() noexcept
{
    return reverse_iterator(m_arr);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::rbegin() const noexcept
{
    return const_reverse_iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::rend() const noexcept
{
    return const_reverse_iterator(m_arr);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::crbegin() const noexcept
{
    return const_reverse_iterator(m_arr + N);
}

template <class T, size_t N>
typename Array<T, N>::const_reverse_iterator Array<T, N>::crend() const noexcept
{
    return const_reverse_iterator(m_arr);
}

