struct HealthCheck {
  string name;
  double height;
  double weight;
  double bmi;
};

double getBmi(double height, double weight);

bool quadEq(double a, double b, double c, double *px1, double *px2);

double getAverage(const int *a, int length);
