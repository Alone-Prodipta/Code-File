const button = document.getElementById("location");

function foundLocation(position) {
  const lat = position.coords.latitude;
  const lon = position.coords.longitude;
  const api = `https://nominatim.openstreetmap.org/reverse?lat=${lat}&lon=${lon}&format=json`;
  console.log(api);
}
function notFoundLocation(position) {
  console.log("location can not be traced!!!");
}
button.addEventListener("click", async () => {
  navigator.geolocation.getCurrentPosition(foundLocation, notFoundLocation);
});
