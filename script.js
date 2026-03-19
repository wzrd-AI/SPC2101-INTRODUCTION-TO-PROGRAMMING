

// Flood alerts
const floodAlerts = [
  "⚠ Heavy rainfall expected in Nairobi and Kiambu within the next 24 hours.",
  "⚠ River Tana water levels rising  potential flooding risk.",
  "⚠ Flash flood warning for low-lying areas in Kisumu.",
  "⚠ Flood risk increasing in western Kenya due to heavy upstream rainfall.",
  "⚠ River levels rising in the Tana River basin, potential flooding risk for downstream communities.",
  "⚠ Localized flooding reported in parts of Nairobi and Mombasa due to heavy rains."
];

let floodIndex = 0;
function showFloodAlert() {
  document.getElementById("alertsBox").innerText = floodAlerts[floodIndex];
  floodIndex = (floodIndex + 1) % floodAlerts.length;
}
setInterval(showFloodAlert, 5000);
showFloodAlert(); // show first immediately

// Safe alerts
const safeAlerts = [
  "✔ No major flood risk reported in Mombasa today",
  "✔ Flood risk low across most regions, but stay alert for localized heavy showers.",
  "✔ Flood risk low across most regions, but stay alert for localized heavy showers in coastal areas.",
  "✔ Flood risk low across most regions, but stay alert for localized heavy showers in western Kenya.",
  "✔ Stability improving in the Tana River basin, but continue monitoring water levels.",
  "✔Stable conditions reported in Nairobi and Kisumu, but localized heavy showers may still cause minor flooding."
];

let safeIndex = 0;
function showSafeAlert() {
  document.getElementById("safealertsBox").innerText = safeAlerts[safeIndex];
  safeIndex = (safeIndex + 1) % safeAlerts.length;
}
setInterval(showSafeAlert, 5000);
showSafeAlert(); // show first immediately
const weatherData = [
  "🌤 Nairobi: 26°C  Partly cloudy",
  "🌧 Kisumu: 22°C  Heavy rainfall expected",
  "☀ Mombasa: 30°C  Sunny with high humidity",
  "⛈ Eldoret: 18°C  Thunderstorms likely",
  "🌦 Nakuru: 20°C  Light showers",
  "🌩 Kisii: 19°C  Stormy conditions expected",
  "🌤 Garissa: 28°C  Clear skies with mild breeze",
  "🌧 Kakamega: 21°C  Heavy rainfall expected"
];

let weatherIndex = 0;
function showWeather() {
  const box = document.getElementById("weatherBox");
  box.classList.add("hidden"); 
  setTimeout(() => {
    box.innerText = weatherData[weatherIndex];
    weatherIndex = (weatherIndex + 1) % weatherData.length;
    box.classList.remove("hidden"); 
  }, 1000);
}

// Rotate every 6 seconds
setInterval(showWeather, 6000);
showWeather(); 

document.getElementById("floodForm").addEventListener("submit", function(e) {
  e.preventDefault();

  const name = document.getElementById("name").value.trim();
  const location = document.getElementById("location").value.trim();
  const description = document.getElementById("description").value.trim();

  if (!name || !location || !description) {
    alert("⚠ Please fill in all fields before submitting.");
    return;
  }

  const reportItem = document.createElement("div");
  reportItem.classList.add("report-item");
  reportItem.innerHTML = `<strong>${name}</strong> (${location})<br>${description}`;

 
  document.getElementById("reportList").appendChild(reportItem);


  let reports = JSON.parse(localStorage.getItem("floodReports")) || [];
  reports.push({ name, location, description });
  localStorage.setItem("floodReports", JSON.stringify(reports));


  document.getElementById("floodForm").reset();
});


window.onload = function() {
  let reports = JSON.parse(localStorage.getItem("floodReports")) || [];
  reports.forEach(r => {
    const reportItem = document.createElement("div");
    reportItem.classList.add("report-item");
    reportItem.innerHTML = `<strong>${r.name}</strong> (${r.location})<br>${r.description}`;
    document.getElementById("reportList").appendChild(reportItem);
  });
};
// Save checklist state in localStorage
document.querySelectorAll("#safetyChecklist input[type=checkbox]").forEach((box, index) => {
  box.addEventListener("change", () => {
    let checklist = JSON.parse(localStorage.getItem("safetyChecklist")) || {};
    checklist[index] = box.checked;
    localStorage.setItem("safetyChecklist", JSON.stringify(checklist));
  });
});

// Load saved state on page refresh
window.onload = function() {
  let checklist = JSON.parse(localStorage.getItem("safetyChecklist")) || {};
  document.querySelectorAll("#safetyChecklist input[type=checkbox]").forEach((box, index) => {
    if (checklist[index]) box.checked = true;
  });
};

// Reset checklist
document.getElementById("resetChecklist").addEventListener("click", () => {
  localStorage.removeItem("safetyChecklist");
  document.querySelectorAll("#safetyChecklist input[type=checkbox]").forEach(box => {
    box.checked = false;
  });
});
