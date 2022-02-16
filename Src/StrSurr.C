
/*	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY
	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
	AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
	DEALINGS IN THE SOFTWARE. */

#include <stdio.h>
#include <string.h>
#include <Stdlib.h>

char ver[] = "1.0";

/* This program is distributed under the following license: (SELECT A LICENSE)

 ================================================================================
   GNU General Public License (GPL) - https://opensource.org/licenses/gpl-license
   ================================================================================


   ================= ABOUT THE PROGRAM =================
   This program is created by Kvc at '01-02-2022 - 11:44'
   This program can Extract the string surrounded by given characters.
   Use '/?' for getting help for this.
   For More Visit: www.batch-man.com	*/


void Help()
{
    printf("\nExtract the string surrounded by given characters\n");
    printf("v%s Created by Kvc - www.batch-man.com\n\n", ver);
    printf("USAGE:\n");
    printf("Call StrSurr [Surrounding Chars] [String]\n");
    printf("EXAMPLE: StrSurr \"[]\" \"Hello [Kvc], how are you?\"\n");
    printf("RESULT: Kvc\n\n");
    printf("Note: Make sure to surround delimeter by double quotes as in e.g.\n");
    return;
}

int main(int argc, char *argv[])
{
    if (argc < 3 || !strcmp(argv[1], "/?") || !strcmp(argv[1], "--help"))
    {
        Help();
        return EXIT_SUCCESS;
    }
    
    size_t slen = strlen(argv[2]);
    short int flag = 0; // 0 = false, 1 = true

    for (int i = 0; i < slen; i++)
    {

        if (argv[2][i] == argv[1][1])
        {
            flag = 0;
            printf("\n");
            continue;
        }

        if (flag == 1)
        {
            printf("%c", argv[2][i]);
            continue;
        }

        if (argv[2][i] == argv[1][0])
        {
            flag = 1;
        }
    }
    return EXIT_SUCCESS;
}