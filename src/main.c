/*
 * main.c
 *
 *  Created on: Jan 23, 2024
 *      Author: chmnq
 */

#include "main.h"

int main(void)
{
  hwInit();
  apInit();

  apMain();

  return 0;
}
