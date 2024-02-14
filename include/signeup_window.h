#ifndef SIGNUP_WINDOW_H
#define SIGNUP_WINDOW_H

#include <gtk/gtk.h>

class SignupWindow {
public:
    SignupWindow();
    GtkWidget* get_window();

private:
    GtkWidget *window;
    GtkWidget *username_entry;
    GtkWidget *password_entry;
    GtkWidget *signup_button;

    static void on_signup_button_clicked(GtkButton *button, SignupWindow *signup_window);
};

#endif // SIGNUP_WINDOW_H
