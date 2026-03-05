#include &lt;stdio.h&gt;

int main() {
int checked=0;
int status;
for (int i=1;i&lt;=25;i++){
printf(&quot;Enter the check in status (1 for checked in and 0 for absent) : &quot;);
scanf(&quot;%d&quot;,&amp;status);
if (status==1){
checked++;
}

}printf(&quot;The total number of members who checked in are : %d&quot;,checked);

return 0;
}
