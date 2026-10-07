#include <string_view>
#include <dirent.h>
#include <unistd.h>
#include <zlib.h>

#include "colorado.h"
#include "logging.h"
#include "obfs-string.h"
#include "utils.h"

bool check_signature() {
    // Personal build: this APK is signed with the local debug keystore, not
    // Nekogram's release certificate. The official check SIGKILLs the process
    // on mismatch, which happens in JNI_OnLoad before the UI starts.
    return true;
}