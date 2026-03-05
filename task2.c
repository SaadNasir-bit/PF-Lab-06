#include <stdio.h>;

int main() {
int dataleft=500;
int used;
printf(&quot;Enter data usage : &quot;);
scanf(&quot;%d&quot;,&amp;used);
while(dataleft&gt;0){
dataleft= dataleft-used;
printf(&quot;Enter data usage (remaining data : %d) : &quot;,dataleft);
scanf(&quot;%d&quot;,&amp;used);
}printf(&quot;No data left.&quot;);

}
