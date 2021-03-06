#' \code{colorednoise} package
#'
#' Simulate Temporally Autocorrelated Populations
#'
#' See the README on \href{https://github.com/japilo/colorednoise#readme}{GitHub}
#'
#' @docType package
#' @name colorednoise
#' @useDynLib colorednoise, .registration = TRUE
#' @import purrr
#' @import dplyr
#' @importFrom stats sd acf na.omit plogis
#' @importFrom tibble tibble as_tibble
#' @import tidyr
NULL

## quiets concerns of R CMD check re: the .'s that appear in
## pipelines
if (getRversion() >= "2.15.1") utils::globalVariables(c(".", "mean.trans",
    "sd.trans", "noise", "timestep", "dist", "zero"))
