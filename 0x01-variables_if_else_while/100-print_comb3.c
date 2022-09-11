#include <stdio.h>

/**
 *
 * main - program that prints all possible different combinations of 2 digits
 *main function
 * Return: 0
 *
 *    */

int main(void)

{

		int c = 0;

			int g_d;

				int m_d;



					while (c <= 99)

							{

										g_d = (c / 10 + '0');
 
												m_d = (c % 10 + '0');



														if (g_d <m_d)

																	{

																					putchar(g_d);

																								putchar(m_d);



																											if (c != 89)

																															{

																																				putchar(',');

																																								putchar(' ');

																																											}

																													}

																c++;

																	}

					putchar('\n');

					return (0);

}
