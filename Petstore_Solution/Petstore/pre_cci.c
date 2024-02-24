# 1 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c"
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







 
 



















# 1 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

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



 
 



# 3 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\x89\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"19045\"/>\n      <arg nm=\"vercsdbld\" val=\"3324\"/>\n      <arg nm=\"verqfe\" val=\"3324\"/>\n      <arg nm=\"csdbld\" val=\"3324\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"113\"/>\n      <arg nm=\"sku\" val=\"48\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"12286\"/>\n      <arg nm=\"svolsz\" val=\"149\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"191206\"/>\n      <arg nm=\"bldtm\" val=\"1406\"/>\n      <arg nm=\"bldbrch\" val=\"vb_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.19041.3324.amd64fre.vb_release.191206-1406\"/"
		">\n      <arg nm=\"buildflightid\" val=\"\"/>\n      <arg nm=\"expid\" val=\"\"/>\n      <arg nm=\"edition\" val=\"Professional\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"1\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"VMware, Inc.\"/>\n      <arg nm=\"syspro\" val=\"VMware7,1\"/>\n      <arg nm=\"bv\" val=\"VMW71.00V.16707776.B64.2008070230\"/>\n      <arg nm=\"ram\" val=\"12288\"/>\n      <arg nm=\""
		"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2095\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"Intel(R) Xeon(R) Gold 6230 CPU @ 2.10GHz\"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"\"/>\n      <arg nm=\"chid\" val=\"{e66fedaa-d317-5223-84c7-2eb45f71c90f}\"/>\n      <arg nm=\"sdksz\" val=\"350\"/>\n     </hw>\n     <ctrl>\n      <arg nm=\"tm\" val=\""
		"133531369196630880\"/>\n      <arg nm=\"mid\" val=\"C2D308F8-25AB-49B9-9B4A-F8F443F15738\"/>\n      <arg nm=\"sample\" val=\"42234205\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Optional\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app=\"msedge.exe\">\n    "
		" <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"7bc1c1bf-6e47-48a2-a6bb-4def5358d8c7\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     <arg nm=\""
		"procmeta.MetricsClientId\" val=\"ef638bb3-0e27-43db-b180-ab00c9ce58ac\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"-6926658363340494177\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"23\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;o+KrfxQXr9A14OgD0MkuJKKm+kWkVXSy3eC35+FjjT0=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"sWfnq5vW+vjFk8xwNytv38k3w835K5faxwLKNDl6tNU=\"/>\n     <arg nm=\""
		"procmeta.VariationsSeedETag\" val=\"&quot;vgXRbZIjjjLB9M7nPWRdxgE9Varq4nlFHZDq5ec2ZcI=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7"
		"\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"0000070c-0002-0022-a6cc-5aa21266da01\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.19045&devicefamily=desktop&installdate=1666087002&clientversion=121.0.2277.128&experimentationmode=2&scpguard=1&scpfull=0&scpver=15", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=121.0.2277.128&lang=en-US&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report_2", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":129,\"body\":{\"elapsed_time\":30065,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/"
		"121.0.0.0\"}]", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-PBGW9BF7P6&gtm=45je42l0v877866951za200&_p=1708663350769&gcd=13l3l3l3l1&npa=0&dma=0&cid=518544715.1708663351&ul=en-us&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CMicrosoft%2520Edge%3B121.0.2277.128%7CChromium%3B121.0.6167.184&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&pscdl=noapi&_s=1&sid=1708663351&sct=1&seg=0&dl=https%3A%2F%2Fjpetstore.aspectran.com%2Fcatalog%2F&dt=JPetStore%20Demo&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&tfd="
		"32952", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://jpetstore.aspectran.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	return 0;
}
# 4 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

# 1 "Action.c" 1
Action()
{

	 

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:Wu5SGMGI-7Y0bw18i7mNpZhfbIvNy3qhjHZOK1Lhs1k&cup2hreq=239c3fc009669e8af997c189154e427202204825ee27f79f860df8d9ce6f0159", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.99,\"AppVersion\":\""
		"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.61\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.61\",\"AppMajorVersion\":\"121\",\""
		"AppRollout\":0.61,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":"
		"{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.68,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\""
		"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.43,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.88,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7B7D2723762BB51B662A5A8B41C4181069DEBE6A885689017238BE129698E7FE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.91,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"10.34.0.52\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.33\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.E257400C1E8A114B7B2F40C35A309A616323EFBA99442BBB0E1554F231E38809\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.33\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.33,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\""
		"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.51,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\""
		"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.19,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.ACAF273151A17537328DD498705F2F589745E014A1BBA4FC2B3FA2729CF4A5F6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.94,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"11.0.0.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.69,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\""
		"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.CB469EE19BA37189AA568219B28E2812DCF51B7A2251F37A72514C4A0E68F658\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.0.0.15\"},{\""
		"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.89\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.89,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.32\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82EE73DBF6DD4F13789BDF673E96FAB44512C2FBBF90B6FF593084BB08B33902\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.32\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.32,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\""
		"updatecheck\":{},\"version\":\"4.0.2.40\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ADB24E09EADF2056B0830DC7F3AE233637081DF28DB8194ED2761E426443BAF9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.53,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.18\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ABA885C2C3540EAF3B054FC686F715C10FE210C9C83F9275478F574C98D35A6B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.18\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.18,\"AppVersion\":\"121.0.2277.128\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.6355.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"121\","
		"\"AppRollout\":0.63,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.14\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.14,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.20240222.1.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.E7727C48F2FC3649530D39F110AD37F750538845D0E271C1B26CFE6B3E6A26E3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.48,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.0.9\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.29\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.29\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.29,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.25,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.40\",\"enabled\":true,\"installdate\":-1,\"lang"
		"\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3F08849EBD098437F635842BE828DA387FE405E2F9FB7D4957A3022D6B46F4DE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.40\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.4,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"120.17243.17238.8\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.15\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.15\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.15,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2023.12.20.0\"}],\"arch\":\""
		"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\":\"3.1\",\"requestid\":\"{9ed30c40-0722-46a5-bfce-60026b8e663f}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updater\":{\""
		"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.185.17\"},\"updaterversion\":\"121.0.2277.128\"}}", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.autofillFull.en-us&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("selection", 
		"URL=https://arc.msn.com/v4/api/selection?placement=88000360&nct=1&fmt=json&ISU=0&AREF=0&ADEFAB=13&OPSYS=WIN10&locale=en-US&country=IN&edgeid=-6926658363340494177&ACHANNEL=4&ABUILD=121.0.6167.184&poptin=1&devosver=10.0.19045.3324&clr=esdk&UITHEME=light&EPCON=0&AMAJOR=121&AMINOR=0&ABLD=6167&APATCH=184", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"76529a6a-687b-45c8-ad4d-9b482924be8b\",\"synchronous\":false}", 
		"LAST");

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"event\":[{\"download_time_ms\":4063,\"downloaded\":39809,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"309.55134.1.0\",\"previousversion\":\"1.20240222.1.0\",\"total\":39809,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"bece59f0-b3fa-4326-87e5-d8329f082ef5?P1=1709240426&P2=404&P3=2&P4=RuVs6WPatCvvrp9ZFv234fApEbGYnUZxM2AGTlTZmSGSjYJSKDd8f71%2fdZNmA4B3%2fVlza1%2bC15KWslC8iX1swA%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":146,\"nextfp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\",\"nextversion\":\"309.55134.1.0\",\"previousfp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\",\"previousversion\":\"1.20240222.1.0\"}],\"installdate\":-1,\"lang\":\""
		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\"}]},\"version\":\"309.55134.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\""
		"protocol\":\"3.1\",\"requestid\":\"{4dd744d0-d8ae-4087-b51c-df0090ee4430}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updaterversion\":\"121.0.2277.128\"}}", 
		"LAST");

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signon\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"f92e2d1d-dc2d-483d-8e65-235fea3750ac\",\"synchronous\":false}", 
		"LAST");

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.15\",\"enabled\":true,\"event\":[{\"download_time_ms\":4019,\"downloaded\":4975,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.1.3.0\",\"previousversion\":\"2023.12.20.0\",\"total\":4975,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"22bd2c3f-162f-4ed8-934e-97de224b1577?P1=1709240427&P2=404&P3=2&P4=kaV%2fCOHyVujRUrNa1sRzn1NxKbhPTUCtRjHkK8u3uZSMIcPJl8%2fkW9VlD9U7spMLsI8L%2fehOfZj90u%2fldQY0xQ%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":159,\"nextfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"nextversion\":\"2024.1.3.0\",\"previousfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"previousversion\":\"2023.12.20.0\"}],\"installdate\":-1,\"lang\":\""
		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"version\":\"2024.1.3.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\""
		":\"3.1\",\"requestid\":\"{5c535711-e90e-4e7e-bcec-88567671137e}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updaterversion\":\"121.0.2277.128\"}}", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(11);

	web_custom_request("report_3", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report_4", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":60056,\"body\":{\"elapsed_time\":30065,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
		"LAST");

	web_custom_request("report_5", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report_6", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":59411,\"body\":{\"elapsed_time\":787,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":0.5,\"server_ip\":\"131.253.33.203\",\"status_code\":0,\"type\":\"tls.cert.name_invalid\"},\"type\":\"network-error\",\"url\":\"https://ntp.msn.com/edge/ntp?locale=en-US&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/"
		"121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":58113,\"body\":{\"elapsed_time\":266,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"http/1.1\",\"referrer\":\"https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true&enableEmptySectionRoute=true&enableFallbackVerticalsFeed=true&networkTimeoutSeconds=5\",\"sampling_fraction\":0.5,\"server_ip\":\"131.253.33.203\",\"status_code\":0,\"type\":\""
		"tls.cert.name_invalid\"},\"type\":\"network-error\",\"url\":\"https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true&enableEmptySectionRoute=true&enableFallbackVerticalsFeed=true&networkTimeoutSeconds=5\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/catalog/searchProducts?keyword=Fish\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"172.67.142.63\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"1d8bc3a9-026e-4359-ba07-767552f5fa7c\",\"synchronous\":false}", 
		"LAST");

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/searchProducts?keyword=Fish\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"135e0023-aa65-4d7d-9cd0-930deedc1135\",\"synchronous\":false}", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("find-assets_2", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.proactiveProduct.en-us&version=5.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("ANON=; DOMAIN=www.bing.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=3&ihpd=0&ispd=1&rc=9&rb=0&gb=0&rg=200&pc=6&mtu=0&rbb=0&g=0&cid=&clo=0&v=1&l=2024-02-21T08:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2024-02-22T07:53:48.7006699+00:00&rwred=0&wls=&wlb=&lka=0&lkt=0&TH=&ard=0001-01-01T00:00:00.0000000&rwdbt=0001-01-01T00:00:00.0000000&rwflt=0001-01-01T00:00:00.0000000&wle=&ccp=&aad=0; DOMAIN=www.bing.com");

	web_custom_request("telemetry", 
		"URL=https://www.bing.com/api/shopping/v1/telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ClientContext\":{\"AppInfoClientName\":\"Edge\",\"BuildVersion\":\"121.0.2277.128\",\"EnabledServiceFlights\":\"\",\"JSVersion\":\"\"},\"EventTime\":1.708663423808e+12,\"EventType\":\"EdgeTrigger\",\"ImpressionId\":\"\",\"JsonData\":\"{\\\"EdgeTrigger\\\":\\\"msEdgeShoppingPdpReached\\\"}\",\"LogLevel\":\"Information\",\"Message\":\"\"}", 
		"LAST");

	web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=9A9BEDA6F8ED193BD5F4CF15F865B491175D3D8F&mkt=en-us&uapimkt=en-us&features=enuapimkt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":0,\"IsAADSignedIn\":false,\"IsEdgeProfileRebatesUser\":false,\"IsPersonalizationDataConsentEnabled\":false,\"IsRebatesEnabled\":false,\"IsRebatesUser\":false,\"IsSSOEnabled\":false,\"clientContext\":{\"EnabledServiceFeaturesv2\":{},\"EnabledServiceFlights\":\"\",\"PaRequestFeatureMask\":3,\"appname\":\"Edge\",\"buildversion\":\"121.0.2277.128\",\"dynamic_picl_model_id\":\"extraction.proactiveProduct.en-us\",\"enabledfeatures\":[{\"name\":\"msShoppingExp1\",\"params\":[]},{\""
		"name\":\"msShoppingExp7\",\"params\":[{\"key\":\"msEdgeShoppingAutoShowScenariosFirstMask\",\"value\":\"190624\"},{\"key\":\"msEdgeShoppingAutoShowScenariosSecondMask\",\"value\":\"84541440\"},{\"key\":\"variant\",\"value\":\"ControlUserPref\"}]},{\"name\":\"msShoppingExp22\",\"params\":[]},{\"name\":\"msShoppingExp63\",\"params\":[]},{\"name\":\"msShoppingExp67\",\"params\":[]},{\"name\":\"msShoppingExp69\",\"params\":[]},{\"name\":\"msShoppingUapiExp1\",\"params\":[]},{\"name\":\""
		"msShoppingUapiExp3\",\"params\":[]},{\"name\":\"msShoppingUapiExp35\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceComparisonBackfillFreeOffers\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceComparisonSponsoredTreatment\",\"params\":[]},{\"name\":\"msPriceComparisonSendProductOGMetadataToUAPI\",\"params\":[]}],\"entity_extraction_engine\":\"PICL\",\"error\":\"ENTITY_NOT_PRODUCT\",\"extraction_context\":\"PRODUCT_PICL_FAILED\",\"impressionId\":\"\",\"isShoppingPersonalizationEnabled\":true,\""
		"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.19045\",\"picl_model_version\":\"5.12.0\",\"validation_data\":{}},\"item\":{\"page_title\":\"JPetStore Demo\",\"seller\":{\"domain\":\"jpetstore.aspectran.com\"},\"url\":\"jpetstore.aspectran.com/catalog/products/FI-SW-01\"},\"pageVisitId\":\"18537def-9238-420a-a82b-0695a262d7b5\",\"retailerSessionId\":\"3d47514c-ce19-4efc-9e48-f0d9aa3f7408\",\"sessionId\":\"f4c65133-b3d9-4e70-8a7f-fb36871c0347\",\"sourceTypes\":[\"itemizedCashBack\"]}", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/cart/addItemToCart?itemId=EST-1\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"79ae780d-e147-43e7-9556-fd0a04b7efde\",\"synchronous\":false}", 
		"LAST");

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/cart/viewCart\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"150617a7-aa04-4511-8fc7-aea08a5b77b5\",\"synchronous\":false}", 
		"LAST");

	return 0;
}
# 5 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	 

	lr_think_time(22);

	web_custom_request("3_7", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signoff\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/cart/viewCart\",\"ip\":\"172.67.142.63\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"e1c8a586-4dd3-4b45-9578-5294fb944d01\",\"synchronous\":false}", 
		"LAST");

	return 0;
}
# 6 "d:\\loadrunner\\petstore_solution\\petstore\\\\combined_Petstore.c" 2

