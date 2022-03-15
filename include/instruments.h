#pragma once

struct coord
{
    double x;
    double y;
};

coord read_point();

void write_point(coord& output);

bool equal_points (const coord& a,const coord& b);

void scalpel(const coord& a,const coord& b, bool& start, coord& st_a, coord& st_b);

void hemostat(const coord& a, const bool& start);

void tweezers(const coord& a, const bool& start);

void suture(const coord& a,const coord& b, bool& start, const coord& st_a, const coord& st_b);