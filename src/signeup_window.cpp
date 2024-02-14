#include "include/signeup_window.h"

SignupWindow::SignupWindow() {
    // Create the window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Signup");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create username entry
    username_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(username_entry), "Username");

    // Create password entry
    password_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(password_entry), "Password");
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE);

    // Create signup button
    signup_button = gtk_button_new_with_label("Signup");
    g_signal_connect(signup_button, "clicked", G_CALLBACK(on_signup_button_clicked), this);

    // Create layout
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_box_pack_start(GTK_BOX(vbox), username_entry, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), password_entry, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), signup_button, FALSE, FALSE, 5);
}

GtkWidget* SignupWindow::get_window() {
    return window;
}

void SignupWindow::on_signup_button_clicked(GtkButton *button, SignupWindow *signup_window) {
    // Retrieve username and password from entries
    const gchar *username = gtk_entry_get_text(GTK_ENTRY(signup_window->username_entry));
    const gchar *password = gtk_entry_get_text(GTK_ENTRY(signup_window->password_entry));

    // Perform signup (you'll replace this with your database interaction code)
    g_print("Signup functionality will be implemented here.\n");
}
