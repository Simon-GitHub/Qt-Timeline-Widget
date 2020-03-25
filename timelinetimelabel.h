#ifndef TIMELINETIMELABEL_H
#define TIMELINETIMELABEL_H

#include <QObject>
#include <QApplication>
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QAction>
#include <QDate>

class TimelineTimeLabel : public QLabel
{
    Q_OBJECT
public:
    TimelineTimeLabel(QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

signals:
    void signalClicked();

public slots:
    void slotMenuShowed(const QPoint &pos);

private:
    QPoint press_pos;
};

#endif // TIMELINETIMELABEL_H
