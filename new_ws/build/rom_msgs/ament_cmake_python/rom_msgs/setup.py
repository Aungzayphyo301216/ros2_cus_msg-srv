from setuptools import find_packages
from setuptools import setup

setup(
    name='rom_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rom_msgs', 'rom_msgs.*')),
)
