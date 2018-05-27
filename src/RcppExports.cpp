// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// colored_noise
Rcpp::NumericVector colored_noise(int timesteps, double mean, double sd, double phi);
RcppExport SEXP _colorednoise_colored_noise(SEXP timestepsSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type timesteps(timestepsSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(colored_noise(timesteps, mean, sd, phi));
    return rcpp_result_gen;
END_RCPP
}
// multi_rnorm
arma::mat multi_rnorm(int n, Rcpp::NumericVector mean, Rcpp::NumericMatrix sd);
RcppExport SEXP _colorednoise_multi_rnorm(SEXP nSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(multi_rnorm(n, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// cor2cov
arma::mat cor2cov(Rcpp::NumericVector sigma, Rcpp::NumericMatrix corrMatrix);
RcppExport SEXP _colorednoise_cor2cov(SEXP sigmaSEXP, SEXP corrMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type corrMatrix(corrMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cor2cov(sigma, corrMatrix));
    return rcpp_result_gen;
END_RCPP
}
// colored_multi_rnorm
Rcpp::NumericMatrix colored_multi_rnorm(int timesteps, Rcpp::NumericVector mean, Rcpp::NumericVector sd, Rcpp::NumericVector phi, Rcpp::NumericMatrix covMatrix);
RcppExport SEXP _colorednoise_colored_multi_rnorm(SEXP timestepsSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP phiSEXP, SEXP covMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type timesteps(timestepsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type covMatrix(covMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(colored_multi_rnorm(timesteps, mean, sd, phi, covMatrix));
    return rcpp_result_gen;
END_RCPP
}
// variancefix
double variancefix(double mu, double sigma, std::string dist);
RcppExport SEXP _colorednoise_variancefix(SEXP muSEXP, SEXP sigmaSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< std::string >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(variancefix(mu, sigma, dist));
    return rcpp_result_gen;
END_RCPP
}
// unstructured_pop
Rcpp::DataFrame unstructured_pop(int start, int timesteps, double survPhi, double fecundPhi, double survMean, double survSd, double fecundMean, double fecundSd);
RcppExport SEXP _colorednoise_unstructured_pop(SEXP startSEXP, SEXP timestepsSEXP, SEXP survPhiSEXP, SEXP fecundPhiSEXP, SEXP survMeanSEXP, SEXP survSdSEXP, SEXP fecundMeanSEXP, SEXP fecundSdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type timesteps(timestepsSEXP);
    Rcpp::traits::input_parameter< double >::type survPhi(survPhiSEXP);
    Rcpp::traits::input_parameter< double >::type fecundPhi(fecundPhiSEXP);
    Rcpp::traits::input_parameter< double >::type survMean(survMeanSEXP);
    Rcpp::traits::input_parameter< double >::type survSd(survSdSEXP);
    Rcpp::traits::input_parameter< double >::type fecundMean(fecundMeanSEXP);
    Rcpp::traits::input_parameter< double >::type fecundSd(fecundSdSEXP);
    rcpp_result_gen = Rcpp::wrap(unstructured_pop(start, timesteps, survPhi, fecundPhi, survMean, survSd, fecundMean, fecundSd));
    return rcpp_result_gen;
END_RCPP
}
// projection
Rcpp::List projection(arma::vec initialPop, Rcpp::List noise);
RcppExport SEXP _colorednoise_projection(SEXP initialPopSEXP, SEXP noiseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type initialPop(initialPopSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type noise(noiseSEXP);
    rcpp_result_gen = Rcpp::wrap(projection(initialPop, noise));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_colorednoise_colored_noise", (DL_FUNC) &_colorednoise_colored_noise, 4},
    {"_colorednoise_multi_rnorm", (DL_FUNC) &_colorednoise_multi_rnorm, 3},
    {"_colorednoise_cor2cov", (DL_FUNC) &_colorednoise_cor2cov, 2},
    {"_colorednoise_colored_multi_rnorm", (DL_FUNC) &_colorednoise_colored_multi_rnorm, 5},
    {"_colorednoise_variancefix", (DL_FUNC) &_colorednoise_variancefix, 3},
    {"_colorednoise_unstructured_pop", (DL_FUNC) &_colorednoise_unstructured_pop, 8},
    {"_colorednoise_projection", (DL_FUNC) &_colorednoise_projection, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_colorednoise(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
