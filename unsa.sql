CREATE database unsa;
use unsa;

CREATE TABLE aconseja (
  DNI_alumno integer,
  DNI_no_becario integer,
  PRIMARY KEY (DNI_alumno,DNI_no_becario)
);

CREATE TABLE alum_becario (
  DNI integer,
  PRIMARY KEY (DNI)
);

CREATE TABLE alum_no_becario (
  DNI integer,
  PRIMARY KEY (DNI)
);

CREATE TABLE alumno (
  DNI integer,
  PRIMARY KEY (DNI)
);

CREATE TABLE becario_invest (
  DNI_becario integer,
  codigo_investigacion integer,
  PRIMARY KEY (DNI_becario,codigo_investigacion)
);

CREATE TABLE empresa (
  codigo_empresa integer,
  nombre varchar(45),
  PRIMARY KEY (codigo_empresa)
);

CREATE TABLE empresa_aplic (
  codigo_investigacion_aplic integer,
  codigo_empresa integer,
  PRIMARY KEY (codigo_investigacion_aplic,codigo_empresa)
);

CREATE TABLE hito (
  numero_hito integer,
  fecha_inicio date,
  fecha_fin date,
  codigo_investigacion integer,
  PRIMARY KEY (numero_hito)
);

CREATE TABLE hito_objetivo (
  numero_hito integer,
  objetivo varchar(65),
  PRIMARY KEY (numero_hito,objetivo)
);

CREATE TABLE inv_aplicada (
  codigo_investigacion_aplic integer,
  PRIMARY KEY (codigo_investigacion_aplic)
);


CREATE TABLE inv_basica (
  codigo_investigacion_basic integer,
  PRIMARY KEY (codigo_investigacion_basic)
);

CREATE TABLE investigacion (
  codigo_investigacion integer,
  presupuesto integer,
  DNI_profesor integer,
  PRIMARY KEY (codigo_investigacion)
);

CREATE TABLE persona (
  DNI integer,
  nombre varchar(30),
  primer_apell varchar(30),
  segundo_apell varchar(30),
  PRIMARY KEY (DNI)
);


CREATE TABLE persona_correo (
  DNI integer,
  correo_electronico varchar(45),
  PRIMARY KEY (DNI,correo_electronico)
);

CREATE TABLE profesor (
  DNI integer,
  especialidad varchar(45),
  DNI_becario integer,
  PRIMARY KEY (DNI)
);

CREATE TABLE profesor_invest (
  DNI_profesor integer,
  codigo_investigacion integer,
  PRIMARY KEY (DNI_profesor,codigo_investigacion)
);

CREATE TABLE uni_basica (
  codigo_investigacion_basic integer,
  codigo_universidad integer,
  PRIMARY KEY (codigo_investigacion_basic,codigo_universidad)
);

CREATE TABLE universidad (
  codigo_universidad integer,
  nombre varchar(45),
  PRIMARY KEY (codigo_universidad)
);
