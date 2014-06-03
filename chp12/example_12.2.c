
#include <gtk/gtk.h>

/*�w�q�^�ը�ơA�������s�ɨt�Φ۰ʽե�*/
void Hello_GTK(GtkWidget *widget,gpointer window)
{
	GtkWidget *dialog;
  dialog = gtk_message_dialog_new(window,
            GTK_DIALOG_DESTROY_WITH_PARENT,
            GTK_MESSAGE_INFO,
            GTK_BUTTONS_OK,
            "Hello GTK World!", "Title");
  gtk_window_set_title(GTK_WINDOW(dialog), "Button Clicked");
  gtk_dialog_run(GTK_DIALOG(dialog));
  gtk_widget_destroy(dialog);
}

int main( int   argc, char *argv[] )
{
  GtkWidget *window;
  GtkWidget *button;

	gtk_init(&argc, &argv);
     
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(window),"Hello GTK World!");
  gtk_container_set_border_width(GTK_CONTAINER(window), 20);

	/*�Ыث��s�A�ó]�m��������s�ɡA�n���檺�^�ը��*/
	button = gtk_button_new_with_label("Button");
	g_signal_connect(G_OBJECT(button), "clicked",G_CALLBACK(Hello_GTK), (gpointer)window); 
	/*�N����[�J�쵡�f��*/
	gtk_container_add(GTK_CONTAINER(window),button);
	g_signal_connect_swapped(G_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit), G_OBJECT(window));

  gtk_widget_show_all(window);

	gtk_main();
     
	return 0;
}
