#include <Rcpp.h>
using std::vector;

void updatemuu(vector<double>& xmust, vector<double>& xmuut, vector<int>& xn_s, vector<int>& xn_u, int xI, int xK, int xM, int K1,
               vector<double>& xp_var, Rcpp::NumericVector& sqrt_var1, Rcpp::NumericVector& sqrt_var2, int xtt, vector<int>& xgammat, Rcpp::IntegerMatrix& xd, 
                Rcpp::NumericMatrix& xybar_s,  Rcpp::NumericMatrix& xybar_u,  Rcpp::NumericMatrix& pt2,  Rcpp::NumericMatrix& pt3,
                double xlambda,  double xbeta, double xalpha, vector<double>& xmu, vector<double>& xSigu, vector<int>& xAmuu);
