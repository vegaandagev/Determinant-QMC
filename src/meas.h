#pragma once

#include "data.h"

void measure_eqlt(const struct params *const restrict p, const int sign,
		const double *const restrict gu,
		const double *const restrict gd,
		struct meas_eqlt *const restrict m);

void measure_uneqlt(const struct params *const restrict p, const int sign,
		const double *const Gu0t,
		const double *const Gutt,
		const double *const Gut0,
		const double *const Gd0t,
		const double *const Gdtt,
		const double *const Gdt0,
		struct meas_uneqlt *const restrict m);

/*
void measure_uneqlt_full(const struct params *const restrict p, const int sign,
		const double *const restrict Gu,
		const double *const restrict Gd,
		struct meas_uneqlt *const restrict m);
*/
