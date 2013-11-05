#ifndef GAMESTOCK_H
#define GAMESTOCK_H

#include <QtGui\qcursor.h>
#include <QtGui\qfontmetrics.h>
#include <QtGui\qfont.h>
#include <QtCore\qlist.h>
#include <QtGui\qpixmap.h>

#include "Defines.h"

class GameStock {

public:
	QFont font12;
	QCursor gameCursor;
	QPixmap menuBackground;

	QPixmap concrete;
	QPixmap target1;
	QPixmap target2;
	QPixmap block1;
	QPixmap block2;

	QList<QPixmap> items;

public:
	GameStock();
	~GameStock() {}

	void initGraphics();
	static void init();
};

#endif