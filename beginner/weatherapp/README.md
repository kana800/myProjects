# Weather App

### [Web Based](webbased)

Make sure to replace the API key with your own API key from [openweathermaps](https://openweathermap.org/api).

- [livepreview](https://codepen.io/kana800/pen/powLVXQ)

### [Desktop](desktopgui)

Before running the programming makesure `PyQt5` and `requests` are installed. Also you need replace the API key with your own API key from [openweathermaps](https://openweathermap.org/api).

To run the program
```
python3 weatherapp.py
```

#### Demo

![](.images/desktoptest.png)

---

**Tier:** 1-Beginner

A weather application to get the temperature, weather condition and whether it is day or night of a particular city using `accuweather`. A free weather api.

## User Stories

- [x] Enter the name of a city into the `input` field.
- [x] By pressing enter, the user submits the name of the city which updates the `DOM` with the temperature, weather condition, image of day or night and weather condition icon.

## Bonus features

- [ ] By closing the browser window the city name will be stored in localStorage and when the user returns, the name will be retrieved to make an api call to update the `DOM`.

## Useful links and resources

- [localStorage](https://developer.mozilla.org/en-US/docs/Web/API/Window/localStorage)
- [accuweather](https://developer.accuweather.com/)
- [axios](https://github.com/axios/axios)
- [bootstrap](https://getbootstrap.com/)

## Example projects

- [Weather App on Codepen](https://codepen.io/tutsplus/pen/gObLaEP) by [George Martsoukos]
- [Coding A Weather App In Pure JavaScipt](https://www.youtube.com/watch?v=ZPG2wGNj6J4)


## Image References

- [clearsky](https://unsplash.com/photos/ROVBDer29PQ)
- [cloudysky](https://unsplash.com/photos/UbDc3Mm7JP8)
- [rainsky](https://unsplash.com/photos/gw023awV33A)
- [snowsky](https://unsplash.com/s/photos/snow-sky)

for the icons in the `desktop gui` you can download some random icons, the program will use `QPixmap` and **scale down** the image to the size of the `label`.
