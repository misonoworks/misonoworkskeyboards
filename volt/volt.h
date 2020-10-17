#pragma once

#include "quantum.h"

#define LAYOUT( \
	         K001,  \
	K100, K101, K102, K103,     \
	      K201, K202            \
) { \
	{ K001, K100, K101, K102, K103, K201, K202 } \
}
