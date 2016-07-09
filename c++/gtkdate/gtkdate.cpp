#include <glib.h>

int
main( int    argc,
     char **argv )
{
   GTimeVal  time;
   GDate    *date_heap;
   GDate     date_stack;
   gchar     tmp_buffer[256];

   /* Get current time (measured as offset from Epoch) */
   g_get_current_time( &time );
   g_print( "Offset from Epoch: %ld seconds, %ld microseconds\n",
          time.tv_sec, time.tv_usec );

   /* Convert offset to real date */
   date_heap = g_date_new();
   g_date_set_time_val( date_heap, &time );
   g_date_strftime( tmp_buffer, 256, "%x", date_heap );
   g_print( "Current date (heap):  %s\n", tmp_buffer );
   g_date_free( date_heap );

   /* Exactly the same as above, but structures are allocated on a stack */
   g_date_clear( &date_stack, 1 );
   g_date_set_time_val( &date_stack, &time );
   g_date_strftime( tmp_buffer, 256, "%x", &date_stack );
   g_print( "Current date : %s\n", tmp_buffer );

   return( 0 );
}