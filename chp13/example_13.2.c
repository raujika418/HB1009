
#include <gtk/gtk.h>

/*Ǳ��Ǧ��ǿ�ˡ�/
void button_event(GtkWidget *widget,gpointer *data) 
{
	g_print("Button event:%s\n",(char*)data);
}

int main(int argc,char *argv[ ])
{
	GtkWidget *window;
	GtkWidget *button;

	gtk_init(&argc,&argv); /*Ǣ��ǳǱǿ*/

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL); /*ǤǤǵ�}Ǥ���ѡ�/
	gtk_signal_connect(GTK_OBJECT(window),"delete_event",G_CALLBACK(gtk_main_quit),NULL);
	
	//ǤǤǵ�}��Ǥ�ơE�~�u�ʡ���Ǳ��Ǧ��ǿ�ˡ�
	button=gtk_button_new_with_label("Button");
	gtk_signal_connect(GTK_OBJECT(button),"pressed",GTK_SIGNAL_FUNC(button_event),"pressed"); 
	gtk_signal_connect(GTK_OBJECT(button),"released",GTK_SIGNAL_FUNC(button_event),"released");
	gtk_signal_connect(GTK_OBJECT(button),"clicked",GTK_SIGNAL_FUNC(button_event),"clicked"); 
	gtk_signal_connect(GTK_OBJECT(button),"enter",GTK_SIGNAL_FUNC(button_event),"enter"); 
	gtk_signal_connect(GTK_OBJECT(button),"leave",GTK_SIGNAL_FUNC(button_event),"leave"); 
	
	gtk_container_add(GTK_CONTAINER(window),button);
	gtk_widget_show_all(window);

	gtk_main(); 

	return 0;
}

