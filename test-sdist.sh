#!/bin/sh
set -e -x

VENV="$1"
[ "$PYTHON" ] || PYTHON=python

[ -f setup.py ] || exit 1

TDIR=`mktemp -d`
trap 'rm -rf $TDIR' INT TERM QUIT EXIT

install -d "$TDIR"/dist
install -d dist

[ "$VENV" ] || VENV="$TDIR"/env
[ -d "$VENV" ] && rm -rf "$VENV"

$PYTHON -m virtualenv -p $PYTHON --no-download --system-site-packages "$VENV"

. "$VENV"/bin/activate

if [ -d "$HOME"/projects/setuptools-dso ]
then
    python -m pip install --no-index file://"$HOME"/projects/setuptools-dso
else
    python -m pip install --pre setuptools-dso
fi

python setup.py sdist -d "$TDIR"/dist
ls "$TDIR"/dist/*.gz
cp "$TDIR"/dist/*.gz dist/

#python -m pip install -v "$TDIR"/dist/*
python -m pip wheel -w "$TDIR"/dist -v "$TDIR"/dist/*.gz
cp "$TDIR"/dist/*.whl dist/

python -m pip install "$TDIR"/dist/*.whl

python -m nose epicscorelibs

echo "Success"
