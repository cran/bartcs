// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// count_omp_thread
int count_omp_thread();
RcppExport SEXP _bartcs_count_omp_thread() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(count_omp_thread());
    return rcpp_result_gen;
END_RCPP
}
// cseparate_bart
Rcpp::List cseparate_bart(const Rcpp::NumericMatrix& X_src, const Rcpp::NumericVector& Y1_src, const Rcpp::NumericMatrix& X1_src, const Rcpp::NumericVector& Y0_src, const Rcpp::NumericMatrix& X0_src, const Rcpp::NumericVector& TRT_src, const double Y_min, const double Y_max, const Rcpp::NumericVector& step_prob, const int num_chain, const int num_chain_iter, const int num_burn_in, const int num_thin, const int num_post_sample, const int num_tree, const double alpha, const double beta, const double nu, const double lambda_out1, const double lambda_out0, const double initial_dir_alpha, const double initial_sigma2_out1, const double initial_sigma2_out0, const bool parallel, const bool verbose);
RcppExport SEXP _bartcs_cseparate_bart(SEXP X_srcSEXP, SEXP Y1_srcSEXP, SEXP X1_srcSEXP, SEXP Y0_srcSEXP, SEXP X0_srcSEXP, SEXP TRT_srcSEXP, SEXP Y_minSEXP, SEXP Y_maxSEXP, SEXP step_probSEXP, SEXP num_chainSEXP, SEXP num_chain_iterSEXP, SEXP num_burn_inSEXP, SEXP num_thinSEXP, SEXP num_post_sampleSEXP, SEXP num_treeSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP nuSEXP, SEXP lambda_out1SEXP, SEXP lambda_out0SEXP, SEXP initial_dir_alphaSEXP, SEXP initial_sigma2_out1SEXP, SEXP initial_sigma2_out0SEXP, SEXP parallelSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X_src(X_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y1_src(Y1_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X1_src(X1_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y0_src(Y0_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X0_src(X0_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type TRT_src(TRT_srcSEXP);
    Rcpp::traits::input_parameter< const double >::type Y_min(Y_minSEXP);
    Rcpp::traits::input_parameter< const double >::type Y_max(Y_maxSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type step_prob(step_probSEXP);
    Rcpp::traits::input_parameter< const int >::type num_chain(num_chainSEXP);
    Rcpp::traits::input_parameter< const int >::type num_chain_iter(num_chain_iterSEXP);
    Rcpp::traits::input_parameter< const int >::type num_burn_in(num_burn_inSEXP);
    Rcpp::traits::input_parameter< const int >::type num_thin(num_thinSEXP);
    Rcpp::traits::input_parameter< const int >::type num_post_sample(num_post_sampleSEXP);
    Rcpp::traits::input_parameter< const int >::type num_tree(num_treeSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_out1(lambda_out1SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_out0(lambda_out0SEXP);
    Rcpp::traits::input_parameter< const double >::type initial_dir_alpha(initial_dir_alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type initial_sigma2_out1(initial_sigma2_out1SEXP);
    Rcpp::traits::input_parameter< const double >::type initial_sigma2_out0(initial_sigma2_out0SEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cseparate_bart(X_src, Y1_src, X1_src, Y0_src, X0_src, TRT_src, Y_min, Y_max, step_prob, num_chain, num_chain_iter, num_burn_in, num_thin, num_post_sample, num_tree, alpha, beta, nu, lambda_out1, lambda_out0, initial_dir_alpha, initial_sigma2_out1, initial_sigma2_out0, parallel, verbose));
    return rcpp_result_gen;
END_RCPP
}
// csingle_bart
Rcpp::List csingle_bart(const Rcpp::NumericVector& Y_src, const Rcpp::NumericMatrix& X_src, const Rcpp::NumericVector& TRT_src, const double trt_treated, const double trt_control, const double Y_min, const double Y_max, const Rcpp::NumericVector& step_prob, const int num_chain, const int num_chain_iter, const int num_burn_in, const int num_thin, const int num_post_sample, const int num_tree, const double alpha, const double beta, const double nu, const double lambda_exp, const double lambda_out, const double initial_dir_alpha, const double initial_sigma2_exp, const double initial_sigma2_out, const bool binary_trt, const bool parallel, const bool verbose);
RcppExport SEXP _bartcs_csingle_bart(SEXP Y_srcSEXP, SEXP X_srcSEXP, SEXP TRT_srcSEXP, SEXP trt_treatedSEXP, SEXP trt_controlSEXP, SEXP Y_minSEXP, SEXP Y_maxSEXP, SEXP step_probSEXP, SEXP num_chainSEXP, SEXP num_chain_iterSEXP, SEXP num_burn_inSEXP, SEXP num_thinSEXP, SEXP num_post_sampleSEXP, SEXP num_treeSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP nuSEXP, SEXP lambda_expSEXP, SEXP lambda_outSEXP, SEXP initial_dir_alphaSEXP, SEXP initial_sigma2_expSEXP, SEXP initial_sigma2_outSEXP, SEXP binary_trtSEXP, SEXP parallelSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y_src(Y_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X_src(X_srcSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type TRT_src(TRT_srcSEXP);
    Rcpp::traits::input_parameter< const double >::type trt_treated(trt_treatedSEXP);
    Rcpp::traits::input_parameter< const double >::type trt_control(trt_controlSEXP);
    Rcpp::traits::input_parameter< const double >::type Y_min(Y_minSEXP);
    Rcpp::traits::input_parameter< const double >::type Y_max(Y_maxSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type step_prob(step_probSEXP);
    Rcpp::traits::input_parameter< const int >::type num_chain(num_chainSEXP);
    Rcpp::traits::input_parameter< const int >::type num_chain_iter(num_chain_iterSEXP);
    Rcpp::traits::input_parameter< const int >::type num_burn_in(num_burn_inSEXP);
    Rcpp::traits::input_parameter< const int >::type num_thin(num_thinSEXP);
    Rcpp::traits::input_parameter< const int >::type num_post_sample(num_post_sampleSEXP);
    Rcpp::traits::input_parameter< const int >::type num_tree(num_treeSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_exp(lambda_expSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_out(lambda_outSEXP);
    Rcpp::traits::input_parameter< const double >::type initial_dir_alpha(initial_dir_alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type initial_sigma2_exp(initial_sigma2_expSEXP);
    Rcpp::traits::input_parameter< const double >::type initial_sigma2_out(initial_sigma2_outSEXP);
    Rcpp::traits::input_parameter< const bool >::type binary_trt(binary_trtSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(csingle_bart(Y_src, X_src, TRT_src, trt_treated, trt_control, Y_min, Y_max, step_prob, num_chain, num_chain_iter, num_burn_in, num_thin, num_post_sample, num_tree, alpha, beta, nu, lambda_exp, lambda_out, initial_dir_alpha, initial_sigma2_exp, initial_sigma2_out, binary_trt, parallel, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bartcs_count_omp_thread", (DL_FUNC) &_bartcs_count_omp_thread, 0},
    {"_bartcs_cseparate_bart", (DL_FUNC) &_bartcs_cseparate_bart, 25},
    {"_bartcs_csingle_bart", (DL_FUNC) &_bartcs_csingle_bart, 25},
    {NULL, NULL, 0}
};

RcppExport void R_init_bartcs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
