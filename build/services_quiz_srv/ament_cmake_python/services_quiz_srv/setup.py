from setuptools import find_packages
from setuptools import setup

setup(
    name='services_quiz_srv',
    version='0.0.0',
    packages=find_packages(
        include=('services_quiz_srv', 'services_quiz_srv.*')),
)
