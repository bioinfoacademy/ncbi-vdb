FROM centos:7

MAINTAINER mike.vartanian@nih.gov

ENV PERLLIB="."

RUN yum -y --exclude=kernel.* update \
        && \
    yum -y install bison \
    flex \
    gcc-c++ \
    git \
    libcurl-devel \
    make \
    zlib-devel \
        && \
    rm -rf /var/cache/yum
