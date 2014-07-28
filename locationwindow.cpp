/*A sign-in program for CS Tutoring at Portland State University
  Copyright (C) 2014 Robert Werfelmann

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "locationwindow.hpp"

LocationWindow::LocationWindow(QWidget * parent) : QWidget (parent) {
    frontArea = new QPushButton("Front entrance area", parent);
    frontArea->move(startXPos + 150, startYPos + 0);
    frontArea->resize(200, 75);
    frontArea->hide();

    printer = new QPushButton("Back area near printer", parent);
    printer->move(startXPos + 150, startYPos + 100);
    printer->resize(200, 75);
    printer->hide();

    lockerRoom = new QPushButton("Locker room", parent);
    lockerRoom->move(startXPos + 150, startYPos + 200);
    lockerRoom->resize(200, 75);
    lockerRoom->hide();

    penguinLab = new QPushButton("FAB 88-10\n(GNU/Linux Lab A)", parent);
    penguinLab->move(startXPos + 450, startYPos + 0);
    penguinLab->resize(200, 75);
    penguinLab->hide();

    particleLab = new QPushButton("FAB 88-09\n(GNU/Linux Lab B)", parent);
    particleLab->move(startXPos + 450, startYPos + 100);
    particleLab->resize(200, 75);
    particleLab->hide();

    acm = new QPushButton("ACM room", parent);
    acm->move(startXPos + 450, startYPos + 200);
    acm->resize(200, 75);
    acm->hide();

    cancelButton = new QPushButton("Start Over", parent);
    cancelButton->move(startXPos + 500, startYPos + 500);
    cancelButton->resize(200, 75);
    cancelButton->hide();
}

void LocationWindow::openWindow() {
    frontArea->show();
    printer->show();
    lockerRoom->show();
    penguinLab->show();
    particleLab->show();
    acm->show();
    cancelButton->show();
}

void LocationWindow::closeWindow() {
    frontArea->hide();
    printer->hide();
    lockerRoom->hide();
    penguinLab->hide();
    particleLab->hide();
    acm->hide();
    cancelButton->hide();
}
