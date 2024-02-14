#include <gtk/gtk.h>
#include "include/login_window.h"
#include "include/signeup_window.h"
#include "include/database.h"


int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create and show the login window
    LoginWindow login_window;
    gtk_widget_show_all(login_window.get_window());

    gtk_main();
    
    return 0;
}
