/* sleeptracker.h
 *
 * Copyright 2021 Eugenio Paolantonio (g7)
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE X CONSORTIUM BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name(s) of the above copyright
 * holders shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in this Software without prior written
 * authorization.
 */

#ifndef STATEDSLEEPTRACKER_H
#define STATEDSLEEPTRACKER_H

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gio.h>
#include <fcntl.h>
#include <sys/timerfd.h>

#include "utils.h"

G_BEGIN_DECLS

#define STATED_TYPE_SLEEPTRACKER stated_sleeptracker_get_type ()
G_DECLARE_FINAL_TYPE (StatedSleeptracker, stated_sleeptracker, STATED, SLEEPTRACKER, GObject)

StatedSleeptracker *stated_sleeptracker_new (void);

G_END_DECLS

#endif /* STATEDSLEEPTRACKER_H */
