#include <gtk/gtk.h>
#include "login_window.h"

LoginWindow::LoginWindow() {
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Login");
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    username_entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox), username_entry, FALSE, FALSE, 5);

    password_entry = gtk_entry_new();
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE); // Hide password
    gtk_box_pack_start(GTK_BOX(vbox), password_entry, FALSE, FALSE, 5);

    GtkWidget *login_button = gtk_button_new_with_label("Login");
    gtk_box_pack_start(GTK_BOX(vbox), login_button, FALSE, FALSE, 5);
    g_signal_connect(login_button, "clicked", G_CALLBACK(on_login_button_clicked), this);
}

void LoginWindow::on_login_button_clicked(GtkButton *button, LoginWindow *login_window) {
    const gchar *username = gtk_entry_get_text(GTK_ENTRY(login_window->username_entry));
    const gchar *password = gtk_entry_get_text(GTK_ENTRY(login_window->password_entry));

    // Add your login authentication logic here
}

GtkWidget* LoginWindow::get_window() {
    return window;
}
