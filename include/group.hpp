// Copyright 2015 PsychoLama

#ifndef GROUP_H
#define GROUP_H

#include <QVector>
#include <geometry.hpp>

/*! \brief Groupe de geometries
 *
 * Toute les géometries enfant de cet objet seront affichés avec une transformation relative a celle du groupe.
 */
class Group : public Actor {
public:
	explicit Group(QObject* parent = nullptr);
	void draw(const DrawInfo& info);
};

#endif  // GROUP_H
