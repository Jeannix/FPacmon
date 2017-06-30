#ifndef SIZE_H
#define SIZE_H


class Size
{
    public:
        Size();
        Size(int x);
        Size(int x1,int y1);
        int getWidth();
        int getHeight();
    protected:
        int width, height; ///El ancho y la altura de nuestra ventana
};

#endif // SIZE_H
