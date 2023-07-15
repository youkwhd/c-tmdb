#include "find.h"

TMDb_Buffer *tmdb_get_find_by_id(TMDb_Query *queries, size_t queries_length, TMDb_Path *paths, size_t paths_length)
{
    char *external_id = tmdb_path_get_value(paths, paths_length, "external_id");
    if (external_id == NULL)
        return NULL;

    char path[256];
    sprintf(path, "/3/find/%s", external_id);
    return tmdb_request_create_get(queries, queries_length, path);
}
