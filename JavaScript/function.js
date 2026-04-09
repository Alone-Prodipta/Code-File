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
let body= document.querySelector("body");
select.forEach(function(item)
{
    item.addEventListener("click",function(e)
    {
        if(e.target.id== "red")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id== "pink")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id== "orange")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id== "cyan")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id== "yellow")
        {
            body.style.backgroundColor= e.target.id;
        }        
    });
});