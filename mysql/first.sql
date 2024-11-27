create database college;

use college;

create table student (
	id int primary key,
    name varchar(50),
    age int not null
);

insert into student values(1, "asus",26);
insert into student values(2,"tuf",15);

select * FROM STUDENT;
