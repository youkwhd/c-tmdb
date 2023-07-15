#ifndef __C_TMDB_TV_SEASON_H
#define __C_TMDB_TV_SEASON_H

#include "tmdb/curl/handler.h"
#include "tmdb/curl/url.h"
#include "tmdb/membuffer/membuffer.h"
#include "tmdb/request/request.h"
#include "tmdb/query/query.h"

TMDb_Buffer *tmdb_get_tv_season_details(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_account_states(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_aggregate_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_changes(TMDb_Query *queries, size_t queries_length, char *season_id);
TMDb_Buffer *tmdb_get_tv_season_credits(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_external_ids(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_images(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_translations(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);
TMDb_Buffer *tmdb_get_tv_season_videos(TMDb_Query *queries, size_t queries_length, char *series_id, char *season_number);

#endif
