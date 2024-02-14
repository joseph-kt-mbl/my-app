#include "include/login_window.h"

LoginWindow::LoginWindow() {
    // Create the window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Login");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create username entry
    username_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(username_entry), "Username");

    // Create password entry
    password_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(password_entry), "Password");
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE);

    // Create login button
    login_button = gtk_button_new_with_label("Login");
    g_signal_connect(login_button, "clicked", G_CALLBACK(on_login_button_clicked), this);

    // Create layout
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_box_pack_start(GTK_BOX(vbox), username_entry, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), password_entry, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), login_button, FALSE, FALSE, 5);
}

GtkWidget* LoginWindow::get_window() {
    return window;
}

void LoginWindow::on_login_button_clicked(GtkButton *button, LoginWindow *login_window) {
    // Retrieve username and password from entries
    const gchar *username = gtk_entry_get_text(GTK_ENTRY(login_window->username_entry));
    const gchar *password = gtk_entry_get_text(GTK_ENTRY(login_window->password_entry));

    // Perform authentication (you'll replace this with your database interaction code)
    if (g_strcmp0(username, "admin") == 0 && g_strcmp0(password, "password") == 0) {
        g_print("Login successful!\n");
    } else {
        g_print("Login failed. Invalid username or password.\n");
    }
}
