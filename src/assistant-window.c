/* assistant-window.c
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

#include "config.h"

#include "assistant-window.h"

struct _AssistantWindow
{
  AdwApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkTextView            *main_text_view;
};

G_DEFINE_FINAL_TYPE (AssistantWindow, assistant_window, ADW_TYPE_APPLICATION_WINDOW)

static void
assistant_window_class_init (AssistantWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/com/iamafasha/com/assistant-window.ui");
  gtk_widget_class_bind_template_child (widget_class, AssistantWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, AssistantWindow, main_text_view);
}

static void
assistant_window_init (AssistantWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
