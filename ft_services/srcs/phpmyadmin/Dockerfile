FROM alpine:3.12

RUN	echo "http://dl-2.alpinelinux.org/alpine/edge/community" >> /etc/apk/repositories

RUN mkdir -p /run/nginx

RUN	apk update && apk upgrade 
RUN		apk add nginx openrc openssl telegraf \
		php7 php7-fpm php7-mysqli php7-xml php7-simplexml php7-json \
    	php7-iconv php7-tokenizer php7-xmlwriter php7-session php7-mbstring

COPY nginx.conf /etc/nginx/conf.d/default.conf
COPY telegraf.conf /etc/telegraf/
COPY ./healthy.sh /tmp/healthy.sh

RUN wget http://files.directadmin.com/services/all/phpMyAdmin/phpMyAdmin-5.0.2-all-languages.tar.gz
RUN tar -zxvf phpMyAdmin-5.0.2-all-languages.tar.gz
RUN rm phpMyAdmin-5.0.2-all-languages.tar.gz
RUN mv phpMyAdmin-5.0.2-all-languages phpmyadmin

COPY config.inc.php phpmyadmin/config.inc.php
RUN chmod 644 phpmyadmin/config.inc.php

COPY	./start_php.sh .
EXPOSE	5000

CMD		sh start_php.sh
