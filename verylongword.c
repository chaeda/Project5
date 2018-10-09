#include <stdio.h>
#include <string.h>
int main()
{
	char string[100], word[20], max[20], min[20], c;
	int i = 0, j = 0, sen = 0;
	printf("단어 입력: ");
	gets(string);
	for (i = 0; i < strlen(string); i++)
	{
		while (i < strlen(string) && string[i] != 32 && string[i] != 0)
		{
			word[j++] = string[i++];
		}
		if (j != 0)
		{
			word[j] = '\0';
			if (!sen)
			{
				sen = !sen;
				strcpy(max, word);
			}
			if (strlen(word) >= strlen(max))
			{
				strcpy(max, word);
			}
			j = 0;
		}
	}
	printf("가장 긴 단어는: '%s' .\n", max);
	system("pause");
	return 0;
}
*/
#include <stdio.h>

int main() {
	char string[100] = "단어 입력";
	int i, start = 0, longest = 0, longest_pos = 0;

	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] == ' ') {
			start = i + 1;
		}
		else {
			if (i - start > longest) {
				longest = i - start;
				longest_pos = start;
			}
		}
	}
	printf("longest word: %d letters, '%.*s'\n",
		longest, longest, string + longest_pos);

	return 0;
}