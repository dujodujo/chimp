#include "GameStock.h"
#include "Scaler.h"
#include "GameHelper.h"

#include <iostream>

GameStock::GameStock() {
	initGraphics();
}

void GameStock::init() {}

void GameStock::initGraphics() {
	font12 = QFont("helvetics", qMax(DY(12), 12));
	QFontMetrics fontMetrics(font12);
	if(fontMetrics.boundingRect("000").width() > DY(120))
		font12.setPointSize(DY(16));

	gameCursor = QCursor(QPixmap(":/Application/images/cursor_wand.png").
		scaled(DX(32), DY(32), Qt::IgnoreAspectRatio, Qt::SmoothTransformation), 0, 0);
	menuBackground = QPixmap(":/Application/images/bgmenu.jpg");

	concrete = QPixmap(":/Application/images/concrete1.png");
	target1 = QPixmap(":/Application/images/target1.png");
	target2 = QPixmap(":/Application/images/target2.png");
	block1 = QPixmap(":/Application/images/block1.png");
	block2 = QPixmap(":/Application/images/block2.png");

	this->items.clear();
	for(int i = 0; i < MAX_ITEMS_COUNT; i++) {
		items.push_back(QPixmap(QString(":/Application/images/item%1.png").arg(i+1)));
	}
}