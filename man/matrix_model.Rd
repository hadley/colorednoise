% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/simulate_populations.R
\name{matrix_model}
\alias{matrix_model}
\title{Temporally Autocorrelated Matrix Population Models}
\usage{
matrix_model(data, initialPop, timesteps, covMatrix = NULL,
  colNames = NULL, matrixStructure = NULL, repeatElements = NULL,
  survivalOverflow = "scale")
}
\arguments{
\item{data}{The input data can be one of two formats: a list of three matrices, or a data frame
with three columns. \cr
If it is a list of three matrices, they must be standard Leslie matrices: the first
a matrix of mean values for each matrix element, the second a matrix of standard deviations, and the third
a matrix of temporal autocorrelations. \cr
If it is a data frame, there must be three columns, one for mean vital rates, one for standard deviations, and one labeled 'autocorrelation.' \cr
If the population has n stages, the first n rows of the data frame must be the matrix elements for the first stage,
and the next n*(1-n) rows must be the transition probabilities, each row of the matrix from first to last transposed vertically. \cr
If you want to run a matrix population model without temporal autocorrelation, simply set all autocorrelation values to zero.}

\item{initialPop}{An initial population vector. The length must be the same as the number of classes in the matrices.}

\item{timesteps}{The number of timesteps you would like to simulate the population.}

\item{covMatrix}{Optional: Add a covariance matrix describing within-year covariances between matrix elements. The matrix elements must be
in the same order as they are in the data frame format above: a Leslie matrix turned into a vector row-wise. There should be as many
columns as matrix elements, excluding repeat elements (see below) or structural zeros.}

\item{colNames}{Optional: If the mean, sd, and autocorrelation columns of your data frame input are not
named 'mean', 'sd', and 'autocorrelation', provide their names here in a character vector, e.g.,
`c(mean = 'Mean', sd = 'Standard Deviation', autocorrelation = 'phi')`}

\item{matrixStructure}{Optional: By default, the function assumes that the first row of the matrix gives fecundities while
the rest of the matrix gives transition or survival probabilities. However, these assumptions do not apply to
many plant matrices. If your matrix has transition probabilities in the first row or fecundities beyond the first row
(e.g., clonal reproduction), provide a character matrix here with the same dimensions as your matrix that gives in
strings whether each element is 'fecundity' or 'transition'.}

\item{repeatElements}{Optional: Sometimes not all matrix elements can be measured, and some transitions or fertilities
are generalized across classes. If you have any matrix elements that are copies of other matrix elements (e.g., stage 3
is assumed to have the same fertility as stage 4) indicate them here with a matrix of \emph{rowwise} (not column-wise)
indices that show which elements are repeats and which are unique. For example in a 2x2 matrix where both classes are
assumed to have the same fertility, input `matrix(c(1, 1, 3, 4), byrow = T, ncol = 2)`. If you indicate repeat elements
and you include a covariance matrix, the covariance matrix must only have as many columns as \emph{unique matrix elements}.
Structural zeros should \emph{not} be included here as repeats, as they are automatically detected in the function.}

\item{survivalOverflow}{If the survival for a stage is very high or very variable, the function may sometimes generate
projection matrices with survival that exceeds 1 for that stage. The function has two methods of dealing with this problem:
either discard all projection matrices and generate new ones until the survival falls within acceptable bounds ("redraw") or
divide all the non-fertility matrix elements for that stage by the survival such that they add to 1 ("scale"). The default
is "scale".}
}
\value{
A data frame with n + 2 columns, where n is the number of stages in the matrix. One column indicates the timestep,
there is one column with the population size for each stage, and one column for total population size.
}
\description{
Simulate a structured population with temporal autocorrelation using standard Leslie matrices.
Each element in the Leslie matrix has a specified mean, variance, and temporal autocorrelation value.
The matrix can have arbitrary dimensions and can have transitions besides linear survival. This model
includes environmental stochasticity with colored noise. Density dependence and demographic stochasticity not currently supported.
}
\examples{
meanMat <- matrix(c(0.55, 0.6, 0.24, 0.4), byrow = TRUE, ncol = 2)
sdMat <- matrix(c(0.3, 0.35, 0.05, 0.1), byrow = TRUE, ncol = 2)
phiMat <- matrix(c(-0.2, -0.2, 0, 0), byrow = TRUE, ncol = 2)
initialPop <- c(100, 100)
sim <- matrix_model(list(meanMat, sdMat, phiMat), initialPop, 50)
head(sim)
}
