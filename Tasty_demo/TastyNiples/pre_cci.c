# 1 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "AsyncCallbacks.c" 1
 
 
 
int LongPoll_0_RequestCB()
{
	 

	 
	 

	 
	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int LongPoll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

# 9 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 10 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"ef686b8f308f4235b6b0bd1b0705edc3\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 11 "globals.h" 2


 
 


# 3 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_max_html_param_len("422");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.5");

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xB5\\xEFc\\x99\\xFA\\xFFuk\\xAE\\xC1\\x96ym\\xA7\\xBDi\\xCB", 
		"LAST");

	web_custom_request("r3.o.lencr.org_2", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xB5\\xEFc\\x99\\xFA\\xFFuk\\xAE\\xC1\\x96ym\\xA7\\xBDi\\xCB", 
		"LAST");

	web_custom_request("r3.o.lencr.org_3", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xCA\\xE2aQ\\xCB\\xE8\\xFE\\xE7\\xB6\\xD35\ts<YKb", 
		"LAST");

	web_custom_request("r3.o.lencr.org_4", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x038.\\xEF\\xAAG\\x99\\xEE\\xC7\\xD7\\xE9\\xBE\\xB7o\\xBBfr\\xB6", 
		"LAST");

	web_custom_request("r3.o.lencr.org_5", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04ZC\\x95t\\x80\\x04+\\x1E\\x82\\xA3\\x1Co\\x86\\xD5\\xE1\\xA8\\xAA", 
		"LAST");

	web_url("www.tastynibbles.in", 
		"URL=https://www.tastynibbles.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("r3.o.lencr.org_6", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04ZC\\x95t\\x80\\x04+\\x1E\\x82\\xA3\\x1Co\\x86\\xD5\\xE1\\xA8\\xAA", 
		"LAST");

	web_custom_request("r3.o.lencr.org_7", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x0F\\xE5\\x1A\\x0E}\\x8A\\xBD\\x03\\x1F\\x8E\\x80I\\xDE\\x03\\x90\\xEC_", 
		"LAST");

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06'd\\xBD\\xAC\\x97O,\nP\\xA8l\\xF3\\xF9\\x00\\xA6", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1708664231684\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		"LAST");

	web_websocket_connect("ID=0", 
		"URI=ws://ocsp.digicert.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		"LAST");

	web_add_cookie("_ga_MQ7767QQQW=GS1.1.1708665488.1.0.1708665504.0.0.0; DOMAIN=aus5.mozilla.org");

	web_add_cookie("_ga=GA1.2.213670173.1708665488; DOMAIN=aus5.mozilla.org");

	web_add_cookie("_gid=GA1.2.2006108704.1708665488; DOMAIN=aus5.mozilla.org");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/123.0/20240213221259/WINNT_x86_64-msvc-x64/en-GB/release/Windows_NT%252010.0.0.0.19045.3324%2520(x64)/ISET%3ASSE4_2%2CMEM%3A12287/default/default/update.xml?force=1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_custom_request("1d795df8-ff7a-4a84-ae0d-6e3f263d7b4a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/1d795df8-ff7a-4a84-ae0d-6e3f263d7b4a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":6,\"start_time\":\"2024-02-23T11:10:47.000+05:30\",\"end_time\":\"2024-02-23T11:22:04.606+05:30\",\"reason\":\"startup\",\"experiments\":{\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\""
		"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"app_display_version\":\"123.0\",\"architecture\":\"x86_64\",\"app_build\":\"20240213221259\",\"locale\":\"en-GB\",\"os_version\":\"10.0\",\"os\":\"Windows\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"quantity\":{\"urlbar.pref_max_results\":10},\""
		"boolean\":{\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false}},\"events\":[{\"timestamp\":0,\"category\":\"fog.validation\",\"name\":\"validate_early_event\"},{\"timestamp\":471,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\"}},{\"timestamp\":1169,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\""
		":\"invalid-feature\",\"experiment\":\"next-generation-accessibility-engine-powering-screen-readers\",\"feature\":\"accessibilityCache\"}},{\"timestamp\":1169,\"category\":\"nimbus_events\",\"name\":\"is_ready\"}]}", 
		"LAST");

	web_custom_request("r3.o.lencr.org_8", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\x0F\\xE5\\x1A\\x0E}\\x8A\\xBD\\x03\\x1F\\x8E\\x80I\\xDE\\x03\\x90\\xEC_", 
		"LAST");

	web_custom_request("e1.o.lencr.org", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\x10\\xDE\\x96~(mmn\\xED\\xEA\\x8A\\x88@\\xAFg=\"", 
		"LAST");

	web_custom_request("e1.o.lencr.org_2", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xABc'\\xF2@\\xBE\\xD6\\xB5\\xC1\\xB5:\\xC0\\xA1\\xCBA1\\x82", 
		"LAST");

	web_custom_request("e1.o.lencr.org_3", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		"LAST");

	web_custom_request("e1.o.lencr.org_4", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		"LAST");

	web_custom_request("e1.o.lencr.org_5", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		"LAST");

	web_custom_request("ac47898f-f265-4daa-ac57-a7016cc29f5d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/ac47898f-f265-4daa-ac57-a7016cc29f5d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":8,\"start_time\":\"2024-02-23T11:10:48.000+05:30\",\"end_time\":\"2024-02-23T11:22:04.616+05:30\",\"reason\":\"dirty_startup\",\"experiments\":{\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"client_id\":\""
		"b15c2122-a8ac-496f-a186-095bffc440f6\",\"first_run_date\":\"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"123.0\",\"app_build\":\"20240213221259\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\"},\"metrics\":{\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"uuid\":{\"legacy.telemetry.client_id\":\""
		"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"counter\":{\"browser.engagement.uri_count\":3,\"browser.engagement.active_ticks\":18},\"datetime\":{\"glean.validation.first_run_hour\":\"2023-02-13T17+05:30\"}}}", 
		"LAST");

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("7b95d0a6-8760-435e-8fef-e8de2c776eaf", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/7b95d0a6-8760-435e-8fef-e8de2c776eaf", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5,\"start_time\":\"2024-02-23T11:10:19.000+05:30\",\"end_time\":\"2024-02-23T11:21:36.254+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"first_run_date\":\"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_build\":\"20240213221259\",\"locale\":\"en-GB\",\"app_display_version\":\"123.0\"},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_margin\":5,\""
		"use.counter.css.doc.css_margin_bottom\":5,\"use.counter.css.doc.css_transform_style\":2,\"use.counter.css.page.css_webkit_filter\":2,\"use.counter.css.doc.css_border_bottom_right_radius\":2,\"use.counter.css.page.css_webkit_animation_duration\":2,\"use.counter.css.page.css_animation_timing_function\":2,\"use.counter.css.page.css_text_overflow\":2,\"use.counter.css.page.css_transform_origin\":2,\"use.counter.css.page.css_right\":2,\"use.counter.css.page.css_stroke_miterlimit\":2,\""
		"use.counter.css.doc.css_hyphens\":2,\"use.counter.css.page.css_transition_duration\":2,\"use.counter.css.doc.css_justify_content\":4,\"use.counter.css.page.css_webkit_animation_direction\":2,\"use.counter.css.page.css_webkit_appearance\":2,\"use.counter.css.doc.css_moz_user_select\":4,\"use.counter.css.page.css_justify_content\":2,\"use.counter.css.doc.css_moz_box_sizing\":3,\"use.counter.css.page.css_border_top\":2,\"use.counter.css.page.css_white_space\":2,\""
		"use.counter.css.page.css_border_right_color\":2,\"use.counter.css.doc.css_text_align\":5,\"use.counter.css.doc.css_outline_style\":2,\"use.counter.css.doc.css_break_inside\":2,\"use.counter.css.page.webkit_padding_start\":2,\"use.counter.css.page.css_pointer_events\":2,\"use.counter.css.doc.css_webkit_order\":2,\"use.counter.css.page.css_text_rendering\":2,\"use.counter.css.page.css_box_shadow\":2,\"use.counter.css.page.css_break_inside\":2,\"use.counter.css.page.css_line_height\":3,\""
		"use.counter.css.doc.css_grid_column\":2,\"use.counter.css.doc.css_margin_top\":4,\"use.counter.css.page.css_visibility\":2,\"use.counter.css.doc.css_flex_wrap\":4,\"use.counter.css.doc.css_flex_grow\":2,\"use.counter.css.page.css_grid_column\":2,\"use.counter.css.page.css_border_right\":2,\"use.counter.css.page.css_webkit_transition_timing_function\":2,\"use.counter.css.page.css_overflow_wrap\":2,\"use.counter.css.doc.css_stroke_miterlimit\":3,\"use.counter.css.page.css_padding_bottom\":3,\""
		"use.counter.css.page.css_webkit_transition\":2,\"use.counter.css.doc.css_border_top_left_radius\":4,\"use.counter.css.doc.css_animation\":4,\"use.counter.css.doc.css_columns\":2,\"use.counter.css.doc.css_fill_rule\":3,\"use.counter.css.doc.css_gap\":4,\"use.counter.css.doc.css_webkit_flex_basis\":2,\"use.counter.css.doc.css_z_index\":4,\"use.counter.css.doc.css_line_height\":5,\"use.counter.css.page.css_outline_style\":2,\"use.counter.css.doc.css_overflow_wrap\":4,\""
		"use.counter.css.doc.css_webkit_box_shadow\":4,\"use.counter.css.page.css_margin\":3,\"use.counter.doc.document_featurepolicy\":2,\"use.counter.css.page.css_moz_appearance\":2,\"use.counter.css.doc.css_max_height\":4,\"use.counter.css.doc.css_border_right_color\":2,\"use.counter.css.doc.css_font_style\":4,\"use.counter.css.page.css_resize\":2,\"use.counter.css.doc.css_webkit_box_sizing\":5,\"use.counter.css.doc.css_animation_duration\":4,\"use.counter.page.document_featurepolicy\":2,\""
		"use.counter.css.doc.css_box_shadow\":4,\"use.counter.css.doc.css_animation_name\":3,\"use.counter.doc.fe_composite\":1,\"use.counter.css.doc.css_transition_duration\":4,\"use.counter.css.page.css_webkit_backface_visibility\":2,\"use.counter.doc.mixed_content_not_upgraded_image_failure\":2,\"use.counter.css.doc.css_appearance\":4,\"use.counter.css.doc.css_padding_right\":4,\"use.counter.css.doc.css_text_decoration_line\":4,\"use.counter.css.doc.css_text_underline_offset\":2,\""
		"use.counter.css.doc.css_border_color\":4,\"use.counter.css.page.css_vertical_align\":2,\"use.counter.css.page.css_webkit_order\":2,\"use.counter.css.page.css_opacity\":2,\"use.counter.css.doc.css_mix_blend_mode\":4,\"use.counter.css.page.css_table_layout\":2,\"use.counter.css.doc.css_text_overflow\":4,\"use.counter.css.doc.css_webkit_user_select\":4,\"use.counter.css.page.css_border_image\":2,\"use.counter.css.page.css_margin_left\":2,\"use.counter.css.page.css_min_width\":3,\""
		"use.counter.css.doc.css_border_right\":4,\"use.counter.css.page.css_will_change\":2,\"use.counter.css.page.css_flex\":2,\"use.counter.css.doc.css_webkit_animation_timing_function\":2,\"use.counter.css.page.css_content\":3,\"use.counter.css.page.css_transform_style\":2,\"use.counter.css.page.css_webkit_box_direction\":2,\"use.counter.css.doc.css_webkit_animation_name\":2,\"use.counter.css.page.css_border_left_width\":2,\"use.counter.css.page.css_webkit_animation_fill_mode\":2,\""
		"use.counter.css.doc.css_webkit_border_radius\":2,\"use.counter.css.doc.css_moz_transition\":2,\"use.counter.css.doc.css_padding\":5,\"use.counter.css.doc.css_scrollbar_color\":2,\"use.counter.css.page.css_webkit_flex_shrink\":2,\"use.counter.css.page.css_bottom\":3,\"use.counter.css.page.css_object_position\":2,\"use.counter.css.page.css_text_transform\":2,\"use.counter.css.doc.css_font_feature_settings\":4,\"use.counter.css.page.css_z_index\":2,\"use.counter.css.doc.css_flex\":4,\""
		"use.counter.css.doc.css_scrollbar_width\":4,\"use.counter.css.doc.css_flex_shrink\":2,\"use.counter.css.page.css_font_family\":3,\"use.counter.css.doc.css_stroke_dasharray\":3,\"use.counter.css.page.css_webkit_flex\":2,\"use.counter.css.page.css_columns\":2,\"use.counter.css.page.css_clear\":2,\"use.counter.page.domparser_parsefromstring\":2,\"use.counter.css.page.css_border_top_right_radius\":2,\"use.counter.doc.fe_gaussian_blur\":1,\"use.counter.css.doc.css_animation_direction\":2,\""
		"use.counter.css.doc.css_caret_color\":2,\"use.counter.css.doc.css_object_position\":2,\"use.counter.css.doc.css_webkit_border_top_left_radius\":2,\"use.counter.css.doc.css_webkit_transform\":4,\"use.counter.css.doc.css_webkit_transform_origin\":4,\"use.counter.css.page.css_flex_shrink\":2,\"use.counter.css.doc.css_word_wrap\":4,\"use.counter.doc.console_log\":2,\"use.counter.css.page.css_webkit_align_items\":2,\"use.counter.css.page.css_webkit_border_top_left_radius\":2,\""
		"use.counter.css.doc.css_webkit_flex_grow\":2,\"use.counter.doc.domparser_parsefromstring\":2,\"use.counter.css.page.css_grid_template_columns\":2,\"use.counter.css.page.css_margin_right\":2,\"use.counter.css.doc.css_list_style_type\":2,\"use.counter.css.page.css_box_sizing\":3,\"use.counter.css.page.css_webkit_flex_direction\":2,\"use.counter.page.fe_gaussian_blur\":1,\"use.counter.css.doc.webkit_tap_highlight_color\":4,\"use.counter.css.doc.css_clear\":4,\"use.counter.css.doc.css_stroke_width\":4"
		",\"use.counter.css.doc.css_webkit_transition_property\":2,\"use.counter.css.page.css_padding_top\":3,\"use.counter.css.doc.css_background_position_y\":2,\"use.counter.css.page.css_text_align\":3,\"use.counter.css.page.css_animation_fill_mode\":2,\"use.counter.css.page.css_webkit_animation_timing_function\":2,\"use.counter.css.doc.css_padding_left\":4,\"use.counter.css.page.css_column_gap\":2,\"use.counter.css.page.css_webkit_border_top_right_radius\":2,\"use.counter.css.doc.css_text_decoration\":4"
		",\"use.counter.css.page.css_background_repeat\":2,\"use.counter.css.page.css_scroll_behavior\":2,\"use.counter.css.page.css_text_shadow\":2,\"use.counter.css.doc.css_table_layout\":2,\"use.counter.css.doc.css_max_width\":5,\"use.counter.css.page.css_flex_flow\":2,\"use.counter.css.doc.css_border_left_color\":4,\"use.counter.css.page.css_border_top_left_radius\":2,\"use.counter.css.doc.css_font_size\":5,\"use.counter.css.page.css_flex_wrap\":2,\"use.counter.css.doc.css_flex_direction\":4,\""
		"use.counter.css.page.css_align_self\":2,\"use.counter.css.doc.css_webkit_transition_timing_function\":2,\"use.counter.css.page.css_margin_top\":2,\"use.counter.css.doc.css_translate\":2,\"use.counter.css.doc.css_border_left_width\":2,\"use.counter.doc.window_chrome\":2,\"use.counter.css.page.css_webkit_box_shadow\":2,\"use.counter.css.page.css_webkit_user_select\":2,\"use.counter.css.doc.webkit_margin_after\":2,\"use.counter.css.page.css_webkit_transform\":2,\""
		"use.counter.css.page.css_animation_iteration_count\":2,\"use.counter.css.page.css_webkit_align_self\":2,\"use.counter.css.page.css_webkit_box_ordinal_group\":2,\"use.counter.css.doc.css_text_indent\":4,\"use.counter.css.doc.css_webkit_flex_wrap\":2,\"use.counter.css.doc.css_align_content\":2,\"use.counter.css.page.css_background_position_x\":2,\"use.counter.css.page.css_justify_self\":2,\"use.counter.css.page.css_stroke_dashoffset\":2,\"use.counter.css.doc.css_background_image\":4,\""
		"use.counter.css.doc.css_stroke\":4,\"use.counter.css.page.css_border_bottom_right_radius\":2,\"use.counter.page.window_chrome\":2,\"use.counter.css.page.css_list_style_position\":2,\"use.counter.css.doc.css_moz_transform_origin\":2,\"use.counter.css.doc.css_animation_delay\":4,\"use.counter.css.page.css_border\":3,\"use.counter.css.doc.css_transform_origin\":4,\"use.counter.css.page.css_touch_action\":2,\"use.counter.css.doc.css_background_size\":5,\"use.counter.content_documents_destroyed\":14,\""
		"use.counter.page.fe_blend\":1,\"use.counter.css.page.css_color_interpolation_filters\":1,\"use.counter.css.doc.css_webkit_text_size_adjust\":2,\"use.counter.doc.customelementregistry_define\":2,\"use.counter.css.page.css_scrollbar_width\":2,\"use.counter.css.doc.css_border_style\":4,\"use.counter.css.page.css_webkit_box_sizing\":3,\"use.counter.css.doc.css_background_position\":5,\"use.counter.css.doc.css_webkit_box_align\":4,\"use.counter.doc.fe_color_matrix\":1,\""
		"use.counter.css.doc.css_min_width\":5,\"use.counter.css.page.css_moz_transform\":2,\"use.counter.css.doc.css_justify_self\":2,\"use.counter.css.doc.css_animation_fill_mode\":3,\"use.counter.css.doc.widows\":2,\"use.counter.css.doc.css_page_break_after\":2,\"use.counter.doc.window_touchlist\":2,\"use.counter.css.page.css_float\":2,\"use.counter.css.doc.css_fill\":4,\"use.counter.css.doc.css_transition_property\":4,\"use.counter.css.doc.css_webkit_animation_duration\":2,\""
		"use.counter.css.doc.css_border\":5,\"use.counter.css.doc.css_stroke_linejoin\":3,\"use.counter.page.mixed_content_not_upgraded_image_success\":2,\"use.counter.css.doc.css_webkit_transition\":4,\"use.counter.css.page.css_border_collapse\":2,\"use.counter.css.page.css_list_style\":2,\"use.counter.css.doc.css_transition_delay\":4,\"use.counter.css.doc.css_webkit_flex_shrink\":2,\"use.counter.css.doc.webkit_margin_before\":2,\"use.counter.css.page.css_flex_basis\":2,\"use.counter.css.page.css_order\""
		":2,\"use.counter.css.page.css_webkit_animation_delay\":2,\"use.counter.css.page.css_page_break_after\":2,\"use.counter.css.page.css_webkit_transition_property\":2,\"use.counter.css.page.css_word_break\":2,\"use.counter.page.fe_color_matrix\":1,\"use.counter.css.doc.css_border_width\":4,\"use.counter.css.page.css_webkit_transition_duration\":2,\"use.counter.css.page.css_background\":3,\"use.counter.css.page.css_fill\":3,\"use.counter.css.doc.css_webkit_filter\":2,\""
		"use.counter.css.page.css_font_weight\":3,\"use.counter.css.doc.css_moz_appearance\":4,\"use.counter.css.doc.css_background_position_x\":2,\"use.counter.css.page.css_transition_delay\":2,\"use.counter.css.doc.css_background_attachment\":2,\"use.counter.page.console_log\":2,\"use.counter.css.doc.css_stroke_dashoffset\":2,\"use.counter.css.page.css_font_size\":3,\"use.counter.css.page.css_backdrop_filter\":2,\"use.counter.css.page.css_overflow\":2,\"use.counter.css.page.css_place_items\":2,\""
		"use.counter.css.page.css_overflow_y\":2,\"use.counter.css.page.css_hyphens\":2,\"use.counter.css.doc.css_box_sizing\":5,\"use.counter.css.page.css_webkit_text_size_adjust\":2,\"use.counter.css.doc.css_padding_inline_start\":2,\"use.counter.css.doc.css_scroll_behavior\":4,\"use.counter.css.doc.css_column_gap\":3,\"use.counter.css.page.css_margin_block_end\":2,\"use.counter.css.doc.css_user_select\":4,\"use.counter.css.doc.css_vertical_align\":4,\"use.counter.css.doc.css_webkit_transition_duration\""
		":2,\"use.counter.css.doc.css_flex_basis\":4,\"use.counter.css.page.css_flex_grow\":2,\"use.counter.dedicated_workers_destroyed\":4,\"use.counter.css.page.css_font_variant_numeric\":2,\"use.counter.css.doc.css_webkit_backface_visibility\":2,\"use.counter.css.page.css_transition_property\":2,\"use.counter.css.page.webkit_font_feature_settings\":2,\"use.counter.css.doc.css_border_radius\":4,\"use.counter.css.doc.css_overflow_x\":4,\"use.counter.css.doc.css_border_top_right_radius\":4,\""
		"use.counter.css.doc.css_text_transform\":4,\"use.counter.css.doc.css_border_left\":4,\"use.counter.css.page.css_border_left_color\":2,\"use.counter.css.page.css_webkit_flex_basis\":2,\"use.counter.css.doc.css_font_weight\":5,\"use.counter.css.doc.css_right\":4,\"use.counter.css.page.css_list_style_type\":2,\"use.counter.css.page.css_max_height\":2,\"use.counter.css.doc.css_webkit_box_ordinal_group\":2,\"use.counter.css.page.css_text_underline_offset\":2,\"use.counter.css.doc.css_clip\":2,\""
		"use.counter.css.page.css_moz_transition\":2,\"use.counter.css.doc.css_webkit_transform_style\":2,\"use.counter.css.page.css_transition_timing_function\":2,\"use.counter.css.page.css_transform\":2,\"use.counter.css.doc.css_filter\":3,\"use.counter.css.doc.css_webkit_align_items\":2,\"use.counter.css.page.css_animation_duration\":2,\"use.counter.css.page.css_margin_block_start\":2,\"use.counter.page.mixed_content_not_upgraded_image_failure\":2,\"use.counter.css.doc.css_font\":2,\""
		"use.counter.css.page.css_border_top_color\":2,\"use.counter.css.page.css_min_height\":3,\"use.counter.css.page.css_background_attachment\":2,\"use.counter.css.doc.css_border_top\":4,\"use.counter.css.page.webkit_margin_after\":2,\"use.counter.doc.mixed_content_not_upgraded_image_success\":2,\"use.counter.css.doc.css_list_style\":4,\"use.counter.css.doc.css_webkit_box_orient\":2,\"use.counter.css.page.css_caret_color\":2,\"use.counter.css.page.css_padding_left\":2,\""
		"use.counter.css.page.css_scrollbar_color\":2,\"use.counter.css.page.css_webkit_box_pack\":2,\"use.counter.css.doc.css_align_self\":4,\"use.counter.css.page.css_font_style\":2,\"use.counter.css.doc.css_border_bottom_color\":4,\"use.counter.css.doc.css_margin_right\":4,\"use.counter.css.doc.css_left\":5,\"use.counter.css.doc.css_position\":5,\"use.counter.css.doc.css_place_items\":2,\"use.counter.css.doc.css_will_change\":2,\"use.counter.css.page.css_backface_visibility\":2,\""
		"use.counter.css.page.css_text_indent\":2,\"use.counter.css.page.css_page_break_inside\":2,\"use.counter.css.doc.css_transition\":4,\"use.counter.css.doc.css_webkit_transition_delay\":2,\"use.counter.css.page.css_border_radius\":2,\"use.counter.css.page.css_webkit_flex_wrap\":2,\"use.counter.css.doc.css_border_top_color\":4,\"use.counter.css.page.css_mix_blend_mode\":2,\"use.counter.css.page.css_text_decoration\":2,\"use.counter.css.doc.css_background_color\":4,\""
		"use.counter.css.page.css_align_items\":2,\"use.counter.css.page.css_border_bottom_left_radius\":2,\"use.counter.css.page.css_text_decoration_line\":2,\"use.counter.css.doc.css_border_spacing\":2,\"use.counter.css.page.css_background_position\":3,\"use.counter.css.page.css_filter\":2,\"use.counter.top_level_content_documents_destroyed\":3,\"use.counter.css.page.css_font\":2,\"use.counter.css.page.css_position\":3,\"use.counter.css.doc.css_opacity\":4,\"use.counter.css.page.css_top\":3,\""
		"use.counter.css.page.css_transition\":2,\"use.counter.doc.fe_offset\":1,\"use.counter.css.doc.css_min_height\":5,\"use.counter.css.doc.css_color_interpolation_filters\":1,\"use.counter.css.page.css_background_image\":2,\"use.counter.css.page.css_webkit_box_orient\":2,\"use.counter.css.doc.css_flex_flow\":2,\"use.counter.css.page.webkit_font_smoothing\":2,\"use.counter.css.page.css_border_left\":2,\"use.counter.css.page.css_stroke\":3,\"use.counter.css.doc.css_moz_transform\":2,\""
		"use.counter.css.doc.css_transform\":4,\"use.counter.css.doc.css_cursor\":4,\"use.counter.css.page.css_webkit_flex_grow\":2,\"use.counter.css.page.css_border_style\":2,\"use.counter.css.page.css_user_select\":2,\"use.counter.css.doc.css_animation_iteration_count\":2,\"use.counter.css.doc.css_bottom\":5,\"use.counter.css.page.css_animation_direction\":2,\"use.counter.css.page.css_webkit_border_radius\":2,\"use.counter.css.page.css_webkit_transition_delay\":2,\"use.counter.css.page.webkit_column_gap"
		"\":2,\"use.counter.page.fe_composite\":1,\"use.counter.css.doc.css_list_style_position\":2,\"use.counter.css.doc.css_letter_spacing\":4,\"use.counter.css.doc.css_animation_timing_function\":3,\"use.counter.css.doc.css_touch_action\":2,\"use.counter.css.page.css_background_size\":3,\"use.counter.css.page.css_webkit_animation\":2,\"use.counter.css.doc.webkit_padding_start\":2,\"use.counter.css.doc.css_webkit_appearance\":4,\"use.counter.css.doc.webkit_font_smoothing\":2,\""
		"use.counter.css.doc.orphans\":2,\"use.counter.css.doc.css_margin_block_end\":2,\"use.counter.page.fe_flood\":1,\"use.counter.css.doc.css_font_variant_numeric\":2,\"use.counter.page.window_paymentrequest\":2,\"use.counter.css.doc.css_text_shadow\":4,\"use.counter.css.doc.css_border_bottom\":4,\"use.counter.css.doc.css_visibility\":4,\"use.counter.css.page.css_webkit_animation_iteration_count\":2,\"use.counter.css.doc.css_overflow_y\":4,\"use.counter.css.page.css_color\":3,\""
		"use.counter.css.page.css_letter_spacing\":2,\"use.counter.css.page.css_outline\":2,\"use.counter.css.page.css_cursor\":2,\"use.counter.css.page.css_stroke_linecap\":3,\"use.counter.css.doc.webkit_font_feature_settings\":2,\"use.counter.css.doc.css_flood_opacity\":1,\"use.counter.css.doc.css_font_family\":5,\"use.counter.css.doc.css_width\":6,\"use.counter.css.page.css_background_position_y\":2,\"use.counter.css.doc.css_padding_top\":5,\"use.counter.css.doc.css_webkit_box_pack\":2,\""
		"use.counter.css.doc.css_pointer_events\":4,\"use.counter.doc.window_performancelongtasktiming\":2,\"use.counter.css.doc.css_border_image\":2,\"use.counter.css.page.css_animation\":2,\"use.counter.css.page.css_font_feature_settings\":2,\"use.counter.css.page.css_fill_rule\":3,\"use.counter.css.page.css_left\":3,\"use.counter.css.doc.css_height\":6,\"use.counter.page.fe_offset\":1,\"use.counter.css.doc.css_border_bottom_left_radius\":2,\"use.counter.css.doc.css_border_collapse\":2,\""
		"use.counter.css.page.css_border_width\":2,\"use.counter.css.page.css_padding_right\":2,\"use.counter.css.page.css_animation_delay\":2,\"use.counter.css.doc.css_resize\":2,\"use.counter.css.page.css_stroke_dasharray\":3,\"use.counter.css.doc.css_background_repeat\":4,\"use.counter.css.doc.css_webkit_border_top_right_radius\":2,\"use.counter.css.doc.css_webkit_flex_direction\":2,\"use.counter.css.page.css_overflow_x\":2,\"use.counter.css.page.css_webkit_box_flex\":2,\""
		"use.counter.css.doc.css_margin_left\":4,\"use.counter.page.window_touchlist\":2,\"use.counter.css.page.css_clip\":2,\"use.counter.css.page.css_border_spacing\":2,\"use.counter.css.doc.css_webkit_animation_fill_mode\":2,\"use.counter.page.window_performancelongtasktiming\":2,\"use.counter.css.doc.css_webkit_box_flex\":2,\"use.counter.css.page.css_align_content\":2,\"use.counter.css.page.css_translate\":2,\"use.counter.doc.fe_blend\":1,\"use.counter.css.page.orphans\":2,\""
		"use.counter.css.doc.css_backface_visibility\":2,\"use.counter.css.page.css_object_fit\":2,\"use.counter.css.doc.css_webkit_animation\":4,\"use.counter.css.doc.css_color\":5,\"use.counter.css.doc.css_overflow\":4,\"use.counter.css.doc.css_backdrop_filter\":2,\"use.counter.css.doc.css_word_break\":4,\"use.counter.doc.window_paymentrequest\":2,\"use.counter.css.page.css_moz_box_sizing\":3,\"use.counter.css.page.css_flood_opacity\":1,\"use.counter.css.page.webkit_margin_before\":2,\""
		"use.counter.css.doc.css_background\":5,\"use.counter.css.page.css_webkit_justify_content\":2,\"use.counter.css.page.css_gap\":2,\"use.counter.css.page.css_webkit_box_align\":2,\"use.counter.css.page.css_animation_name\":2,\"use.counter.css.doc.css_direction\":2,\"use.counter.css.doc.css_webkit_box_direction\":2,\"use.counter.css.doc.css_white_space\":4,\"use.counter.css.doc.css_content\":5,\"use.counter.css.doc.css_transition_timing_function\":2,\"use.counter.css.page.css_border_bottom\":2,\""
		"use.counter.css.page.css_stroke_linejoin\":3,\"use.counter.css.page.css_margin_bottom\":3,\"use.counter.css.page.css_max_width\":3,\"use.counter.css.doc.css_webkit_animation_delay\":2,\"use.counter.css.doc.webkit_column_gap\":2,\"use.counter.css.doc.css_object_fit\":4,\"use.counter.css.doc.css_webkit_justify_content\":2,\"use.counter.css.page.css_direction\":2,\"use.counter.css.page.css_webkit_transform_origin\":2,\"use.counter.css.doc.css_webkit_flex\":2,\"use.counter.css.doc.css_order\":4,\""
		"use.counter.css.page.css_flex_direction\":2,\"use.counter.css.page.css_background_clip\":2,\"use.counter.css.doc.css_text_rendering\":2,\"use.counter.css.page.css_border_bottom_color\":2,\"use.counter.css.doc.css_webkit_animation_iteration_count\":2,\"use.counter.css.page.css_webkit_transform_style\":2,\"use.counter.css.doc.css_display\":5,\"use.counter.css.page.css_appearance\":2,\"use.counter.css.page.css_border_color\":2,\"use.counter.css.page.css_moz_user_select\":2,\""
		"use.counter.css.doc.css_page_break_inside\":2,\"use.counter.css.doc.css_align_items\":4,\"use.counter.css.doc.css_webkit_animation_direction\":2,\"use.counter.css.page.css_height\":3,\"use.counter.css.page.webkit_tap_highlight_color\":2,\"use.counter.css.doc.css_background_clip\":2,\"use.counter.css.page.widows\":2,\"use.counter.css.doc.css_padding_bottom\":5,\"use.counter.css.doc.css_stroke_linecap\":3,\"use.counter.css.page.css_padding\":3,\"use.counter.css.page.css_word_wrap\":2,\""
		"use.counter.doc.fe_flood\":1,\"use.counter.css.page.css_webkit_animation_name\":2,\"use.counter.css.page.css_display\":3,\"use.counter.css.page.css_stroke_width\":3,\"use.counter.css.page.css_padding_inline_start\":2,\"use.counter.css.doc.css_float\":4,\"use.counter.page.customelementregistry_define\":2,\"use.counter.css.page.css_background_color\":2,\"use.counter.css.doc.css_margin_block_start\":2,\"use.counter.css.doc.css_webkit_align_self\":2,\"use.counter.css.page.css_width\":3,\""
		"use.counter.css.page.css_moz_transform_origin\":2,\"use.counter.css.doc.css_outline\":4,\"use.counter.css.doc.css_grid_template_columns\":4,\"use.counter.css.doc.css_top\":5}}}", 
		"LAST");

	web_custom_request("ocsp.r2m02.amazontrust.com", 
		"URL=http://ocsp.r2m02.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0F\\x98Z\\xBE\\xB7`\\xE0AC]a\\x8E\\x9A\\xC1\\x01\t", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A52%3A08.857Z; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_p=; DOMAIN=www.tastynibbles.in");

	web_url("modern", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("7cd25f7e-3669-40fb-98d7-5b1d5ddb1966", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/7cd25f7e-3669-40fb-98d7-5b1d5ddb1966", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":2,\"start_time\":\"2024-02-23T11:10:48.000+05:30\",\"end_time\":\"2024-02-23T11:22:04.645+05:30\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\"first_run_date\":\"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_display_version\":\"123.0\",\"locale\":\"en-GB\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_build\":\"20240213221259\",\"architecture\":\"x86_64\",\"os\":\""
		"Windows\"},\"events\":[{\"timestamp\":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_time\":\"106909\",\"redirect_time\":\"355\",\"load_type\":\"STOP\",\"http_ver\":\"1\",\"js_exec_time\":\"243\",\"fcp_time\":\"103084\",\"same_origin_nav\":\"true\",\"redirect_count\":\"1\",\"response_time\":\"916\",\"lcp_time\":\"103345\"}},{\"timestamp\":67408,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"same_origin_nav\":\"true\",\"load_time\":\"482\",\"http_ver\":\"1\",\""
		"load_type\":\"LINK\",\"response_time\":\"446\"}}]}", 
		"LAST");

	web_custom_request("defc83c0-19dc-4af1-ae4b-ddde6fe6a99b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/defc83c0-19dc-4af1-ae4b-ddde6fe6a99b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":13,\"start_time\":\"2024-02-23T11:10:48.000+05:30\",\"end_time\":\"2024-02-23T11:22:04.696+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"windows_build_number\":19045,\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"app_build\":\"20240213221259\",\"locale\":\"en-GB\",\"os_version\":\"10.0\",\"app_display_version\":\"123.0\",\"os\":"
		"\"Windows\",\"app_channel\":\"release\",\"architecture\":\"x86_64\"},\"metrics\":{\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-GB\"},\"boolean\":{\"pocket.is_signed_in\":false,\"topsites.enabled\":true,\"topsites.sponsored_enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"newtab.search.enabled\":true,\"pocket.enabled\":true},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"quantity\":{\"topsites.rows\":1}}}", 
		"LAST");

	web_custom_request("e1.o.lencr.org_6", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		"LAST");

	web_custom_request("produce_batch", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667528734},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667528734}}]}", 
		"LAST");

	web_custom_request("produce_batch_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667528856},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\""
		":\"home\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d48578b5-BCE6-4A2C-1B95-E917E2826C9F\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708667528856}"
		"}]}", 
		"LAST");

	web_custom_request("produce_batch_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667528858},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667528735}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\"},\"metadata\":{\"event_created_at_ms\":1708667528857}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667528857}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667528857}}]}", 
		"LAST");

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667528858},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\",\"referrer\":\"\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667528858,\"event_source_url\":\"https://www.tastynibbles.in/\",\"unique_token\":\""
		"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d48578b5-BCE6-4A2C-1B95-E917E2826C9F\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\""
		",\"session_id\":\"sh-d48579ae-31A7-42F4-0314-243EF80BF4E5\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667528858}}]}", 
		"LAST");

	web_custom_request("produce_batch_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667529198},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667528690}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667528703}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\"},\"metadata\":{\"event_created_at_ms\":1708667528704}}]}", 
		"LAST");

	web_custom_request("produce_batch_6", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667529811},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version"
		"\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\"},\"metadata\":{\"event_created_at_ms\":1708667529244}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":552,\"start_time\":4731,\"session_id\":\"9169d5dc-a02f-4958-af56-d1965558bf77\"},\"metadata\":{\"event_created_at_ms\":1708667529257}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\"},\"metadata\":{\"event_created_at_ms\":1708667529696}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\""
		"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1000,\"start_time\":4730,\"session_id\":\"9169d5dc-a02f-4958-af56-d1965558bf77\"},\"metadata\":{\"event_created_at_ms\":1708667529705}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\""
		":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4857878-503B-4C27-FCAC-1B3FB2D3D406\"},\"metadata\":{\"event_created_at_ms\":1708667529710}},{"
		"\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1005,\"start_time\":4731,\"session_id\":\"9169d5dc-a02f-4958-af56-d1965558bf77\"},\"metadata\":{\"event_created_at_ms\":1708667529710}}]}", 
		"LAST");

	web_custom_request("4bf60e6c-0651-4dbe-9a84-8a262ec56660", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/4bf60e6c-0651-4dbe-9a84-8a262ec56660", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":9,\"start_time\":\"2024-02-23T11:22:04.000+05:30\",\"end_time\":\"2024-02-23T11:22:04.755+05:30\",\"reason\":\"active\",\"experiments\":{\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\""
		":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"client_id\":\""
		"b15c2122-a8ac-496f-a186-095bffc440f6\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"windows_build_number\":19045,\"os_version\":\"10.0\",\"locale\":\"en-GB\",\"os\":\"Windows\",\"app_display_version\":\"123.0\",\"app_channel\":\"release\",\"app_build\":\"20240213221259\",\"architecture\":\"x86_64\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\""
		"baseline\":1,\"newtab\":1,\"pageload\":1}},\"datetime\":{\"glean.validation.first_run_hour\":\"2023-02-13T17+05:30\"}}}", 
		"LAST");

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("6d395291-0929-47cd-8e97-26911ba72032", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/6d395291-0929-47cd-8e97-26911ba72032", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":0,\"start_time\":\"2024-02-23T11:22:04.599+05:30\",\"end_time\":\"2024-02-23T11:22:06.383+05:30\",\"experiments\":{\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"build_date"
		"\":\"1970-01-01T00:00:00+00:00\",\"os\":\"Windows\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_build\":\"20240213221259\",\"app_display_version\":\"123.0\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\",\"windows_build_number\":19045,\"first_run_date\":\"2023-02-13+05:30\"},\"metrics\":{\"text\":{\"messaging_system.message_id\":\"FOX_DOODLE_SET_DEFAULT\"},\"uuid\":{\"messaging_system.browser_session_id\":\"a4e8562a-2896-42e4-ad60-87a926fdab13\",\"messaging_system.client_id\":\""
		"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"string\":{\"messaging_system.event\":\"IMPRESSION\",\"messaging_system.locale\":\"en-GB\",\"messaging_system.ping_type\":\"spotlight\",\"messaging_system.addon_version\":\"20240213221259\"}}}", 
		"LAST");

	web_custom_request("257e2757-0a48-462b-bc0c-76195f28a6db", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/257e2757-0a48-462b-bc0c-76195f28a6db", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":1,\"start_time\":\"2024-02-23T11:22:06.000+05:30\",\"end_time\":\"2024-02-23T11:22:06.471+05:30\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\""
		"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"first_run_date\":\"2023-02-13+05:30\",\"build_date\":\""
		"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"locale\":\"en-GB\",\"app_build\":\"20240213221259\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"123.0\",\"app_channel\":\"release\",\"architecture\":\"x86_64\"},\"metrics\":{\"text\":{\"messaging_system.event_screen_family\":\"FOX_DOODLE_SET_DEFAULT\",\"messaging_system.event_context\":\"{\\\"screen_family\\\":\\\"FOX_DOODLE_SET_DEFAULT\\\",\\\"screen_index\\\":0,\\\"screen_initials\\\":\\\"\\\",\\\"page\\\":\\\""
		"spotlight\\\"}\",\"messaging_system.message_id\":\"FOX_DOODLE_SET_DEFAULT_0_undefined_\"},\"string\":{\"messaging_system.attribution.campaign\":\"%2528not%2Bset%2529\",\"messaging_system.attribution.experiment\":\"%2528not%2Bset%2529\",\"messaging_system.event\":\"IMPRESSION\",\"messaging_system.locale\":\"en-GB\",\"messaging_system.addon_version\":\"20240213221259\",\"messaging_system.attribution.source\":\"www.google.com\",\"messaging_system.attribution.ua\":\"chrome\",\""
		"messaging_system.attribution.medium\":\"referral\",\"messaging_system.attribution.dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\"messaging_system.attribution.variation\":\"%2528not%2Bset%2529\",\"messaging_system.attribution.content\":\"%2528not%2Bset%2529\",\"messaging_system.event_page\":\"spotlight\"},\"uuid\":{\"messaging_system.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"messaging_system.browser_session_id\":\"a4e8562a-2896-42e4-ad60-87a926fdab13\"},\"quantity\":{\""
		"messaging_system.event_screen_index\":0}}}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.0.1708667530.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga=GA1.1.345955748.1708667531; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_gcl_au=1.1.1028054568.1708667531; DOMAIN=www.tastynibbles.in");

	web_url("cart", 
		"URL=https://www.tastynibbles.in/cart?t=1708667531083&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.0.1708667531.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("location_status", 
		"URL=https://www.tastynibbles.in/apps/discos/location_status?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("wbanner", 
		"URL=https://www.tastynibbles.in/apps/discos/wbanner?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");

 
# 630 "Action.c"
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=http://ocsp.r2m02.amazontrust.com/", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		"LAST");

	web_custom_request("ocsp.r2m02.amazontrust.com_2", 
		"URL=http://ocsp.r2m02.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\xF6k^0\\x8A\\x05\\xF8\\xDA' \\xCBe\\x05\\xB4\\x84", 
		"LAST");

	web_custom_request("track", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURESVU5NjBHM0x2eiIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjY3NTMxMTE3LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://analytics.google.com/g/collect?v=2&tid=G-WCN3C8KG6R&gtm=45je42l0v887559890za200&_p=1708667528855&_gaz=1&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708667530&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&tfd=6970", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

 


	 
# 690 "Action.c"

	web_custom_request("2fa1b9bd-a044-4d6e-8d05-6aa19ac853e3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/2fa1b9bd-a044-4d6e-8d05-6aa19ac853e3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":2,\"start_time\":\"2024-02-23T11:22:06.000+05:30\",\"end_time\":\"2024-02-23T11:22:13.449+05:30\",\"experiments\":{\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"locale\":\"en-GB"
		"\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"app_display_version\":\"123.0\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20240213221259\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\"},\"metrics\":{\"text\":{\"messaging_system.event_context\":\"{\\\"source\\\":\\\"secondary_button\\\",\\\"page\\\":\\\"spotlight\\\"}\",\"messaging_system.message_id\":\"FOX_DOODLE_SET_DEFAULT_0_undefined\"},\"uuid\":"
		"{\"messaging_system.browser_session_id\":\"a4e8562a-2896-42e4-ad60-87a926fdab13\",\"messaging_system.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"string\":{\"messaging_system.event_source\":\"secondary_button\",\"messaging_system.attribution.dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\"messaging_system.attribution.medium\":\"referral\",\"messaging_system.addon_version\":\"20240213221259\",\"messaging_system.attribution.variation\":\"%2528not%2Bset%2529\",\""
		"messaging_system.event\":\"CLICK_BUTTON\",\"messaging_system.locale\":\"en-GB\",\"messaging_system.attribution.content\":\"%2528not%2Bset%2529\",\"messaging_system.attribution.campaign\":\"%2528not%2Bset%2529\",\"messaging_system.attribution.ua\":\"chrome\",\"messaging_system.attribution.source\":\"www.google.com\",\"messaging_system.event_page\":\"spotlight\",\"messaging_system.attribution.experiment\":\"%2528not%2Bset%2529\"}}}", 
		"LAST");

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_2", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667528855&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708667531&sct=1&seg=0&en=page_view&_fv=1&_ss=1&_ee=1&tfd=7819", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

 


	 
# 745 "Action.c"

 


	web_stop_async("ID=LongPoll_0", 
		"LAST");

	web_url("canonical.html_8", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("track_2", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURESVU5NjBHM0x2eiIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjY3NTMyMTE4LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_submit_data("configs", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("aebf9e19-4df4-40f1-b5b5-664817c0fb60", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/aebf9e19-4df4-40f1-b5b5-664817c0fb60", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3,\"start_time\":\"2024-02-23T11:22:13.000+05:30\",\"end_time\":\"2024-02-23T11:22:14.502+05:30\",\"experiments\":{\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozillaaccounts-toolbar-button-default-visibility-existing-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"spocs-endpoint-rollout-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"device-migration-q4-spotlights-remaining-population\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\""
		"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"picture-in-picture-first-time-use-callout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\""
		"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"os_version\":\"10.0\",\"locale\":\"en-GB\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_display_version\":\"123.0\",\"architecture\":\"x86_64\",\"app_build\":\"20240213221259\"},\"metrics\":{\"string\":{\"messaging_system.ping_type\":\"spotlight\",\"messaging_system.addon_version\":\"20240213221259\",\"messaging_system.locale\":\"en-GB\",\"messaging_system.event\":\"DISMISS\"},\"uuid\":{\""
		"messaging_system.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"messaging_system.browser_session_id\":\"a4e8562a-2896-42e4-ad60-87a926fdab13\"},\"text\":{\"messaging_system.message_id\":\"FOX_DOODLE_SET_DEFAULT\"}}}", 
		"LAST");

	web_url("products.json", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("canonical.html_9", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_2", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_3", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("status.rapidssl.com", 
		"URL=http://status.rapidssl.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\\x99y5\\x16f\\xE8\\xBEc|\"w/\\xB5\\xD7,", 
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=session_token",
		"LB=session_token=",
		"RB=\r\n",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/public*",
		"LAST");

	web_url("public", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("canonical.html_10", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("ocsp.r2m03.amazontrust.com", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		"LAST");

	web_custom_request("ocsp.r2m03.amazontrust.com_2", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		"LAST");

	web_custom_request("ocsp.r2m03.amazontrust.com_3", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		"LAST");

	web_url("configs_2",
		"URL=https://api.razorpay.com/v1/magic/analytics/configs?key_id=rzp_live_UiTUCACnTlsjdB",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token={session_token}",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"LAST");

	web_url("preferences",
		"URL=https://api.razorpay.com/v1/standard_checkout/preferences?session_token={session_token}&currency%5B0%5D=INR&_%5Bpreference_source%5D=checkout_frame_standard_lite&_%5Bbuild%5D=7974256659&_%5Blibrary%5D=checkoutjs&_%5Bplatform%5D=browser&qr_required=true&key_id=rzp_live_UiTUCACnTlsjdB",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token={session_token}",
		"Snapshot=t68.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("gsatlasr3dvtlsca2023q3", 
		"URL=http://ocsp.globalsign.com/ca/gsatlasr3dvtlsca2023q3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE1!7B\"\\x8D7\\xEBK\\x18$\\xE7\\x93\\xE5V", 
		"LAST");

	web_url("canonical.html_11", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03s=E\\xFF=\\xA7RHH\\xC8ET1\\x02\\x8C", 
		"LAST");

	web_custom_request("envelope", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T05:52:19.090Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"0711145c35134bc4a6ae1119051d6690\",\"init\":true,\"started\":\"2024-02-23T05:52:19.088Z\",\"timestamp\":\"2024-02-23T05:52:19.088Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101"
		" Firefox/123.0\"}}", 
		"LAST");

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xA7\\xC4\\xB8\\xB3\\xDC[\\xB5X\\x1E\\xA7\\xD7\\xF1:\\xC5i\\xF5oH\\xD7\\x89\\x04\\x14t\\x85\\x80\\xC0f\\xC7\\xDF7\\xDE\\xCF\\xBD)7\\xAA\\x03\\x1D\\xBE\\xED\\xCD\\x17\\x02\\x10\\x03s=E\\xFF=\\xA7RHH\\xC8ET1\\x02\\x8C", 
		"LAST");

	 

	web_url("account", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_3", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667528855&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708667531&sct=1&seg=0&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&en=user_engagement&_et=9567&tfd=65546", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.0.1708667589.1.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.0.1708667589.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_7", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667589507},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"9169d5dc-a02f-4958-af56-d1965558bf77\",\"run_time_duration\":1358,\"start_time\":4378,\"page_duration"
		"\":61154},\"metadata\":{\"event_created_at_ms\":1708667589507}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A53%3A10.127Z; DOMAIN=www.tastynibbles.in");

	web_url("login", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account/login?return_url=%2Faccount", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_8", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667590078},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667590078}}]}", 
		"LAST");

	web_custom_request("r3.o.lencr.org_9", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xE3j=\\xD2\\xB6\nR/k46\\x80\\xA4di\\x08z", 
		"LAST");

	web_custom_request("track_3", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lREVMMmdaeXdOaGlaIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6IjMzN2U2MmNmLTlhZGQtNDQ4NS04NWI3LTNjNWMzMzdhNjE2MiJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTpjb25maWciLCJ0aW1lc3RhbXAiOjE3MDg2Njc1OTAyNjEsInByb3BlcnRpZXMiOnsiZGF0YSI6eyJtZXJjaGFudF9rZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsInNob3VsZFVzZVNob3BJZCI6ZmFsc2UsImdUYWdJZCI6IiIsImd0YWdMYWJlbCI6IiIsInJhem9ycGF5TWFnaWNCdG5Db25maWciOnt9LCJjaGVja291dE9wdGlvbnMiOnsibmFtZSI6IiJ9LCJjYXJ0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNo"
		"ZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJwcm9kdWN0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJjdXN0b21Dc3MiOiIifX19XX0%3D\"}", 
		"LAST");

	web_custom_request("produce_batch_9", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667590126},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/login\",\"search\":\"?return_url=%2Faccount\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"properties\":{},\"eventId\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\",\"s2sMetadata\":{\"navigationApi\""
		":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d4865ad0-D0DA-4E9D-820A-273829EEA263\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\""
		"page\"},\"metadata\":{\"event_created_at_ms\":1708667590126}}]}", 
		"LAST");

	web_custom_request("produce_batch_10", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667590128},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/login\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667590128,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/login?return_url=%2Faccount\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d4865ad0-D0DA-4E9D-820A-273829EEA263\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\""
		"is_persistent_cookie\":true,\"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4865b35-AF35-4E6E-55B5-637DAF0E2BC9\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667590128}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667590.60.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_2", 
		"URL=https://www.tastynibbles.in/cart?t=1708667590242&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=6f552a80-de8c-414f-bb03-39a5701ea1ff; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_11", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667590128},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667590078}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\"},\"metadata\":{\"event_created_at_ms\":1708667590127}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/login?return_url=%2Faccount\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\""
		"location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667590127}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\""
		"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/login\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667590128}}]}", 
		"LAST");

	web_custom_request("produce", 
		"URL=https://monorail-edge.shopifysvc.com/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"schema_id\":\"online_store_buyer_site_abandonment/1.1\",\"payload\":{\"shop_id\":55925866671,\"url\":\"https://www.tastynibbles.in/\",\"navigation_start\":1708667523967,\"duration\":65539,\"session_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"page_type\":\"index\"},\"metadata\":{\"event_created_at_ms\":1708667589506,\"event_sent_at_ms\":1708667589506}}", 
		"LAST");

	web_custom_request("r3.o.lencr.org_10", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\xE3j=\\xD2\\xB6\nR/k46\\x80\\xA4di\\x08z", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667590.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_12", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667590565},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667590050}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":"
		"\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667590055}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\"},\"metadata\":{\"event_created_at_ms\":1708667590058}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\"},\"metadata\":{\"event_created_at_ms\":1708667590297}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\""
		"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\""
		":\"modern\",\"error_msg\":\"N/A\",\"duration\":237,\"start_time\":1280,\"session_id\":\"e7786b5d-29a3-493c-a2c6-e8fa14a2e847\"},\"metadata\":{\"event_created_at_ms\":1708667590297}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\""
		"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\"},\"metadata\":{\"event_created_at_ms\":1708667590332}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\""
		"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\""
		",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":275,\"start_time\":1279,\"session_id\":\"e7786b5d-29a3-493c-a2c6-e8fa14a2e847\"},\"metadata\":{\"event_created_at_ms\":1708667590333}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4865aa6-5D1F-45FA-036F-5DEE0FFFBC04\"},\"metadata\":{\"event_created_at_ms\":1708667590565}}]}", 
		"LAST");

	web_custom_request("track_4", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lREVMMmdaeXdOaGlaIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6IjMzN2U2MmNmLTlhZGQtNDQ4NS04NWI3LTNjNWMzMzdhNjE2MiJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTptYWdpY19zZGtfaW5qZWN0ZWQiLCJ0aW1lc3RhbXAiOjE3MDg2Njc1OTEyODAsInByb3BlcnRpZXMiOnsicmVhc29uIjoiZG9tIn19XX0%3D\"}", 
		"LAST");

	web_custom_request("produce_batch_13", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667591077},\"events\":[{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\""
		":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":507,\"start_time\":1280,\"session_id\":\"e7786b5d-29a3-493c-a2c6-e8fa14a2e847\"},\"metadata\":{\"event_created_at_ms\":1708667590566}}]}", 
		"LAST");

	web_url("public_2", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_3", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("canonical.html_12", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708667590173,\"server_timing\":\"{\\\"processing\\\":[17,\\\"gc:1\\\"],\\\"db\\\":[8,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/login\\\"],\\\"servedBy\\\":[0,\\\"s8dz\\\"],\\\"requestID\\\":[0,\\\"9a87cabd-7617-443a-b719-51b9ecd4e118\\\"],\\\"cfRequestDuration\\\":"
		"[287.999868,\\\"\\\"]}\",\"session_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":1502,\"visually_ready\":1516,\"first_contentful_paint\":1219,\"navigation_start\":1708667588763,\"redirect_end\":1708667589132,\"fetch_start\":1708667589132,\"domain_lookup_start\":1708667589132,\""
		"domain_lookup_end\":1708667589132,\"connect_start\":1708667589132,\"connect_end\":1708667589132,\"request_start\":1708667589160,\"response_start\":1708667589484,\"response_end\":1708667589484,\"dom_loading\":1708667589489,\"dom_interactive\":1708667590197,\"dom_content_loaded_event_start\":1708667590253,\"dom_content_loaded_event_end\":1708667590255,\"dom_complete\":1708667592296,\"load_event_start\":1708667592296,\"load_event_end\":1708667592319,\"secure_connection_start\":1708667589132,\""
		"encoded_body_size\":90145,\"decoded_body_size\":377161,\"transfer_size\":93353,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":1,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3ld,95,94*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3x0,6a,6a*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/"
		"wbogo.min.js\\\":\\\"3ld,ai,ai*118cm,_,3kah*22\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"310z*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"31xi,30*25\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2ks,4z,4x*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3kt,7x,7w*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3l8,"
		"8p,8o*17mf,_,m90*20\\\"},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3ks,6t,6s*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3ks,7h,7g*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3u7,50,4z*1294,_,456*21\\\"},\\\"themes_support/"
		"shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3kt,c0,c0,aa*1jj,11h,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3u7,3x,3u*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3u6,3x,3b*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ks,7j,7b,5q*1su,od,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3ld*21\\\","
		"\\\"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3110,82*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"31c1,6s*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"31c2,7g*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"311f,8m*21\\\"},\\\".co\\\":{\\\".in/ads/ga-audiences?v=1&t=sr&slf_rd=1&_r=4&tid=G-WCN3C8KG6R&cid=345955748.1708667531&gtm=45je42l0v887559890za200&aip=1&dma=0&gcd=13l3l3l3l1&npa=0&z=2098387104\\\":\\\"11c8,wr,wr,uh,u2,u2,u2,u2"
		",ty*116,eb\\\",\\\"m/pagead/1p-conversion/378882101/?...\\\":\\\"31l1,rf,rf,pr,ot,ot,ot,ot,ot,ot*11r,iq,-k*21\\\"}}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ks,eo,eo,dr,dn,a8,a8,a8,66*1,lv*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3vz,6z*26\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3w5,1a5,1a1*1q9o,_,1cuu*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"3w9,6d,6c*1nxp,"
		"_,193r*24\\\"},\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"11l1\\\"}}\",\"url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708667590178,\"event_sent_at_ms\":1708667592367}}", 
		"LAST");

	web_custom_request("e1.o.lencr.org_7", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03&P\\x84\\xA79rE\\xC7\\xAF\\xD5t\\xE4pb`\\xA5\\xFA", 
		"LAST");

	web_custom_request("r3.o.lencr.org_11", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x8E\\xB4\\xC3\\x84_\\xA7\\xE4!0j\\x1C\\xD8\\xC7\\x17;\\xB3 ", 
		"LAST");

	web_url("canonical.html_13", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("ocsp.r2m01.amazontrust.com", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B\\x83\\x85\\xBC\\xAB\\xB8\\x85\\\\\\x1B\nq\\xA4\rh\\xB0\\xA3", 
		"LAST");

	web_custom_request("ocsp.sectigo.com", 
		"URL=http://ocsp.sectigo.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10c\\x02\\x08\\x9B\\xC5\\x7F\\x1F\\xE8F\\xCA\\x8B\\xBF8\\xE2\\xD01", 
		"LAST");

	web_url("c1a778d0cb1e42f1", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_4", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667590111&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2Faccount%2Flogin&dt=Account%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Flogin%3Freturn_url%3D%252Faccount&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=7080", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_url("register", 
		"URL=https://www.tastynibbles.in/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_5", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667590111&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708667531&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Flogin%3Freturn_url%3D%252Faccount&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=7917&tfd=9991", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667598.52.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667598.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_14", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667598759},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"e7786b5d-29a3-493c-a2c6-e8fa14a2e847\",\"run_time_duration\":701,\""
		"start_time\":1086,\"page_duration\":8894},\"metadata\":{\"event_created_at_ms\":1708667598759}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A53%3A19.355Z; DOMAIN=www.tastynibbles.in");

	web_url("register_2", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_15", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667599319},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667599319}}]}", 
		"LAST");

	web_custom_request("track_5", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVERVZJejZmV2FkWHEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00ND"
		"g1LTg1YjctM2M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2NzU5OTY2MSwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFs"
		"IjpmYWxzZX0sInByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		"LAST");

	web_custom_request("produce_batch_16", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667599354},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/register\",\"search\":\"\",\"title\":\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/register\",\"properties\":{},\"eventId\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\""
		",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d4867d98-3533-4DCF-791A-E895203F921C\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708667599354}}]}", 
		"LAST");

	web_custom_request("produce_batch_17", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667599357},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/register\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667599357,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d4867d98-3533-4DCF-791A-E895203F921C\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\""
		"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4867de4-42C1-4653-C3B4-524EF2AB4865\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667599357}}]}", 
		"LAST");

	web_custom_request("produce_batch_18", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667599359},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667599320}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\","
		"\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\"},\"metadata\":{\"event_created_at_ms\":1708667599355}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\""
		"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/register\\\\\",\\\\\"title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},"
		"\"metadata\":{\"event_created_at_ms\":1708667599355}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/"
		"y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/register\\\\\",\\\\\"page_title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667599357}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667599.51.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_3", 
		"URL=https://www.tastynibbles.in/cart?t=1708667599646&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=36311f4c-9de6-42c9-ae0b-a3972bb107d3; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_19", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667599844},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667599276}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667599277}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type"
		"\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\"},\"metadata\":{\"event_created_at_ms\":1708667599279}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\""
		"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\"},\"metadata\":{\"event_created_at_ms\":1708667599456}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\""
		"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\""
		"error_msg\":\"N/A\",\"duration\":177,\"start_time\":921,\"session_id\":\"dff881dd-7c89-4cae-8b2d-b39c60021d00\"},\"metadata\":{\"event_created_at_ms\":1708667599457}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\""
		"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\"},\"metadata\":{\"event_created_at_ms\":1708667599507}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\""
		":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":226,\"start_time\":924,\"session_id\":\""
		"dff881dd-7c89-4cae-8b2d-b39c60021d00\"},\"metadata\":{\"event_created_at_ms\":1708667599507}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\""
		"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4867d47-E377-4E73-B121-3CD0E0E096CD\"},\"metadata\":{\"event_created_at_ms\":1708667599511}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\""
		"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":229,\"start_time\":924,\"session_id\":\"dff881dd-7c89-4cae-8b2d-b39c60021d00\"},\"metadata\":{\"event_created_at_ms\":1708667599511}}]}", 
		"LAST");

	web_custom_request("track_6", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVERVZJejZmV2FkWHEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00ND"
		"g1LTg1YjctM2M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2NzYwMDY3MCwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		"LAST");

	web_url("public_3", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_4", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("canonical.html_14", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667600.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708667599437,\"server_timing\":\"{\\\"processing\\\":[13,\\\"\\\"],\\\"db\\\":[6,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/register\\\"],\\\"servedBy\\\":[0,\\\"c5n9\\\"],\\\"requestID\\\":[0,\\\"29b742c9-34ea-4eea-8edc-859b827acdce\\\"],\\\"cfRequestDuration\\\":"
		"[296.999931,\\\"\\\"]}\",\"session_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":1341,\"visually_ready\":1341,\"first_contentful_paint\":890,\"navigation_start\":1708667598357,\"fetch_start\":1708667598361,\"domain_lookup_start\":1708667598361,\"domain_lookup_end\":1708667598361"
		",\"connect_start\":1708667598361,\"connect_end\":1708667598361,\"request_start\":1708667598393,\"response_start\":1708667598752,\"response_end\":1708667598752,\"dom_loading\":1708667598777,\"dom_interactive\":1708667599619,\"dom_content_loaded_event_start\":1708667599665,\"dom_content_loaded_event_end\":1708667599667,\"dom_complete\":1708667601507,\"load_event_start\":1708667601507,\"load_event_end\":1708667601516,\"secure_connection_start\":1708667598361,\"encoded_body_size\":89625,\""
		"decoded_body_size\":375012,\"transfer_size\":92450,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3ic,4h,4h*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3nq,4p,4p*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"3if,59,58*118cm,"
		"_,3kah*22\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3rh*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"31s8,1z*25\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2bv,56,56*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3c7,83,83*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3ia,3u,3u*17mf,_,m90*20\\\"},\\\"ifycloud/"
		"shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3bw,74,74*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3c7,7g,7f*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3mg,4a,49*1294,_,456*21\\\"},\\\"themes_support/"
		"shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3c7,95,94*1jj,_,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3mf,3b,3b*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3me,2o,2n*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3bv,8q,8n,6e*1su,ny,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3ig*21\\\",\\\""
		"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3rl,9n*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"314i,6q*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"314j,7j*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3rn,ap*21\\\"},\\\".com/pagead/1p-conversion/378882101/?...\\\":\\\"31dh,p7,p6,n1,fo,fo,fo,fo,fo,fm*11r,iq,-k*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3bv"
		",6k,6i*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3r3,5y*26\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3r5,zw,zt*1q9o,_,1cuu*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"3r5,7b,7b*1nxp,_,193r*24\\\"},\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"11dh\\\"}}\",\"url\":\"https://www.tastynibbles.in/account/register\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\""
		"metadata\":{\"event_created_at_ms\":1708667599425,\"event_sent_at_ms\":1708667601533}}", 
		"LAST");

	web_url("c1a778d0cb1e42f1_2", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_6", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667599351&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2Faccount%2Fregister&dt=Create%20Account%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=6797", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	lr_think_time(8);

	web_custom_request("378882101", 
		"URL=https://google.com/pagead/form-data/378882101?gtm=45be42l0za200&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1028054568.1708667531", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("378882101_2", 
		"URL=https://google.com/ccm/form-data/378882101?gtm=45be42l0za200&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=1028054568.1708667531&ec_mode=a&em=tv.1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_gcl_au=1.1.1028054568.1708667531.1972507588.1708667647.1708667646; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_storefront_u=eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaDdCem9KZEhsd1pWc0dTU0lVWTNWemRHOXRaWEpmWTNKbFlYUmxCam9HUlZRNkVHaGhjSEJsYm1Wa1gyRjBaaGN4TnpBNE5qWTNOalE0TGpjMk1EazBNVGM9IiwiZXhwIjoiMjAyNC0wMi0yM1QwNTo1NTowOC43NjBaIiwicHVyIjoiY29va2llLl9zdG9yZWZyb250X3UifX0%3D--e0a8753ef44807b2db2ca2197900c9dbe670a720; DOMAIN=www.tastynibbles.in");

	web_submit_data("account_2", 
		"Action=https://www.tastynibbles.in/account", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=form_type", "Value=create_customer", "ENDITEM", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=customer[first_name]", "Value={f_name}", "ENDITEM", 
		"Name=customer[last_name]", "Value={l_name}", "ENDITEM", 
		"Name=customer[email]", "Value={email}", "ENDITEM", 
		"Name=customer[password]", "Value={pwd}", "ENDITEM", 
		"LAST");

	web_custom_request("collect_7", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667599351&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708667531&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Create%20Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=49488&tfd=51285", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667649.1.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667649.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_20", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667649631},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"dff881dd-7c89-4cae-8b2d-b39c60021d00\",\"run_time_duration\":347,\"start_time\":806,\""
		"page_duration\":50466},\"metadata\":{\"event_created_at_ms\":1708667649631}}]}", 
		"LAST");

	web_custom_request("r3.o.lencr.org_12", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x8F\\x04\\xE3J\\xA7`\\x00\\x0C\\xA8\\x9C\\x86\\xA0\\xB0\\x8Bf\\xF1\\xF8", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A54%3A10.410Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_21", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667650398},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667650398}}]}", 
		"LAST");

	web_custom_request("produce_batch_22", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667650410},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account/register\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\","
		"\"navigationType\":\"navigate\"},\"pageType\":\"home\",\"customerId\":7180694192303,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d4875061-3793-476A-5578-DD39EDD4C890\",\"microSessionCount\":1,\"isPersistentCookie\":true,\""
		"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708667650410}}]}", 
		"LAST");

	web_custom_request("produce_batch_23", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667650418},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\",\"referrer\":\"https://www.tastynibbles.in/account/register\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667650417,\"event_source_url\":\"https://"
		"www.tastynibbles.in/\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d4875061-3793-476A-5578-DD39EDD4C890\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180694192303,\"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4875089-6B30-4F4D-CF83-BF550F3AE5EC\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667650418}}]}", 
		"LAST");

	web_custom_request("produce_batch_24", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667650419},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667650398}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\"},\"metadata\":{\"event_created_at_ms\":1708667650410}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667650410}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667650416}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667651.60.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_25", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667650956},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667650357}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667650358}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\"},\"metadata\":{\"event_created_at_ms\":1708667650360}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\"},\"metadata\":{\"event_created_at_ms\":1708667650681}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\""
		"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":321,\"start_time\":3805,\"session_id\":"
		"\"c246f9cc-c8e1-4d04-a18e-dde64df7a278\"},\"metadata\":{\"event_created_at_ms\":1708667650681}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\""
		"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4875013-B390-487C-A377-2B20DC3FF94D\"},\"metadata\":{\"event_created_at_ms\":1708667650727}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\""
		"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":368,\"start_time\":3805,\"session_id\":\"c246f9cc-c8e1-4d04-a18e-dde64df7a278\"},\"metadata\":{\"event_created_at_ms\":1708667650728}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d4875013-B390-487C-A377-2B20DC3FF94D\"},\"metadata\":{\"event_created_at_ms\":1708667650796}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1"
		"\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":435,\"start_time\":3805,\"session_id\":\"c246f9cc-c8e1-4d04-a18e-dde64df7a278\"},\"metadata\":{\"event_created_at_ms\":1708667650796}}]}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667651.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_4", 
		"URL=https://www.tastynibbles.in/cart?t=1708667651291&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("track_7", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURGUGdFTGx1ZUZLMyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjY3NjUxMzA4LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_custom_request("track_8", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURGUGdFTGx1ZUZLMyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjY3NjUyMzE5LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_url("public_4", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_5", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180694192303,\"name\":\"Maria Augustine\",\"email\":\"maria@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("products.json_4", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_5", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_6", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_8", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667650409&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&en=page_view&_ee=1&tfd=9894", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	 

	lr_think_time(43);

	web_url("account_3", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_9", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667650409&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708667531&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&en=user_engagement&_et=22262&tfd=54268", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667700.11.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667700.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_26", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667700806},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"c246f9cc-c8e1-4d04-a18e-dde64df7a278\",\"run_time_duration\":773,\"start_time\":3469,\"page_duration\""
		":50782},\"metadata\":{\"event_created_at_ms\":1708667700806}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A55%3A01.491Z; DOMAIN=www.tastynibbles.in");

	web_url("account_4", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("r3.o.lencr.org_13", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\x8F\\x04\\xE3J\\xA7`\\x00\\x0C\\xA8\\x9C\\x86\\xA0\\xB0\\x8Bf\\xF1\\xF8", 
		"LAST");

	web_custom_request("produce_batch_27", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667701487},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667701487}}]}", 
		"LAST");

	web_custom_request("track_9", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVER0l1T2xIYUN4NEsiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00NDg1LTg1YjctM2"
		"M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2NzcwMTkwNSwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0s"
		"InByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		"LAST");

	web_custom_request("produce_batch_28", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667701491},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account\",\"search\":\"\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account\",\"properties\":{},\"eventId\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\""
		"navigate\"},\"customerId\":7180694192303,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d4880dd4-AB51-4399-49B1-AF20B827ABF0\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708667701491}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667702.9.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_29", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667701492},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667701492,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d4880dd4-AB51-4399-49B1-AF20B827ABF0\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180694192303,\"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4880dde-94B4-4588-2409-591C1B799780\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667701492}}]}", 
		"LAST");

	web_custom_request("produce_batch_30", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667701493},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667701487}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload"
		"\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\"},\"metadata\":{\"event_created_at_ms\":1708667701491}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\""
		"event_created_at_ms\":1708667701491}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\""
		"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667701492}}]}", 
		"LAST");

	web_url("cart_5", 
		"URL=https://www.tastynibbles.in/cart?t=1708667701883&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=f8c93ffb-5a02-4db4-b1c7-04c242a9421e; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_31", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667702015},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667701447}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in"
		"/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667701448}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked"
		"\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\"},\"metadata\":{\"event_created_at_ms\":1708667701449}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\""
		"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\"},\"metadata\":{\"event_created_at_ms\":1708667701683}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\""
		":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":235,\"start_time\":1215,"
		"\"session_id\":\"67b46f72-5503-47a2-86d6-90be711c83f4\"},\"metadata\":{\"event_created_at_ms\":1708667701684}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\"},\"metadata\":{\"event_created_at_ms\":1708667701705}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":256,\"start_time\":1216,\"session_id\":\"67b46f72-5503-47a2-86d6-90be711c83f4\"},\"metadata\":{\"event_created_at_ms\":1708667701706"
		"}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\""
		"standard\",\"event_id\":\"sh-d4880d87-82D3-4E3C-E283-741DF94E0772\"},\"metadata\":{\"event_created_at_ms\":1708667701789}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\""
		"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":340,\"start_time\":1216,\"session_id\":\"67b46f72-5503-47a2-86d6-90be711c83f4\"},\"metadata\":{\"event_created_at_ms\":1708667701790}}]}", 
		"LAST");

	web_custom_request("track_10", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVER0l1T2xIYUN4NEsiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00NDg1LTg1YjctM2"
		"M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2NzcwMjkxNywicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		"LAST");

	web_url("public_5", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_6", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180694192303,\"name\":\"Maria Augustine\",\"email\":\"maria@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667702.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("account_5", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_10", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667701489&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&dt=Account%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&_s=1&tfd=3847", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&dp=%2Faccount\r\nen=user_engagement&_et=1634", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667704.7.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667704.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_32", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667704073},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"67b46f72-5503-47a2-86d6-90be711c83f4\",\"run_time_duration\":485,\"start_time\":1071,\""
		"page_duration\":2769},\"metadata\":{\"event_created_at_ms\":1708667704073}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A55%3A04.725Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_33", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667704705},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667704705}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667705.6.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_34", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667704723},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account\",\"path\":\"/account\",\"search\":\"\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account\",\"properties\":{},\"eventId\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType"
		"\":\"navigate\"},\"customerId\":7180694192303,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d48819ed-6602-446A-02E2-CD346719A5A7\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708667704723}}]}", 
		"LAST");

	web_custom_request("produce_batch_35", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667704726},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\",\"referrer\":\"https://www.tastynibbles.in/account\",\"canonical_url\":\"https://www.tastynibbles.in/account\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667704725,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d48819ed-6602-446A-02E2-CD346719A5A7\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180694192303,\"deprecated_visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4881a15-3DD5-4A8F-616B-3F981787BDA9\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667704726}}]}", 
		"LAST");

	web_custom_request("produce_batch_36", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708667704726},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667704706}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload"
		"\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\"},\"metadata\":{\"event_created_at_ms\":1708667704724}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\""
		"event_created_at_ms\":1708667704725}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\""
		"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667704725}}]}", 
		"LAST");

	web_custom_request("track_11", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVER01hbURpWWI0MWEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00NDg1LTg1YjctM2"
		"M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2NzcwNTI4MCwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0s"
		"InByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667705.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_6", 
		"URL=https://www.tastynibbles.in/cart?t=1708667705265&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=560aec2c-7185-46a7-9cb1-72bc3d8fd0d5; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_37", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667705188},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667704674}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in"
		"/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667704675}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked"
		"\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\"},\"metadata\":{\"event_created_at_ms\":1708667704676}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\""
		"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\"},\"metadata\":{\"event_created_at_ms\":1708667704869}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":192,\"start_time\":1103,\"session_id\":\"b801a662-5b8f-42cc-9f4f-953297cc2dc5\"},\"metadata\":"
		"{\"event_created_at_ms\":1708667704869}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\""
		"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\"},\"metadata\":{\"event_created_at_ms\":1708667704906}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\","
		"\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":230,\"start_time\":1103,\"session_id\":\"b801a662-5b8f-42cc-9f4f-953297cc2dc5\"},\"metadata\":{\"event_created_at_ms\""
		":1708667704906}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\""
		"event_type\":\"standard\",\"event_id\":\"sh-d48819b1-301A-4741-0864-66A8A4F3910E\"},\"metadata\":{\"event_created_at_ms\":1708667704910}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\""
		"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":234,\"start_time\":1104,\"session_id\":\"b801a662-5b8f-42cc-9f4f-953297cc2dc5\"},\"metadata\":{\"event_created_at_ms\":1708667704910}}]}", 
		"LAST");

	web_custom_request("track_12", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVER01hbURpWWI0MWEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiMzM3ZTYyY2YtOWFkZC00NDg1LTg1YjctM2"
		"M1YzMzN2E2MTYyIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2NzcwNjI4OCwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		"LAST");

	web_url("public_6", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_7", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180694192303,\"name\":\"Maria Augustine\",\"email\":\"maria@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("collect_11", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667704721&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2Faccount&dt=Account%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&en=page_view&_ee=1&tfd=6822", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	 

	 

	lr_think_time(69);

	web_url("suggest.json", 
		"URL=https://www.tastynibbles.in/search/suggest.json?q=pickl&resources[type]=product%2Carticle&resources[limit]=4&resources[options][unavailable_products]=last&resources[options][fields]=title%2Cproduct_type%2Cvariants.title%2Cvendor", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_shopify_essential=:AY3UhlGIAAH_Gg5GBcg1-xg-OuvG3vB8abk206G1A_uqVD9I9Xv2c-1_lE8PBkrMF9ff0lrLlDE6PpLIbIddeEI7M4Uwe_XWqqcjAJKt-1wh:; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_secure_session_id=5214f80394d71612dc7ce836146c9350; DOMAIN=www.tastynibbles.in");

	web_url("search", 
		"URL=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=pickle*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=3e636728-e77f-4623-af6d-dc60de8e40cc; DOMAIN=www.tastynibbles.in");

	web_url("search_2", 
		"URL=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=pickle*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_3", 
		"URL=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=pickle*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("secure_customer_sig=; DOMAIN=www.tastynibbles.in");

	web_url("logout", 
		"URL=https://www.tastynibbles.in/account/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_12", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667704721&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708667531&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&dt=Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=53652&tfd=78389", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667781.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667781.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_38", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667781950},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"b801a662-5b8f-42cc-9f4f-953297cc2dc5\",\"run_time_duration\":354,\"start_time\":984,\""
		"page_duration\":77392},\"metadata\":{\"event_created_at_ms\":1708667781950}}]}", 
		"LAST");

	web_custom_request("track_13", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURIanRVczA4aEwzbCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjY3NzgzNDI4LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_custom_request("track_14", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZURIanRVczA4aEwzbCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzMzdlNjJjZi05YWRkLTQ0ODUtODViNy0zYzVjMzM3YT"
		"YxNjIifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjY3Nzg0NDgxLCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T05%3A56%3A22.738Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_39", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667782735},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\""
		"navigationType\":\"navigate\"},\"pageType\":\"home\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visitToken\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"microSessionId\":\"d4897052-016B-4202-D59E-219B753BC053\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\""
		"metadata\":{\"event_created_at_ms\":1708667782735}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708667530.1.1.1708667783.58.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_7", 
		"URL=https://www.tastynibbles.in/cart?t=1708667783411&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("public_7", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=31f2b036-c8dd-454e-8860-21dde353b4bf; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_40", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667782706},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708667782706}}]}", 
		"LAST");

	web_custom_request("produce_batch_41", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667783170},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667782641}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708667782643}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\"},\"metadata\":{\"event_created_at_ms\":1708667782645}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\""
		"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\"},\"metadata\":{\"event_created_at_ms\":1708667782953}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id"
		"\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":308,\"start_time\":10723,\"session_id\":\"aefc80f0-ae43-436f-a152-b0a176c90fd5\"},\"metadata\":{\"event_created_at_ms\":1708667782953}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/"
		"3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\"},\"metadata\":{\"event_created_at_ms\":1708667782971}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\""
		"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":326,\"start_time\":10723,\"session_id\":\"aefc80f0-ae43-436f-a152-b0a176c90fd5\"},\"metadata\":{\"event_created_at_ms\":1708667782971}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\"},\"metadata\":{\"event_created_at_ms\""
		":1708667783002}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\""
		"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":357,\"start_time\":10722,\"session_id\":\"aefc80f0-ae43-436f-a152-b0a176c90fd5\"},\"metadata\":{\"event_created_at_ms\":1708667783002}}]}", 
		"LAST");

	web_custom_request("produce_batch_42", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667782741},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\",\"referrer\":\"https://www.tastynibbles.in/account\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708667782740,\"event_source_url\":\"https://"
		"www.tastynibbles.in/\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"page_id\":\"d4897052-016B-4202-D59E-219B753BC053\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token"
		"\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"session_id\":\"sh-d4897097-6FD1-4CB9-DAC0-378C12E3CF0F\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708667782741}}]}", 
		"LAST");

	web_custom_request("produce_batch_43", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708667782742},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708667782707}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4896fd4-9812-406D-A4B4-36D1E0DD6644\"},\"metadata\":{\"event_created_at_ms\":1708667782738}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667782738}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"8b6f147f-39cc-46df-83e4-6a0f594526ae\",\"visit_token\":\"337e62cf-9add-4485-85b7-3c5c337a6162\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708667782740}}]}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708667531.1.1.1708667783.0.0.0; DOMAIN=www.tastynibbles.in");

	web_submit_data("configs_8", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("products.json_7", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_8", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_9", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("collect_13", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708667782709&gcd=13l3l3l3l1&npa=0&dma=0&cid=345955748.1708667531&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708667531&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&en=page_view&_ee=1&tfd=16579", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	return 0;
}
# 5 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\loadrunner\\tasty_demo\\tastyniples\\\\combined_TastyNiples.c" 2

