create table bank_user
(
user_id int primary key,
user_name varchar(100) not null,
user_surname varchar(100) not null,
user_patronymic varchar(100),
user_age int,
user_finance float,
user_phone varchar(20) unique not null
);
