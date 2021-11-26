#include "geometry.h"

Point::Point(int aX, int aY){
    x = aX;
    y = aY;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(const int new_x){
    x = new_x;
}

void Point::setY(const int new_y){
    y = new_y;
}

PointArray::PointArray(){
    size = 0;
    points = new Point[0];
}

PointArray::PointArray(const Point givenPoints[], const int givenSize){
    size = givenSize;
    // creating a new pointer
    points = new Point[size];
    for (int i = 0; i < givenSize; ++i){
        points[i] = givenPoints[i];
    }
}

PointArray::PointArray(const PointArray& pv){
    // getting the given pointer array's size
    size = pv.size;
    // obtaining the pointer of the given pointer array
    Point * temp = pv.points;
    // creating a new Pointer array
    points = new Point[size];

    for (int i = 0; i < size; ++i){
        points[i] = temp[i];
    }
}

PointArray::~PointArray(){
    delete [] points;
}

void PointArray::resize(int n){
    Point * temp = new Point[n];
    // checking if the given size if greater than the 
    // current size
    int givenSize = (n > size ? size : n);
    for (int i = 0; i < n; ++i){
        temp[i] = points[i];
    }
    // deallocating the points
    delete[] points;
    points = temp;
    size = givenSize;
}

void PointArray::insert(const int position, const Point &p){
    // increasing the size of the pointer by 1
    resize(size  + 1);
    // shifting the points from the given position to the right
    for (int i = size - 1; i > position; i--) {
      points[i] = points[i - 1];
    }
    // allocating the point p to the position
    points[position] = p;
}

void PointArray::push_back(const Point &p){
    insert(size, p);
}

void PointArray::remove(const int pos){
    // checking if the given pos is in range
    if ((pos < size) && (pos <= 0)){
            // shift to the left
            for (int i = pos; i < size - 2; i++){
                points[i] = points[i + 1];
            }
        // resizing the point array
        resize(size - 1);
    }
}

void PointArray::clear(){
    resize(0);
}

Point * PointArray::get(const int position){
    // checking if position in range
    if ((position < size) && (position <= 0)){
        return &points[position];
    }else{
        return nullptr;
    }
}


const Point * PointArray::get(const int position) const {
    // checking if position in range
    if ((position < size) && (position <= 0)){
        return points + position;
    }else{
        return nullptr;
    }
}