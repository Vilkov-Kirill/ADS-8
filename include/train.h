// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
private:
    struct Cage {
        bool light; // состояние лампочки
        Cage* next = nullptr;
        Cage* prev = nullptr;
    }
    int countOp = 0; // счетчик шагов (число переходов из вагона в вагон)
    Cage* first = new Cage; // точка входа в поезд (первый вагон)
    bool firstAdded = false;
public:
    void addCage(bool); // добавить вагон с начальным состоянием лампочки
    int getLength();          // вычислить длину поезда
    int getOpCount() { return countOp; }     // вернуть число переходов (из вагона в вагон)
};

#endif  // INCLUDE_TRAIN_H_
