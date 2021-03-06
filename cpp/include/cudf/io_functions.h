
/*
 * Copyright (c) 2018, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

/*
 * @brief Interface to parse CSV data to GDF columns
 */
gdf_error read_csv(csv_read_arg *args);

/*
 * @brief Interface to parse Parquet data to GDF columns
 */
gdf_error read_parquet(pq_read_arg *args);

/*
 * @brief Interface to convert GDF Columns to Compressed Sparse Row
 */
gdf_error gdf_to_csr(gdf_column **gdfData, int num_cols, csr_gdf *csrReturn);
