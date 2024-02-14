#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <gtk/gtk.h>

class LoginWindow {
public:
    LoginWindow();
    GtkWidget* get_window();

private:
    GtkWidget *window;
    GtkWidget *username_entry;
    GtkWidget *password_entry;
    GtkWidget *login_button;

    static void on_login_button_clicked(GtkButton *button, LoginWindow *login_window);
};

#endif // LOGIN_WINDOW_H
