#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int x{};
    double y, f;
    double d;
    double k;
    double w;
    double a, t;
    double i;
    double m;
    double n;
    double h;
    double j;
    double r;
    double q;
    double l;
    double p;
    double c; 
    double u;
    double v;
    double G, S, Q, K = 0.0, E = 0.0, L, V, U, N, T, Z, D, R = 0.0, A = 0.0, P = 0.0, F, W = 0.0, H = 0.0;

    cout << "Введите номер задания" << endl;
    cin >> x;

    switch (x) {
    case 1:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной f" << endl;
        cin >> f;

        double numerator1 = exp(2 * y) + sin(f);
        double denominator1 = log10(3.8 * y + f);
        G = numerator1 / denominator1;

        cout << "Значение переменной G = " << G << endl;
        break;

    case 2:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной d" << endl;
        cin >> d;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator2 = log10(d) + 3.5 * d * 2 + 1;
        double denominator2 = cos(2 * y);
        F = numerator2 / denominator2;

        cout << "Значение переменной F = " << F << endl;
        break;

    case 3:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной k" << endl;
        cin >> k;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator3 = log10(k - y) + y * 4;
        double denominator3 = exp(y + 2.355 * k * 2);
        U = numerator3 / denominator3;

        cout << "Значение переменной U = " << U << endl;
        break;

    case 4:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной w" << endl;
        cin >> w;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator = 9.33 * w * 3 + sqrt(w);
        double denominator = log10(y + 3.5) + sqrt(y);
        G = numerator / denominator;

        cout << "Значение переменной G = " << G << endl;
        break;

    case 5:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной a" << endl;
        cin >> a;
        cout << "Введите значение переменной t" << endl;
        cin >> t;

        double numerator5 = 7.8 * a * 2 + 3.52 * t;
        double denominator5 = log10(a + 2 * y) + exp(y);
        D = numerator5 / denominator5;

        cout << "Значение переменной D = " << D << endl;
        break;

    case 6:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной i" << endl;
        cin >> i;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator6 = 0.81 * cos(i);
        double denominator6 = log10(y) + 2 * t * 3;
        L = numerator6 / denominator6;

        cout << "Значение переменной L = " << L << endl;
        break;

    case 7:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной m" << endl;
        cin >> m;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator7 = m * 2 + 2.8 * m + 0.355;
        double denominator7 = cos(2 * y) + 3.6;
        N = numerator7 / denominator7;

        cout << "Значение переменной N = " << N << endl;
        break;

    case 8:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной t" << endl;
        cin >> t;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator8 = 2.37 * sin(t + 1);
        double denominator8 = sqrt(4 * y * 2 - 0.1 * y + 5);
        T = numerator8 / denominator8;

        cout << "Значение переменной T = " << T << endl;
        break;

    case 9:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной w" << endl;
        cin >> w;

        double numerator9 = (y + 2 * w) * 3;
        double denominator9 = log10(y + 0.75);
        V = numerator9 / denominator9;

        cout << "Значение переменной V = " << V << endl;
        break;

    case 10:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной t" << endl;
        cin >> t;
        cout << "Введите значение переменной y" << endl;
        cin >> y;

        double numerator10 = 2 * t + y * cos(t);
        double denominator10 = sqrt(y + 4.831);
        Z = numerator10 / denominator10;

        cout << "Значение переменной Z =" << Z << endl;
        break;

    case 11:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной n" << endl;
        cin >> n;

        double numerator11 = y * 2 + 0.5 * n + 4.8;
        double denominator11 = sin(y);
        D = numerator11 / denominator11;

        cout << "Значение переменной D =" << D << endl;
        break;

    case 12:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной t" << endl;
        cin >> t;

        double numerator12 = sin(2 * t + 1) * 2 + 0.3;
        double denominator12 = log10(t + y);
        R = numerator12 / denominator12;

        cout << "Значение переменной R =" << R << endl;
        break;

    case 13:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной h" << endl;
        cin >> h;

        double numerator13 = sin(2 * y + h) + h * 2;
        double denominator13 = exp(k) + y;
        A = numerator13 / denominator13;

        cout << "Значение переменной A = " << A << endl;
        break;

    case 14:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной h" << endl;
        cin >> h;

        double numerator14 = exp(y + 2.5) + h * 3;
        double denominator14 = log10(sqrt(y + 0.04 * h));
        P = numerator14 / denominator14;

        cout << "Значение переменной P =" << P << endl;
        break;

    case 15:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной j" << endl;
        cin >> j;

        double numerator15 = 2 * sin(0.354 * y + 1);
        double denominator15 = log10(y + 2 * j);
        F = numerator15 / denominator15;

        cout << "Значение переменной F =" << F << endl;
        break;

    case 16:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной r" << endl;
        cin >> r;
        cout << "Введите значение переменной t" << endl;
        cin >> t;

        double numerator16 = 4 * t * 3 + log10(r);
        double denominator16 = exp(y + r) + 7.2 * sin(r);
        W = numerator16 / denominator16;

        cout << "Значение переменной W = " << W << endl;
        break;

    case 17:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной n" << endl;
        cin >> n;

        double numerator17 = y * 2 - 0.8 * y + sqrt(y);
        double denominator17 = 23.1 * n * 2 + cos(n);
        H = numerator17 / denominator17;

        cout << "Значение переменной H = " << H << endl;
        break;

    case 18:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной k" << endl;
        cin >> k;

        double numerator18 = sqrt(sin( 2 * y + 6.835));
        double denominator18 = log10(y + k) + 3 * y * 2;
        R = numerator18 / denominator18;

        cout << "Значение переменной R = " << R << endl;
        break;

    case 19:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной q" << endl;
        cin >> q;

        double numerator19 = log10(0.7 * y + 2 * q);
        double denominator19 = sqrt(3 * y * 2 + 0.5 * y + 4);
        E = numerator19 / denominator19;

        cout << "Значение переменной E = " << E << endl;
        break;

    case 20:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной l" << endl;
        cin >> l;
        cout << "Введите значение переменной r" << endl;
        cin >> r;

        double numerator20 = 2 * t * 2 + 3 * l + 7.2;
        double denominator20 = log10(y + (exp((2 * l))));
        K = numerator20 / denominator20;

        cout << "Значение переменной K = " << K << endl;
        break;

    case 21:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной k" << endl;
        cin >> k;
        cout << "Введите значение переменной d" << endl;
        cin >> d;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "Введите значение переменной p" << endl;
        cin >> p;

        double numerator21 = sqrt(k + 2.6 * p * (sin(k)));
        double denominator21 = x - d * 3;
        Q = numerator21 / denominator21;

        cout << "Значение переменной Q = " << Q << endl;
        break;

    case 22:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной t" << endl;
        cin >> t;

        double numerator22 = 4.351 * y * 3 + 2 * t * (log10(t));
        double denominator22 = sqrt(cos(2 * y + 4.351));
        S = numerator22 / denominator22;

        cout << "Значение переменной S = " << S << endl;
        break;

    case 23:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной d" << endl;
        cin >> d;

        double numerator23 = sin(2 * y) + 0.3 * d;
        double denominator23 = exp(k + y) + log10(d);
        R = numerator23 / denominator23;

        cout << "Значение переменной R = " << R << endl;
        break;

    case 24:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной k" << endl;
        cin >> k;

        double numerator24 = log10(2 * k + 4.3);
        double denominator24 = exp(k + y) + sqrt(y);
        U = numerator24 / denominator24;

        cout << "Значение переменной U = " << U << endl;
        break;

    case 25:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной c" << endl;
        cin >> c;
        cout << "Введите значение переменной t" << endl;
        cin >> t;

        double numerator25 = cos (2 * c + 3 * t + 4);
        double denominator25 = sqrt(c + t);
        L = numerator25 / denominator25;

        cout << "Значение переменной L = " << L << endl;
        break;

    case 26:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной u" << endl;
        cin >> u;

        double numerator26 = sin(2 * u);
        double denominator26 = log10((2 * y + u));
        T = numerator26 / denominator26;

        cout << "Значение переменной T = " << T << endl;
        break;

    case 27:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной p" << endl;
        cin >> p;

        double numerator27 = sin((p + 0.4) * 2);
        double denominator27 = y * 2 + 7.325 * p;
        Z = numerator27 / denominator27;

        cout << "Значение переменной Z = " << Z << endl;
        break;

    case 28:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной v" << endl;
        cin >> v;

        double numerator28 = 0.004 * v + exp(2 * y);
        double denominator28 = exp(y / 2);
        W = numerator28 / denominator28;

        cout << "Значение переменной W = " << W << endl;
        break;

    case 29:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной h" << endl;
        cin >> h;

        double numerator29 = 0.355 * h * 2 - 4.355;
        double denominator29 = exp(y + h) + sqrt(2.7 * y);
        T = numerator29 / denominator29;

        cout << "Значение переменной T = " << T << endl;
        break;

    case 30:
        cout << "Задание номер " << x << endl;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной p" << endl;
        cin >> p;

        double numerator30 = 3 * y * 2 + sqrt(y + 1);
        double denominator30 = log10((p + y)) + exp(p);
        N = numerator30 / denominator30;

        cout << "Значение переменной N = " << N << endl;
        break;

        
    }

    return 0;
}
       
    