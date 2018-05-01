#!/bin/sh
set -e -x

PYTHON="$1"
[ "$PYTHON" ] || PYTHON=python

[ -f setup.py ] || exit 1

install -d dist
cd dist

rm -rf testenv

virtualenv testenv

. testenv/bin/activate

pip install nose
pip install ~/projects/setuptools-dso/dist/setuptools_dso-0.1a9-py2.py3-none-any.whl

cd ..

python setup.py sdist

cd dist

if ! [ `ls -1 epicscorelibs-*.tar.gz|wc -l` = 1 ]
then
  ls epicscorelibs-*.tar.gz
  echo "Too many source tars" >&2
  exit 1
fi

pip install -v epicscorelibs-*.tar.gz

python -m nose epicscorelibs

echo "Success"
