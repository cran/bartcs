% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/bartcs-package.R
\docType{package}
\name{bartcs-package}
\alias{bartcs}
\alias{bartcs-package}
\title{bartcs: Bayesian Additive Regression Trees for Confounder Selection}
\description{
Fit Bayesian Regression Additive Trees (BART) models to
select true confounders from a large set of potential confounders and
to estimate average treatment effect. For more information, see
Kim et al. (2023) \doi{10.1111/biom.13833}.
}
\details{
Functions in \code{bartcs} serve one of three purposes.
\enumerate{
\item Functions for fitting: \code{separate_bart()} and \code{single_bart()}.
\item Functions for summary: \code{summary()} and \code{plot()}.
\item Utility function for OpenMP: \code{count_omp_thread()}.
}
The code of BART model are based on the 'BART' package by
Sparapani et al. (2021) under the GPL license, with modifications.
The modifications from the \code{BART} package include (but are not limited to):
\itemize{
\item Add CHANGE step.
\item Add Single and Separate Model.
\item Add causal effect estimation.
\item Add confounder selection.
}
}
\references{
Sparapani R, Spanbauer C, McCulloch R (2021).
“Nonparametric Machine Learning and Efficient Computation
with Bayesian Additive Regression Trees: The BART R Package.”
\emph{Journal of Statistical Software}, 97(1), 1–66.
\doi{10.18637/jss.v097.i01}

Kim, C., Tec, M., & Zigler, C. M. (2023).
Bayesian Nonparametric Adjustment of Confounding, \emph{Biometrics}
\doi{10.1111/biom.13833}
}
\seealso{
Useful links:
\itemize{
  \item \url{https://github.com/yooyh/bartcs}
  \item Report bugs at \url{https://github.com/yooyh/bartcs/issues}
}

}
\author{
\strong{Maintainer}: Yeonghoon Yoo \email{yooyh.stat@gmail.com}

}
\keyword{internal}
