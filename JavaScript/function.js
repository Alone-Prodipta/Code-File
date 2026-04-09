/*let prev= document.querySelector("#prev");
let next= document.querySelector("#next");
next.addEventListener("click",function(){
    let items= document.querySelectorAll(".item");
    document.querySelector("slide").appendChild(items[0]);
});
prev.addEventListener("click",function(){
    let items= document.querySelectorAll(".item");
    document.querySelector("slide").prepend(items[items.length-1]);
});*/
let slide= document.querySelectorAll(".item");
let body= document.querySelector(".container");
slide.forEach(function(item)
{
    item.addEventListener("click",function(e)
    {
        if(e.target.id== "red")
        {
            body.style.backgroundColor= e.target.id;
            body.style.top= "0";
            body.style.left= "0";
            body.style.transform= "translate(0,0)";
            body.style.borderRadius= "0";
            body.style.width= "100%";
            body.style.height= "100%";
            body.style.visibility= "visible";
        }
        if(e.target.id== "pink")
        {
            body.style.backgroundColor= e.target.id;
            body.style.top= "0";
            body.style.left= "0";
            body.style.transform= "translate(0,0)";
            body.style.borderRadius= "0";
            body.style.width= "100%";
            body.style.height= "100%";
            body.style.visibility= "visible";
        }
        if(e.target.id== "orange")
        {
            body.style.backgroundColor= e.target.id;
            body.style.top= "0";
            body.style.left= "0";
            body.style.transform= "translate(0,0)";
            body.style.borderRadius= "0";
            body.style.width= "100%";
            body.style.height= "100%";
            body.style.visibility= "visible";
        }
        if(e.target.id== "cyan")
        {
           body.style.backgroundColor= e.target.id;
            body.style.top= "0";
            body.style.left= "0";
            body.style.transform= "translate(0,0)";
            body.style.borderRadius= "0";
            body.style.width= "100%";
            body.style.height= "100%";
            body.style.visibility= "visible";
        }
        if(e.target.id== "yellow")
        {
            body.style.backgroundColor= e.target.id;
            body.style.top= "0";
            body.style.left= "0";
            body.style.transform= "translate(0,0)";
            body.style.borderRadius= "0";
            body.style.width= "100%";
            body.style.height= "100%";
            body.style.visibility= "visible";
        }        
    });
});