#include "register_types.h"
#include "noise.h"

void register_anl_types() {

    ClassDB::register_class<AnlNoise>();
}

void unregister_anl_types() {

    // nothing to do here
}
