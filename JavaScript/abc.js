// //const api = "https://dummyjson.com/products/search?q=phone";
// const api = "https://mcp.zylalabs.com/mcp?apikey=13436|d1KUxOL1aVp4kV4A1bi6NKP8dBmRLzCxJrMvKEzp";
// const xhr = new XMLHttpRequest();
// xhr.open("GET", api);
// xhr.onreadystatechange = function () {
//     console.log(xhr.readyState);
//     if (xhr.readyState === 4) {
//         const data = JSON.parse(xhr.responseText);
//         console.log(data);
//         let maxLength= 40;
//         //const index= 2;
//         const cards = document.querySelectorAll(".card");

//         // Loop through each card and assign product data
//         cards.forEach((card, index) => {
//             const image= card.querySelector("img");
//             const description= card.querySelector(".description");
//             const price= card.querySelector(".price");
//             const rating= card.querySelector(".rating");
//             const stock= card.querySelector(".stock");
//             const item= card.querySelector(".item")
//             if (data.products[index]) 
//             {
//                 item.innerText= data.products[index].title;
//                 image.src= data.products[index].thumbnail;
//                 about= data.products[index].description;
//                 if(about.length >= maxLength) 
//                 {
//                     description.innerText= about.substring(0, maxLength) + "...";
//                 }
//                 else
//                 {
//                     description.innerText= about;
//                 }
//                 price.innerText= 'Rs.'+data.products[index].price;
//                 rating.innerText= data.products[index].rating+'%';
//                 stock.innerText= data.products[index].stock+' left';
//             } 
//             else 
//             {
//                 image.src = "";
//                 description.innerText = "No product available";
//             }
//         });
//     }
// };
// xhr.send();


const fetch = require("node-fetch");

const url = "https://mcp.zylalabs.com/mcp?apikey=13436|d1KUxOL1aVp4kV4A1bi6NKP8dBmRLzCxJrMvKEzp";

const body = {
  jsonrpc: "2.0",
  id: 1,
  method: "initialize",
  params: {
    protocolVersion: "2024-11-05",
    capabilities: {},
    clientInfo: { name: "my-agent", version: "1.0.0" }
  }
};

fetch(url, {
  method: "POST",
  headers: { "Content-Type": "application/json" },
  body: JSON.stringify(body)
})
  .then(res => res.json())
  .then(console.log)
  .catch(console.error);
