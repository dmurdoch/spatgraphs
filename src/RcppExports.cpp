// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cut_c
List cut_c(List edges, NumericMatrix coord, double R);
RcppExport SEXP spatgraphs2_cut_c(SEXP edgesSEXP, SEXP coordSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coord(coordSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    __result = Rcpp::wrap(cut_c(edges, coord, R));
    return __result;
END_RCPP
}
// prune_c
List prune_c(List edges, int level, int verbose);
RcppExport SEXP spatgraphs2_prune_c(SEXP edgesSEXP, SEXP levelSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< int >::type level(levelSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(prune_c(edges, level, verbose));
    return __result;
END_RCPP
}
// spatcluster_c
List spatcluster_c(List x, int verbose);
RcppExport SEXP spatgraphs2_spatcluster_c(SEXP xSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(spatcluster_c(x, verbose));
    return __result;
END_RCPP
}
// spatgraph_c
List spatgraph_c(NumericMatrix coord, int type, NumericVector parameters, double maxR, List preGraph, int verbose);
RcppExport SEXP spatgraphs2_spatgraph_c(SEXP coordSEXP, SEXP typeSEXP, SEXP parametersSEXP, SEXP maxRSEXP, SEXP preGraphSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type coord(coordSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< double >::type maxR(maxRSEXP);
    Rcpp::traits::input_parameter< List >::type preGraph(preGraphSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(spatgraph_c(coord, type, parameters, maxR, preGraph, verbose));
    return __result;
END_RCPP
}
