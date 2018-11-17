#pragma once

/**
 * Define specific things for the snax system
 */

extern "C" {
   void snax_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { snax_assert(false, "pure virtual method called"); }
}
