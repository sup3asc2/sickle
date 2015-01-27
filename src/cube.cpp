// Copyright 2015 PsychoLama

#include <cube.hpp>
#include <vector>

Cube::Cube(QObject* parent) : Geometry(parent) {
	initProgram<Cube>(parent);
	colors({
		QColor(1, 0, 0),
		QColor(1, 1, 0)
	});
}

std::vector<GLfloat> Cube::s_vertices = {
	-1.0f, -1.0f, -1.0f,		// Face 1
	-1.0f, -1.0f,  1.0f,		//
	-1.0f,  1.0f,  1.0f,		//
	-1.0f,  1.0f, -1.0f,		//
	 1.0f, -1.0f, -1.0f,		// Face 2
	 1.0f,  1.0f, -1.0f,		//
	 1.0f,  1.0f,  1.0f,		//
	 1.0f, -1.0f,  1.0f,		//
	-1.0f, -1.0f, -1.0f,		// Face 3
	 1.0f, -1.0f, -1.0f,		//
	 1.0f, -1.0f,  1.0f,		//
	-1.0f, -1.0f,  1.0f,		//
	-1.0f,  1.0f, -1.0f,		// Face 4
	-1.0f,  1.0f,  1.0f,		//
	 1.0f,  1.0f,  1.0f,		//
	 1.0f,  1.0f, -1.0f,		//
	-1.0f, -1.0f, -1.0f,		// Face 5
	-1.0f,  1.0f, -1.0f,		//
	 1.0f,  1.0f, -1.0f,		//
	 1.0f, -1.0f, -1.0f,		//
	-1.0f, -1.0f,  1.0f,		// Face 6
	 1.0f, -1.0f,  1.0f,		//
	 1.0f,  1.0f,  1.0f,		//
	-1.0f,  1.0f,  1.0f,		//
};
std::vector<quint32> Cube::s_indices = {
	0,  1,  3,		// Face 1
	3,  1,  2,		//
	4,  5,  7,		// Face 2
	7,  5,  6,		//
	8,  9,  11,		// Face 3
	11, 9,  10,		//
	12, 13, 15,		// Face 4
	15, 13, 14,		//
	16, 17, 19,		// Face 5
	19, 17, 18,		//
	20, 21, 23,		// Face 6
	23, 21, 22,		//
};
std::vector<GLfloat> Cube::s_colors = {
	1.0f, 0.0f, 0.0f,		// Face 1
	1.0f, 0.0f, 0.0f,		//
	1.0f, 0.0f, 0.0f,		//
	1.0f, 0.0f, 0.0f,		//
	1.0f, 1.0f, 0.0f,		// Face 2
	1.0f, 1.0f, 0.0f,		//
	1.0f, 1.0f, 0.0f,		//
	1.0f, 1.0f, 0.0f,		//
	0.0f, 1.0f, 0.0f,		// Face 3
	0.0f, 1.0f, 0.0f,		//
	0.0f, 1.0f, 0.0f,		//
	0.0f, 1.0f, 0.0f,		//
	0.0f, 1.0f, 1.0f,		// Face 4
	0.0f, 1.0f, 1.0f,		//
	0.0f, 1.0f, 1.0f,		//
	0.0f, 1.0f, 1.0f,		//
	0.0f, 0.0f, 1.0f,		// Face 5
	0.0f, 0.0f, 1.0f,		//
	0.0f, 0.0f, 1.0f,		//
	0.0f, 0.0f, 1.0f,		//
	1.0f, 0.0f, 1.0f,		// Face 6
	1.0f, 0.0f, 1.0f,		//
	1.0f, 0.0f, 1.0f,		//
	1.0f, 0.0f, 1.0f,		//
};
