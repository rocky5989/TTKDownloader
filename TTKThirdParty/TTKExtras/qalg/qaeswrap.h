#ifndef QAESWRAP_H
#define QAESWRAP_H

/* =================================================
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "downloadextrasglobaldefine.h"

/*! @brief The namespace of the aes wrapper.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_EXTRAS_EXPORT QAesWrap
{
public:
    /*!
     * Encrypt aes by input.
     */
    static QByteArray encrypt(const QByteArray &in, const QByteArray &key, const QByteArray &iv);
    /*!
     * Decrypt aes by input.
     */
    static QByteArray decrypt(const QByteArray &in, const QByteArray &key, const QByteArray &iv);

};

#endif // QAESWRAP_H
