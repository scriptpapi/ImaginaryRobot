#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
public:
    Robot();
    void setPower(bool);
    virtual void move();
    void selfDestruct();

private:
    bool power;
    int x, y, z;


};

#endif // ROBOT_H
