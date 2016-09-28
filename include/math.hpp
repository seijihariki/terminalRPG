#ifndef MATH_HPP
#define MATH_HPP

namespace math
{
    template<class C>
    class vector2
    {
    public:
        vector2() : x(0), y(0) {}
        vector2(C _x, C _y) : x(_x), y(_y) {}
    
        vector2<C> operator+=(vector2<C> v2);
        vector2<C> operator-=(vector2<C> v2);
        vector2<C> operator*=(C k);
        vector2<C> operator/=(C k);

        C operator*(vector2<C> v2);
        vector2<C> operator*(C k);
        vector2<C> operator/(C k);
        vector2<C> operator+(vector2<C> v2);
        vector2<C> operator-(vector2<C> v2);

        int x, y;
    };

    typedef vector2<int> vector2i;
    typedef vector2<float> vector2f;
}

// Template implementations
//#include "math.ipp"

#endif
