#pragma once

struct coord
{
    double x;
    double y;
};

coord read_point();

void write_point(coord& output);

bool equal_points (const coord& a,const coord& b);

void scalpel();

void hemostat();

void tweezers();

void suture();