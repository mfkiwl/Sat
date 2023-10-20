#include "Constants.h"

#include <math.h>

// �������� �����, �/�
const double c         = 2.99792458E+8;
// ������ ����� � GPS, ��
const double Re_WGS84  = 6371.0;
// ������ ����� � BeiDou, ��
const double Re_BDS    = 6378.0;
// ����������� �������� ��� � �
const double RadToDeg  = 180.0 / M_PI;
// ����������� �������� � � ���
const double DegToRad  =  M_PI / 180.0;

// ����������� -2sqrt(mu_WGS_84)/�^2
const double C            = -4.442807633E-10;
// ������� f1 (L1) GPS, ���
const double fL1_GPS      = 1575.42;
// ������� f2 (L2) GPS, ���
const double fL2_GPS      = 1227.6;
// ������� ��������� �������� ������ f1 � f2 GPS
const double gamma_GPS    = (77.0 * 77.0) /
							(60.0 * 60.0);
// ��������������� ��������� ��������������� ���� ����� � ������ ��������� �
// ������� WGS-84, �^3/�^2
const double mu_WGS84 	  = 3.986005E+14;
// ������� (��������������) ������� ����������� ���������� � ������� WGS-84, �
const double ae_WGS84     = 6378137.0;
// ������� ������� �������� �������� ����� ������������ ����� ���������
// ������������� � ������� WGS-84, ���/�
const double OMEGAi_WGS84 = 7.2921151467E-5;

// ������� f1 (G1) �������, ���
const double fG1_GLO    = 1602.0;
// ������� f2 (G2) �������, ���
const double fG2_GLO    = 1246.0;
// �������� �������� ������ ����� ��������� �������� ������� � ��������� G1
const double dfG1_GLO   = 0.5625;
// �������� �������� ������ ����� ��������� �������� ������� � ��������� G2
const double dfG2_GLO   = 0.4375;
// ������� ��������� �������� ������ f1 � f2 �������
const double gamma_GLO  = (9.0 * 9.0) /
						  (7.0 * 7.0);
// ��������������� ��������� ��������������� ���� ����� � ������ ��������� �
// ������� ��-90.02, �^3/�^2
const double mu_PZ90    = 398600441.8E+6;
// ��������� ������������� ����������� ������ �������
const double J20_PZ90   = 1082625.75E-9;
// ������� (��������������) ������� ����������� ���������� � ������� ��-90.02
const double ae_PZ90    = 6378136.0;
// ������� ������� �������� �������� ����� ������������ ����� ��������� ������������� � ������� ��-90.02, ���/�
const double omega_PZ90 = 7.2921151467E-5;

 // ������� f1 (E1) GALILEO, ���
const double fE1_GAL   = 1575.42;
// ������� f2 (E5a) GALILEO, ���
const double fE5a_GAL  = 1176.45;
// ������� f2 (E5b) GALILEO, ���
const double fE5b_GAL  = 1207.14;
// ������� ��������� �������� ������ E1 � E5a GALILEO
const double gamma_E1_E5a_GAL = (154.0 * 154.0) /
								(115.0 * 115.0);
 // ������� ��������� �������� ������ E1 � E5b GALILEO
const double gamma_E1_E5b_GAL = (77.0 * 77.0) /
								(59.0 * 59.0);

// ������� f1 (B1I) BeiDou, ���
const double fB1_BDS   = 1561.098;
// ������� f2 (B2I) BeiDou, ���
const double fB2_BDS  = 1207.140;
// ������� ��������� �������� ������ B1 � B2 BeiDou
const double gamma_B1_B2_BDS = (1561.098 * 1561.098) /
								(1207.140 * 1207.140);

// ��� �������������� ��� ������ �����-����� 4 �������, �
const double GLOStep   = 50.0;

// ������ ������������ ���� ��� ������ GEMEC, ��
const double hi_GEMTEC   = 350;
// ������ ������������ ���� ��� ������ BDGIM, ��
const double hi_BDGIM    = 400;
// ������ ������������ ���� ��� �������� TayAbsTEC, ��
const double hi_T        = 450;

// �������������� ������ ��������� ���������� ������, ���
const double phiM = 80.27 * M_PI / 180.0;
// �������������� ������� ��������� ���������� ������, ���
const double lambdaM = -72.58 * M_PI / 180.0;

// ������ �������� �� ������ ����, ����
const double p0   = 1013.25;
// ����������� �� ������ ����, �C
const double t0   = 15.0;
 // ������������� ��������� ������� �� ������ ����, %
const double r0   = 50.0;
// �������� ������� ����������� � ����������, �/��
const double Beta = -6.5;
 // ������ ����������, ��
const double ht   = 11.231;
