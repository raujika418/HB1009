#include <gtk/gtk.h>

int main(int argc,char *argv[ ])
{

GtkWidget *window;

GtkWidget *scrolled;

GtkWidget *text;

GtkWidget *paned;

gtk_init(&argc,&argv);

window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

gtk_widget_set_size_request(window,200,200);

gtk_signal_connect(GTK_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit),NULL);

paned=gtk_hpaned_new();/*ǤǤǵ�}�����ڡ���ǻǫǤ��ǹ��ǭǭǳ��/

gtk_container_add(GTK_CONTAINER(window),paned);/*ǵǥǩ��ǻǫǤ��ǹ��ǭǭǳ�����ɡ����ѡ�/

gtk_widget_show(paned);

 

scrolled=gtk_scrolled_window_new(NULL,NULL);/*ǤǤǵ�}ǭ��ǿǤ��ǹ��ǭǭǳ��/

gtk_paned_add1(GTK_PANED(paned),scrolled);/*ǵǥǭ��ǿǤ��ǹ��ǭǭǳ�����ɡ�ǵǩ��ǻǫǤ��ǹ��ǭǭǳ�����塼��ǹ��*/

gtk_widget_show(scrolled);

 

text=gtk_text_view_new( );

gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scrolled),text);

gtk_widget_show(text);

 

scrolled=gtk_scrolled_window_new(NULL,NULL);

gtk_paned_add2(GTK_PANED(paned),scrolled);

gtk_widget_show(scrolled);

text=gtk_text_view_new();

gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scrolled),text);

gtk_widget_show(text);

gtk_widget_show(window);

gtk_main();
return 0;
}
