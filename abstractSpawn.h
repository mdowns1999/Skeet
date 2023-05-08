#pragma once
#include <list>;
#include "bird.h";

class AbstractSpawn
{
public:
   virtual void spawnLevel(std::list<Bird*> &birds) = 0;
};

class Easy : AbstractSpawn
{
private:
   int size = 30.0;

public:
   void spawnLevel(std::list<Bird*> &birds);

};

class Medium : AbstractSpawn
{
private:
   int size = 25.0;
public:
   void spawnLevel(std::list<Bird*>& birds);
};

class Hard : AbstractSpawn
{
private:
   int size = 20.0;
public:
   void spawnLevel(std::list<Bird*>& birds);
};

class Extreme : AbstractSpawn
{
private:
   int size = 15.0;
public:
   void spawnLevel(std::list<Bird*>& birds);
};

