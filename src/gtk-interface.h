enum { 
	PIXBUF_COLUMN,
	TEXT_COLUMN,
	DATA_COLUMN
};

void update_histogram(RS_BLOB *rs);
gboolean update_preview_callback(GtkAdjustment *caller, RS_BLOB *rs);
GtkObject *make_adj(RS_BLOB *rs, double value, double min, double max, double step, double page);
GtkWidget *gui_hist(RS_BLOB *rs, const gchar *label);
GtkWidget *gui_box(const gchar *title, GtkWidget *in);
GtkWidget *gui_rgb_mixer(RS_BLOB *rs);
GtkWidget *gui_slider(GtkObject *adj, const gchar *label);
void gui_reset_clicked(GtkWidget *w, RS_BLOB *rs);
GtkWidget *gui_reset(RS_BLOB *rs);
void save_file_clicked(GtkWidget *w, RS_BLOB *rs);
GtkWidget *save_file(RS_BLOB *rs);
GtkWidget *make_toolbox(RS_BLOB *rs);
void open_file_ok(GtkWidget *w, RS_BLOB *rs);
gboolean open_file(GtkWidget *caller, RS_BLOB *rs);
void fill_model(GtkListStore *store, const char *path);
void icon_activated(GtkIconView *iconview, RS_BLOB *rs);
GtkWidget *make_iconbox(RS_BLOB *rs, GtkListStore *store);
int gui_init(int argc, char **argv);
