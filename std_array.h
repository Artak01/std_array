#ifndef STD_ARRAY_H
#define STD_ARRAY_H

#include <iostream>
#include <initializer_list>
#include <compare>

    template <class T, size_t N>
    class Array
    {
        public:
            using value_type = T;
            using size_type = size_t;
            using reference = value_type&;
            using const_reference = const T&;
            using pointer = T*;
            using const_pointer = const T*;

        public:
            class const_iterator;
            class iterator;
            class const_reverse_iterator;
            class reverse_iterator;

        public:
            Array(std::initializer_list<value_type> init);

            reference at(size_type pos);
            const_reference at(size_type pos) const;

            reference operator[](size_type pos);
            const_reference operator[](size_type pos) const;

            reference front();
            const_reference front() const;
            reference back();
            const_reference back() const;

            pointer data();
            const_pointer data() const;

            constexpr bool empty() const noexcept;
            constexpr size_type size() const noexcept;
            constexpr size_type max_size() const noexcept;

            void fill(const_reference val);
            void swap(Array& other) noexcept;

        public:
            iterator begin() noexcept;
            iterator end() noexcept;
            const_iterator begin() const noexcept;
            const_iterator end() const noexcept;

            const_iterator cbegin() const noexcept;
            const_iterator cend() const noexcept;
            
            reverse_iterator rbegin() noexcept;
            reverse_iterator rend() noexcept;
            const_reverse_iterator rbegin() const noexcept;
            const_reverse_iterator rend() const noexcept;

            const_reverse_iterator crbegin() const noexcept;
            const_reverse_iterator crend() const noexcept;

        private:
            T m_arr[N];
};

template <class T, size_t N>
class Array<T,N>::const_iterator
{
    friend class Array<T,N>;
    protected:
        pointer m_ptr;
    private:
        const_iterator(pointer ptr);
    public:
        const_iterator() = default;
        const_iterator(const const_iterator&) = default;      
        const_iterator(const_iterator&&) = default;

        const_iterator& operator=(const const_iterator&) = default;      
        const_iterator& operator=(const_iterator&&) = default;

        const_iterator operator+(size_type n) const;      
        const_iterator operator-(size_type n) const;

        const_iterator& operator++();
        const_iterator operator++(int);
        const_iterator& operator--();
        const_iterator operator--(int);

        const_reference operator*();
        const_pointer operator->();

        const_reference operator[](size_type pos) const;

        bool operator==(const const_iterator& other) const;      
        bool operator!=(const const_iterator& other) const;      
        bool operator<(const const_iterator& other) const;      
        bool operator<=(const const_iterator& other) const;      
        bool operator>(const const_iterator& other) const;      
        bool operator>=(const const_iterator& other) const;  
};

template <class T, size_t N>
class Array<T,N>::iterator : public Array<T,N>::const_iterator
{
        friend class Array<T,N>;
    private:
        iterator(pointer ptr);
    public:
        iterator() = default;
        iterator(const iterator&) = default;      
        iterator(iterator&&) = default;

        iterator& operator=(const iterator&) = default;      
        iterator& operator=(iterator&&) = default;

        iterator operator+(size_type n) const;      
        iterator operator-(size_type n) const;

        iterator& operator++();
        iterator operator++(int);
        iterator& operator--();
        iterator operator--(int);

        reference operator*();
        pointer operator->();

        reference operator[](size_type pos) const;
};

template <class T, size_t N>
class Array<T,N>::const_reverse_iterator
{
    friend class Array<T,N>;
    protected:
        pointer m_ptr;
    private:
        const_reverse_iterator(pointer ptr);
    public:
        const_reverse_iterator() = default;
        const_reverse_iterator(const const_reverse_iterator&) = default;
        const_reverse_iterator(const_reverse_iterator&&) = default;

        const_reverse_iterator& operator=(const const_reverse_iterator&) = default;
        const_reverse_iterator& operator=(const_reverse_iterator&&) = default;

        const_reverse_iterator operator+(size_type n) const;      
        const_reverse_iterator operator-(size_type n) const;

        const_reverse_iterator& operator++();
        const_reverse_iterator operator++(int);
        const_reverse_iterator& operator--();
        const_reverse_iterator operator--(int);

        const_reference operator*() const;
        const_pointer operator->() const;

        const_reference operator[](size_type pos) const;

        bool operator==(const const_reverse_iterator& other) const;      
        bool operator!=(const const_reverse_iterator& other) const;      
        bool operator<(const const_reverse_iterator& other) const;      
        bool operator<=(const const_reverse_iterator& other) const;      
        bool operator>(const const_reverse_iterator& other) const;      
        bool operator>=(const const_reverse_iterator& other) const; 
};

template <class T, size_t N>
class Array<T,N>::reverse_iterator : public Array<T,N>::const_reverse_iterator
{
    friend class Array<T,N>;
    private:
        explicit reverse_iterator(pointer ptr);
    public:
        reverse_iterator() = default;
        reverse_iterator(const reverse_iterator&) = default;
        reverse_iterator(reverse_iterator&&) = default;

        reverse_iterator& operator=(const reverse_iterator&) = default;
        reverse_iterator& operator=(reverse_iterator&&) noexcept = default;

        reverse_iterator operator+(size_type n) const;      
        reverse_iterator operator-(size_type n) const;

        reverse_iterator& operator++();
        reverse_iterator operator++(int);
        reverse_iterator& operator--();
        reverse_iterator operator--(int);

        reference operator*();
        pointer operator->();

        reference operator[](size_type pos) const;
};
#include "std_array.cpp"
#endif