const api = "https://dummyjson.com/products/search?q=phone";
const xhr = new XMLHttpRequest();
xhr.open("GET", api);
xhr.onreadystatechange = function () {
    console.log(xhr.readyState);
    if (xhr.readyState === 4) {
        const data = JSON.parse(xhr.responseText);
        console.log(data);
        let maxLength= 40;
        //const index= 2;
        const cards = document.querySelectorAll(".card");

        // Loop through each card and assign product data
        cards.forEach((card, index) => {
            const image= card.querySelector("img");
            const description= card.querySelector(".description");
            const price= card.querySelector(".price");
            const rating= card.querySelector(".rating");
            const stock= card.querySelector(".stock");
            const item= card.querySelector(".item")
            if (data.products[index]) 
            {
                item.innerText= data.products[index].title;
                image.src= data.products[index].thumbnail;
                about= data.products[index].description;
                if(about.length >= maxLength) 
                {
                    description.innerText= about.substring(0, maxLength) + "...";
                }
                else
                {
                    description.innerText= about;
                }
                price.innerText= 'Rs.'+data.products[index].price;
                rating.innerText= data.products[index].rating+'%';
                stock.innerText= data.products[index].stock+' left';
            } 
            else 
            {
                image.src = "";
                description.innerText = "No product available";
            }
        });
    }
};
xhr.send();


