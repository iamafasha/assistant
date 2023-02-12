/* assistant-window.h
 *
 * Copyright 2023 iamafasha
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define ASSISTANT_TYPE_WINDOW (assistant_window_get_type())

G_DECLARE_FINAL_TYPE (AssistantWindow, assistant_window, ASSISTANT, WINDOW, AdwApplicationWindow)

G_END_DECLS

//Opening a file
static void assistant_window__open_file_dialog(GAction *action G_GNUC_UNUSED, GVariant *parameter G_GNUC_UNUSED, AssistantWindow *self);
static void on_open_response(GtkNativeDialog  *native, int response, AssistantWindow *self);
static void open_file (AssistantWindow *self, GFile *file);
static void open_file_complete (GObject *source_object, GAsyncResult *result, AssistantWindow *self);

// Saving a file
static void text_viewer_window__save_file_dialog (GAction          *action G_GNUC_UNUSED, GVariant         *param G_GNUC_UNUSED, AssistantWindow *self);
static void on_save_response (GtkNative *native, int response, AssistantWindow *self);
static void save_file (AssistantWindow *self, GFile *file);
static void save_file_complete (GObject *source_object, GAsyncResult *result, gpointer user_data);

//Cursor position
static void text_viewer_window__update_cursor_position(GtkTextBuffer *buffer, GParamSpec *pspec G_GNUC_UNUSED, AssistantWindow *self);
