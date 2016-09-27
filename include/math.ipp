namespace math
{
    template<class C>
    vector2<C> vector2<C>::operator+=(vector2<C> v2)
    {
        return vector2<C>(x += v2.x, y += v2.y);
    }

    template<class C>
    vector2<C> vector2<C>::operator-=(vector2<C> v2)
    {
        return vector2<C>(x -= v2.x, y -= v2.y);
    }

    template<class C>
    vector2<C> vector2<C>::operator*=(C k)
    {
        return vector2<C>(x *= k, y *= k);
    }

    template<class C>
    vector2<C> vector2<C>::operator/=(C k)
    {
        return vector2<C>(x /= k, y /= k);
    }


    template<class C>
    C vector2<C>::operator*(vector2<C> v2)
    {
        return x*v2.x + y*v2.y;
    }


    template<class C>
    vector2<C> vector2<C>::operator*(C k)
    {
        return vector2<C>(x*k, y*k);
    }

    template<class C>
    vector2<C> vector2<C>::operator/(C k)
    {
        return vector2<C>(x/k, y/k);
    }

    template<class C>
    vector2<C> vector2<C>::operator+(vector2<C> v2)
    {
        return vector2<C>(x + v2.x, y + v2.y);
    }

    template<class C>
    vector2<C> vector2<C>::operator-(vector2<C> v2)
    {
        return vector2<C>(x - v2.x, y + v2.y);
    }
}
