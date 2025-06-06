## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup--------------------------------------------------------------------
set.seed(42)
library(bartcs)

## ----load and fit-------------------------------------------------------------
data(ihdp, package = "bartcs")

fit <- single_bart(
  Y               = ihdp$y_factual,
  trt             = ihdp$treatment,
  X               = ihdp[, 6:30],
  num_tree        = 10,
  num_chain       = 4,
  num_post_sample = 100,
  num_burn_in     = 100,
  verbose         = FALSE
)
fit

## ----compare result-----------------------------------------------------------
SATE <- mean(ihdp$mu1 - ihdp$mu0)
SATE
mu1 <- mean(ihdp$mu1)
mu1
mu0 <- mean(ihdp$mu0)
mu0
mse <- mean((unlist(fit$mcmc_list[, "SATE"]) - SATE)^2)
mse

## ----summary------------------------------------------------------------------
summary(fit)

## ----pip plots----------------------------------------------------------------
plot(fit, method = "pip")

## ----pip plots with options---------------------------------------------------
plot(fit, method = "pip", top_n = 10)
plot(fit, method = "pip", threshold = 0.5)

## ----trace plots eff----------------------------------------------------------
plot(fit, method = "trace")

## ----coda---------------------------------------------------------------------
coda::gelman.diag(fit$mcmc_list[, "SATE"])

## ----count omp thread---------------------------------------------------------
count_omp_thread()

## ----multi-threading performance----------------------------------------------
idx  <- sample(nrow(ihdp), 4e4, TRUE)
ihdp <- ihdp[idx, ]

microbenchmark::microbenchmark(
  simple = single_bart(
    Y               = ihdp$y_factual,
    trt             = ihdp$treatment,
    X               = ihdp[, 6:30],
    num_tree        = 1,
    num_chain       = 1,
    num_post_sample = 10,
    num_burn_in     = 0,
    verbose         = FALSE,
    parallel        = FALSE
  ),
  parallel = single_bart(
    Y               = ihdp$y_factual,
    trt             = ihdp$treatment,
    X               = ihdp[, 6:30],
    num_tree        = 1,
    num_chain       = 1,
    num_post_sample = 10,
    num_burn_in     = 0,
    verbose         = FALSE,
    parallel        = TRUE
  ),
  times = 50
)

