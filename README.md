# docker

Configuration InfluxDB
InfluxDB can be either configured from a config file or using environment variables. To mount a configuration file and use it with the server, you can use this command:
Generate the default configuration file:

    $ docker run --rm influxdb influxd config > influxdb.conf

Start InfluxDB container en run

    docker exec -it influxdb influx

Maak database

    CREATE DATABASE home_assistant
    exit
