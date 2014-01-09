/*
 *   Copyright 2009 Marco Martin <notmart@gmail.com>
 *   Copyright 2014 Martin Gräßlin <mgraesslin@kde.org>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "kwindoweffects_p.h"

KWindowEffectsPrivateDummy::KWindowEffectsPrivateDummy()
{
}

KWindowEffectsPrivateDummy::~KWindowEffectsPrivateDummy()
{
}

bool KWindowEffectsPrivateDummy::isEffectAvailable(KWindowEffects::Effect effect)
{
    Q_UNUSED(effect)
    return false;
}

void KWindowEffectsPrivateDummy::slideWindow(WId id, KWindowEffects::SlideFromLocation location, int offset)
{
    Q_UNUSED(id)
    Q_UNUSED(location)
    Q_UNUSED(offset)
}

void KWindowEffectsPrivateDummy::slideWindow(QWidget *widget, KWindowEffects::SlideFromLocation location)
{
    Q_UNUSED(widget)
    Q_UNUSED(location)
}

QList<QSize> KWindowEffectsPrivateDummy::windowSizes(const QList<WId> &ids)
{
    QList<QSize> windowSizes;
    for (int i = 0; i < ids.size(); ++i) {
        windowSizes.append(QSize());
    }
    return windowSizes;
}

void KWindowEffectsPrivateDummy::showWindowThumbnails(WId parent, const QList<WId> &windows, const QList<QRect> &rects)
{
    Q_UNUSED(parent)
    Q_UNUSED(windows)
    Q_UNUSED(rects)
}

void KWindowEffectsPrivateDummy::presentWindows(WId controller, const QList<WId> &ids)
{
    Q_UNUSED(controller)
    Q_UNUSED(ids)
}

void KWindowEffectsPrivateDummy::presentWindows(WId controller, int desktop)
{
    Q_UNUSED(controller)
    Q_UNUSED(desktop)
}

void KWindowEffectsPrivateDummy::highlightWindows(WId controller, const QList<WId> &ids)
{
    Q_UNUSED(controller)
    Q_UNUSED(ids)
}

void KWindowEffectsPrivateDummy::enableBlurBehind(WId window, bool enable, const QRegion &region)
{
    Q_UNUSED(window)
    Q_UNUSED(enable)
    Q_UNUSED(region)
}

void KWindowEffectsPrivateDummy::markAsDashboard(WId window)
{
    Q_UNUSED(window)
}
