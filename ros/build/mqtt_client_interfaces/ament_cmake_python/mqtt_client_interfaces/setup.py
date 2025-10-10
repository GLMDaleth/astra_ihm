from setuptools import find_packages
from setuptools import setup

setup(
    name='mqtt_client_interfaces',
    version='2.3.0',
    packages=find_packages(
        include=('mqtt_client_interfaces', 'mqtt_client_interfaces.*')),
)
