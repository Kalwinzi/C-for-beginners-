#include <iostream>
#include <ctime>

using namespace std;

struct WeatherData {
    float temperature;
    float humidity;
    float pressure;
    // Add more fields as needed (e.g., wind speed, rainfall)
};

WeatherData simulateWeatherData() {
    // Simulate random weather data
    srand(time(NULL));
    WeatherData data;
    data.temperature = 20.0 + (rand() % 10) / 10.0;
    data.humidity = 50.0 + (rand() % 50) / 10.0;
    data.pressure = 1013.25 + (rand() % 10) / 10.0;
    // ... Add more simulations for other fields
    return data;
}

int main() {
    WeatherData weatherData = simulateWeatherData();

    cout << "Weather Data:" << endl;
    cout << "Temperature: " << weatherData.temperature << "°C" << endl;
    cout << "Humidity: " << weatherData.humidity << "%" << endl;
    cout << "Pressure: " << weatherData.pressure << " hPa" << endl;
    // ... Display other fields as needed

    // You can add logic here to analyze the weather data,
    // such as determining weather conditions (e.g., sunny, rainy, cloudy)
    // or triggering alerts based on certain thresholds.

    return 0;
}
