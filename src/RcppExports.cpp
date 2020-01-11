// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Mdistance_parallel
RMatrix Mdistance_parallel(NumericMatrix amat, NumericMatrix bmat, NumericVector radius);
RcppExport SEXP _rTLS_Mdistance_parallel(SEXP amatSEXP, SEXP bmatSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type amat(amatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bmat(bmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(Mdistance_parallel(amat, bmat, radius));
    return rcpp_result_gen;
END_RCPP
}
// distanceC
NumericVector distanceC(double xcoor, double ycoor, double zcoor, NumericVector X, NumericVector Y, NumericVector Z);
RcppExport SEXP _rTLS_distanceC(SEXP xcoorSEXP, SEXP ycoorSEXP, SEXP zcoorSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type xcoor(xcoorSEXP);
    Rcpp::traits::input_parameter< double >::type ycoor(ycoorSEXP);
    Rcpp::traits::input_parameter< double >::type zcoor(zcoorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(distanceC(xcoor, ycoor, zcoor, X, Y, Z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rTLS_Mdistance_parallel", (DL_FUNC) &_rTLS_Mdistance_parallel, 3},
    {"_rTLS_distanceC", (DL_FUNC) &_rTLS_distanceC, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_rTLS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
